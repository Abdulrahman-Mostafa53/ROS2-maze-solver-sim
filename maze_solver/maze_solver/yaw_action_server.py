import math
import time
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from rclpy.callback_groups import ReentrantCallbackGroup
from rcl_interfaces.msg import SetParametersResult
from rclpy.executors import MultiThreadedExecutor
from geometry_msgs.msg import Twist
from geometry_msgs.msg import Pose
from maze_interfaces.action import Yaw
from maze_interfaces.srv import Error
from tf_transformations import euler_from_quaternion
from maze_solver.pid import Pid

class MoveYawActionServer(Node):

    def __init__(self):
        super().__init__('move_yaw_action_server')

        self.callback_group = ReentrantCallbackGroup()

        self.declare_parameter('yaw_kp', 1.0)
        self.declare_parameter('yaw_ki', 0.8)
        self.declare_parameter('yaw_kd', 0.01)
        self.declare_parameter('yaw_controller_clamp', 1.0)

        self.add_on_set_parameters_callback(self.parameter_callback)

        self._action_server = ActionServer(
            self,
            Yaw,
            'move_yaw',
            self.execute_callback,
            callback_group=self.callback_group
        )

        self.publisher_ = self.create_publisher(
            Twist, 
            '/cmd_vel', 
            10
        )

        self.subscription = self.create_subscription(
            Pose,
            '/robot/ground_truth_pose',
            self.odom_callback,
            10,
        )

        self.current_yaw = 0.0
        self.is_executing_goal = False
        self.start_yaw_goal = 0.0
        self.current_direction = ""
        
        self.srv = self.create_service(
            Error,
            'stop_robot',
            self.stop_robot_callback,
            callback_group=self.callback_group
        )
        
        self.get_logger().info('MoveYaw MultiThreaded Action Server & Stop Robot Service initialized.')
        self.target_angle_rad= math.pi / 2
        #creating a pid yaw object
        self.yaw_pid = Pid(
            target=self.target_angle_rad,
            kp=1.5,
            ki=0.005,
            kd=0.01,
            controller_clamp=10,
            thres=0.005,
            anti_wind_clamp=20
        )

    def execute_stop(self):
        zero_angular_velocity = Twist()
        zero_angular_velocity.angular.z = 0.0
        self.publisher_.publish(zero_angular_velocity)

    def perform_recovery_return(self, start_yaw, direction):
        self.get_logger().info('Executing recovery: Returning to original starting orientation...')
        
        base_speed = 1.0
        recovery_twist = Twist()
        
        while rclpy.ok():
            current_diff = self.normalize_angle(self.current_yaw - start_yaw)
            if abs(current_diff) < 0.1:
                break
            
            recovery_twist.angular.z = -base_speed if current_diff > 0 else base_speed
            self.publisher_.publish(recovery_twist)
            time.sleep(0.05)

        self.execute_stop()
        self.get_logger().info('Successfully returned to original orientation via stop service.')

    def stop_robot_callback(self, request, response):
        if request.stop:
            if self.is_executing_goal:
                self.get_logger().info('Stop service triggered during active movement. Forcing recovery return...')
                self.perform_recovery_return(self.start_yaw_goal, self.current_direction)
                self.is_executing_goal = False
                
                response.success = True
                response.message = 'Robot stopped and successfully returned to original orientation.'
            else:
                self.execute_stop()
                response.success = True
                response.message = 'Robot is idle. Zero angular velocity applied.'
                
            self.get_logger().info('Stop service executed successfully!')
        else:
            self.get_logger().info('Received stop request as False, doing nothing.')
            response.success = False
            response.message = 'Stop request was False, no action taken.'

        return response


    def parameter_callback(self, params):
        for param in params:
            if param.name in [
                'yaw_kp',
                'yaw_ki',
                'yaw_kd',
                'yaw_controller_clamp'
            ]:
                if param.value < 0.0:
                    return SetParametersResult(
                        successful=False,
                        reason=f'{param.name} cannot be negative'
                    )
        return SetParametersResult(successful=True)
    
    def odom_callback(self, msg):
        q = msg.orientation
        quaternion = [q.x,q.y,q.z,q.w]
        self.current_yaw = euler_from_quaternion(quaternion)[2]
        # self.get_logger().info(f"Current yaw : {self.current_yaw * (180/math.pi)}")

    def normalize_angle(self, angle):
        return math.atan2(math.sin(angle), math.cos(angle))

    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal: Rotating robot...')
        
        direction = goal_handle.request.direction.lower()
        
        if direction not in ['left', 'right']:
            self.get_logger().error(f"Invalid direction received: '{direction}'. Expected 'left' or 'right'.")
            goal_handle.abort()
            result = Yaw.Result()
            result.success = False
            result.final_direction = "none"
            return result

        self.is_executing_goal = True
        self.current_direction = direction
        self.start_yaw_goal = self.current_yaw

        target_angle_rad = (math.pi / 2.0)
        # base_speed = 1.5

        # if direction == 'left':
        #     angular_speed =  base_speed
        # else:
        #     angular_speed = -base_speed

        angle_traveled = 0.0

        while rclpy.ok() and self.is_executing_goal:
            # yaw_diff = self.current_yaw - self.start_yaw_goal
            # angle_traveled = self.normalize_angle(yaw_diff)

            #computing the final PID anuglar speed 
            output = self.yaw_pid.compute(self.current_yaw)
            print(output, " pop")

            #desciding which way to rotate
            if direction == 'left':
                angular_speed = output
            else:
                 angular_speed = - output
            

            feedback_msg = Yaw.Feedback()
            angular_twist = Twist()
            angular_twist.angular.z = float(angular_speed)
            feedback_msg.current_yaw = float(self.current_yaw)

            goal_handle.publish_feedback(feedback_msg)

            if goal_handle.is_cancel_requested:
                self.get_logger().info('Goal canceled via action client! Returning robot...')
                self.perform_recovery_return(self.start_yaw_goal, self.current_direction)
                self.is_executing_goal = False

                result = Yaw.Result()
                result.success = False
                result.final_direction = "canceled_" + direction
                return result

            # angular_twist.angular.z = angular_speed
            self.publisher_.publish(angular_twist)
            time.sleep(0.05)

        if not self.is_executing_goal:
            result = Yaw.Result()
            result.success = False
            result.final_direction = "stopped_via_service_" + direction
            goal_handle.abort()
            return result

        self.execute_stop()
        self.is_executing_goal = False
        goal_handle.succeed()   

        result = Yaw.Result()
        result.success = True
        result.final_direction = direction  
        self.get_logger().info(f'Target 90-degree rotation reached successfully. Final direction: {result.final_direction}')
        return result


def main():
    rclpy.init()
    move_yaw_action_server = MoveYawActionServer()
    
    executor = MultiThreadedExecutor(num_threads=4)
    executor.add_node(move_yaw_action_server)
    
    try:
        executor.spin()
    finally:
        move_yaw_action_server.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()