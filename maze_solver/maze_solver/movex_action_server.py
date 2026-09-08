import math
import time
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
from maze_interfaces.action import MoveX
from maze_interfaces.srv import Error
from pid import Pid

class MoveXActionServer(Node):

    def __init__(self):
        super().__init__('move_x_action_server')
        self.last_odm_time = self.get_clock().now()
        # Use ReentrantCallbackGroup to allow concurrent execution of callbacks and actions
        self.callback_group = ReentrantCallbackGroup()

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
            Odometry,
            '/odom',
            self.odom_callback,
            10,
            callback_group=self.callback_group
        )

        # Variables to track position
        self.current_x = 0.0
        self.current_y = 0.0
        
        # Create Service Server
        self.srv = self.create_service(
            Error,
            'stop_robot',
            self.stop_robot_callback,
            callback_group=self.callback_group
        )
        
        self.get_logger().info('MoveX MultiThreaded Action Server initialized.')

        #creating movex PID object
        movex_pid = Pid(target = self.movex.TARGET, kp=0.0, ki=0.0, kd=0.0,anti_wind_clamp=1e+8,controller_clamp = 1e+8,thres=0.0000001)

    def execute_stop(self):
        twist = Twist()
        twist.linear.x = 0.0
        twist.angular.z = 0.0
        self.publisher_.publish(twist)

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

    def odom_callback(self, msg):
        # This will now run freely in parallel thanks to MultiThreadedExecutor
        self.last_odm_time = self.get_clock().now()
        self.current_x = msg.pose.pose.position.x
        self.current_y = msg.pose.pose.position.y

    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal: Moving forward...')
        
        target_distance = goal_handle.request.target_distance
        self.movex.TARGET = target_distance
        # speed = 0.8
        
        start_x = self.current_x
        start_y = self.current_y
    

        distance_traveled = 0.0

        start_time=self.get_clock().now()
        # max time 
        TimeOut_duration=15.0
        while rclpy.ok() and (distance_traveled < target_distance):
            result = MoveX.Result()
            # Read continuously updated coordinates safely in parallel
            current_time = self.get_clock().now()

            #comput the final PID linear velocity
            output = self.movex.pid.compute(start_x)
        
            feedback_msg = MoveX.Feedback()
            twist = Twist()
            # store feedback from the computed velocity 
            twist.linear.x = output
            twist.angular.z = 0.0



            #### EDGE CASE "MISSING /odm "
            last_time_odm_Msg=(current_time - self.last_odm_time).nanoseconds/1e9 #convert to sec
            if last_time_odm_Msg > 2.0 : # 2 sec pass 
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