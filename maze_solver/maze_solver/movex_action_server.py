import math
import time
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Pose
from maze_interfaces.action import MoveX
from maze_interfaces.srv import Error
from rcl_interfaces.msg import SetParametersResult
from maze_solver.pid import Pid
from tf_transformations import euler_from_quaternion


class MoveXActionServer(Node):

    def __init__(self):
        super().__init__('move_x_action_server')
        self.last_pose_time = self.get_clock().now()
        # Use ReentrantCallbackGroup to allow concurrent execution of callbacks and actions
        self.callback_group = ReentrantCallbackGroup()

        self.declare_parameter('heading_kp', 10.0)
        self.declare_parameter('heading_ki', 0.03)
        self.declare_parameter('heading_kd', 0.02)
        self.declare_parameter('heading_controller_clamp', 1000.0)

        self.declare_parameter('movex_kp', 10.0)
        self.declare_parameter('movex_ki', 0.03)
        self.declare_parameter('movex_kd', 0.02)
        self.declare_parameter('movex_controller_clamp', 1000.0)

        self.add_on_set_parameters_callback(self.parameter_callback)

        # Create the Action Server with reentrant callback group
        self._action_server = ActionServer(
            self,
            MoveX,
            'move_x',
            self.execute_callback,
            callback_group=self.callback_group
        )

        # Create Publisher
        self.publisher_ = self.create_publisher(
            Twist, 
            '/cmd_vel', 
            10
        )

        # Create Subscriber using the same callback group for multi-threading access
        self.subscription = self.create_subscription(
            Pose,
            '/robot/ground_truth_pose',
            self.pose_callback,
            10,
            callback_group=self.callback_group
        )
        self.target_angle_rad = 0.0

        # Variables to track position
        self.current_x = 0.0
        self.current_y = 0.0
        self.current_yaw = 0.0
        # Create Service Server
        self.srv = self.create_service(
            Error,
            'stop_robot',
            self.stop_robot_callback,
            callback_group=self.callback_group
        )
        
        self.get_logger().info('MoveX MultiThreaded Action Server initialized. weeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee')
                
        self.heading_pid = Pid(
            target=0.0,
            kp=0,
            ki=0,
            kd=0,
            controller_clamp=self.get_parameter(
                'heading_controller_clamp'
            ).value
        )

        self.movex_pid = Pid(
            target=self.target_angle_rad,
            kp=2.5,
            ki=0.05,
            kd=0.01,
            controller_clamp=1000,
            thres=0.005,
            anti_wind_clamp=2000
        )

    def execute_stop(self):
        twist = Twist()
        twist.linear.x = 0.0
        twist.angular.z = 0.0
        self.publisher_.publish(twist)

    def normalize_angle(self, angle):
        return math.atan2(math.sin(angle), math.cos(angle))    

    def stop_robot_callback(self, request, response):
        if request.stop:
            self.execute_stop()
            self.get_logger().info('Robot stopped successfully via service!')
            response.success = True
            response.message = 'Robot stopped successfully.'
        else:
            self.get_logger().info('Received stop request as False, doing nothing.')
            response.success = False
            response.message = 'Stop request was False, no action taken.'
        return response


    def parameter_callback(self, params):
        for param in params:
            if param.name in [
                'heading_kp',
                'heading_ki',
                'heading_kd',
                'heading_controller_clamp'
            ]:
                if param.value < 0.0:
                    return SetParametersResult(
                        successful=False,
                        reason=f'{param.name} cannot be negative'
                    )
        return SetParametersResult(successful=True)


    def pose_callback(self, msg):
        self.last_pose_time = self.get_clock().now()
        self.current_x = msg.position.x
        self.current_y = msg.position.y
        q = msg.orientation
        quaternion = [q.x, q.y, q.z, q.w]
        self.current_yaw = euler_from_quaternion(quaternion)[2]

    def execute_callback(self, goal_handle):

        previous_time = self.get_clock().now()
        self.get_logger().info('Executing goal: Moving forward...')
        
        target_distance = goal_handle.request.target_distance   
        self.movex_pid.set_target(target_distance) 
        self.heading_pid.set_target(math.pi/2)

        
        start_x = self.current_x
        start_y = self.current_y
        start_yaw = self.current_yaw

        
        feedback_msg = MoveX.Feedback()
        twist = Twist()

        distance_traveled = 0.0

        start_time=self.get_clock().now()
        # max time 
        TimeOut_duration=15.0
        while rclpy.ok() and (distance_traveled < target_distance):
            # self.get_logger().info(f"current_dis : {distance_traveled}")
            result = MoveX.Result()
            # Read continuously updated coordinates safely in parallel
            current_time = self.get_clock().now()
            previous_time = current_time

            #### EDGE CASE "MISSING /pose "
            last_time_pose_Msg=(current_time - self.last_pose_time).nanoseconds/1e9 #convert to sec
            if last_time_pose_Msg > 2.0 : # 2 sec pass 
               self.get_logger().info('Missing /odom....')
               self.execute_stop()
               # change status of goal
               goal_handle.abort()
               
               result.success = False
               result.final_distance = distance_traveled
               return result
            
            ### EDGE CASE "Time Out"
            passed_time = (current_time - start_time).nanoseconds /1e9
            if passed_time > TimeOut_duration :  ## per goal
                self.get_logger().info('TIME OUT!...')
                self.execute_stop()
                goal_handle.abort()
                result.success = False
                result.final_distance = distance_traveled
                return result
            distance_traveled = math.sqrt((self.current_x - start_x) ** 2 + (self.current_y - start_y) ** 2)

            heading_error = self.normalize_angle(self.current_yaw - start_yaw)
            angular_velocity = self.heading_pid.compute(heading_error)

            move_x_out = self.movex_pid.compute(distance_traveled)
            
          


            twist.linear.x = float(move_x_out)
            # twist.angular.z = float(angular_velocity)

            feedback_msg.current_distance_traveled = distance_traveled
            goal_handle.publish_feedback(feedback_msg)

            if goal_handle.is_cancel_requested:
                self.get_logger().info('Goal canceled.')
                self.execute_stop()
                
                result = MoveX.Result()
                result.success = False
                result.final_distance = distance_traveled
                return result
            self.publisher_.publish(twist)
            
            # Safe sleep that doesn't block the odom subscriber anymore!
            time.sleep(0.05)

        self.execute_stop()
        goal_handle.succeed()   

        result = MoveX.Result()
        result.success = True
        result.final_distance = distance_traveled  
        self.get_logger().info(f'Target distance reached: {result.final_distance:.2f}m')
        return result


def main():
    rclpy.init()
    move_x_action_server = MoveXActionServer()
    
    # Use MultiThreadedExecutor to handle multiple threads safely (Odom vs Action Loop)
    executor = MultiThreadedExecutor(num_threads=4)
    executor.add_node(move_x_action_server)
    
    try:
        executor.spin()
    finally:
        move_x_action_server.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()