import math
import time
import rclpy

from rclpy.node import Node
from rclpy.action import ActionServer
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor

from rcl_interfaces.msg import SetParametersResult

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

        # Parameters

        self.declare_parameter('yaw_kp', 1.5)
        self.declare_parameter('yaw_ki', 0.005)
        self.declare_parameter('yaw_kd', 0.01)

        self.declare_parameter(
            'yaw_anti_wind_clamp',
            20.0
        )

        self.declare_parameter(
            'yaw_controller_clamp',
            1.0
        )

        self.add_on_set_parameters_callback(
            self.parameter_callback
        )

        # PID

        self.yaw_pid = None
        # Ground Truth

        self.current_yaw = 0.0
        self.last_pose_time = self.get_clock().now()
        self.subscription = self.create_subscription(
            Pose,
            '/robot/ground_truth_pose',
            self.odom_callback,
            10,
            callback_group=self.callback_group
        )

        # Action Server

        self._action_server = ActionServer(
            self,
            Yaw,
            'move_yaw',
            self.execute_callback,
            callback_group=self.callback_group
        )

        # Publisher

        self.publisher_ = self.create_publisher(
            Twist,
            '/cmd_vel',
            10
        )

        # Stop Service

        self.srv = self.create_service(
            Error,
            'stop_robot',
            self.stop_robot_callback,
            callback_group=self.callback_group
        )

        # Goal State

        self.is_executing_goal = False
        self.start_yaw_goal = 0.0
        self.current_direction = ""

        self.get_logger().info(
            'MoveYaw MultiThreaded Action Server '
            '& Stop Robot Service initialized.'
        )

    # Stop Robot

    def execute_stop(self):

        zero_twist = Twist()
        zero_twist.linear.x = 0.0
        zero_twist.angular.z = 0.0
        self.publisher_.publish(zero_twist)

    # Angle Normalization

    def normalize_angle(self, angle):

        return math.atan2(
            math.sin(angle),
            math.cos(angle)
        )

    # Dynamic Parameters

    def parameter_callback(self, params):

        for param in params:

            if param.name in [
                'yaw_kp',
                'yaw_ki',
                'yaw_kd',
                'yaw_anti_wind_clamp',
                'yaw_controller_clamp'
            ]:

                if param.value < 0.0:

                    return SetParametersResult(
                        successful=False,
                        reason=f'{param.name} cannot be negative'
                    )

                if self.yaw_pid is not None:
                    if param.name == 'yaw_kp':

                        self.yaw_pid.set_kp(
                            param.value
                        )
                    elif param.name == 'yaw_ki':
                        self.yaw_pid.set_ki(
                            param.value
                        )
                    elif param.name == 'yaw_kd':
                        self.yaw_pid.set_kd(
                            param.value
                        )
                    elif param.name == 'yaw_anti_wind_clamp':
                        self.yaw_pid.set_anti_wind_clamp(
                            param.value
                        )
                    elif param.name == 'yaw_controller_clamp':
                        self.yaw_pid.set_controller_clamp(
                            param.value
                        )

        return SetParametersResult(
            successful=True
        )
    # Ground Truth Callback
    def odom_callback(self, msg):
        self.last_pose_time = self.get_clock().now()
        q = msg.orientation

        quaternion = [
            q.x,
            q.y,
            q.z,
            q.w
        ]
        self.current_yaw = euler_from_quaternion(
            quaternion
        )[2]

    # Stop Service Callback

    def stop_robot_callback(
        self,
        request,
        response
    ):

        if request.stop:

            if self.is_executing_goal:

                self.get_logger().info(
                    'Stop service triggered during active movement. '
                    'Forcing recovery return...'
                )

                self.perform_recovery_return(
                    self.start_yaw_goal,
                    self.current_direction
                )

                self.is_executing_goal = False

                response.success = True

                response.message = (
                    'Robot stopped and successfully '
                    'returned to original orientation.'
                )

            else:

                self.execute_stop()
                response.success = True
                response.message = (
                    'Robot is idle. '
                    'Zero angular velocity applied.'
                )
            self.get_logger().info(
                'Stop service executed successfully!'
            )
        else:

            self.get_logger().info(
                'Received stop request as False, doing nothing.'
            )
            response.success = False
            response.message = (
                'Stop request was False, no action taken.'
            )
        return response

    # Recovery

    def perform_recovery_return(
        self,
        start_yaw,
        direction
    ):

        self.get_logger().info(
            'Executing recovery: Returning to '
            'original starting orientation...'
        )

        base_speed = 1.0
        recovery_twist = Twist()
        while rclpy.ok():

            current_diff = self.normalize_angle(
                self.current_yaw - start_yaw
            )
            if abs(current_diff) < 0.01:
                break

            if current_diff > 0:

                recovery_twist.angular.z = -base_speed

            else:

                recovery_twist.angular.z = base_speed

            self.publisher_.publish(
                recovery_twist
            )

            time.sleep(0.05)

        self.execute_stop()
        self.get_logger().info(
            'Successfully returned to original orientation.'
        )

    # Move Yaw Action

    def execute_callback(self, goal_handle):

        self.get_logger().info(
            'Executing goal: Rotating robot...'
        )
        direction = (
            goal_handle.request.direction.lower()
        )
        if direction not in ['left', 'right']:

            self.get_logger().error(
                f"Invalid direction received: "
                f"'{direction}'. Expected 'left' or 'right'."
            )

            goal_handle.abort()

            result = Yaw.Result()

            result.success = False
            result.final_direction = 'none'

            return result

        self.is_executing_goal = True
        self.current_direction = direction

        # Starting yaw

        self.start_yaw_goal = self.current_yaw
        # Target angle

        target_angle_rad = math.pi / 2.0

        # Create PID

        self.yaw_pid = Pid(
            target=target_angle_rad,
            kp=self.get_parameter(
                'yaw_kp'
            ).value,
            ki=self.get_parameter(
                'yaw_ki'
            ).value,
            kd=self.get_parameter(
                'yaw_kd'
            ).value,
            anti_wind_clamp=self.get_parameter(
                'yaw_anti_wind_clamp'
            ).value,
            controller_clamp=self.get_parameter(
                'yaw_controller_clamp'
            ).value
        )
        # PID State
        previous_error = target_angle_rad
        previous_time = self.get_clock().now()
        # Timeout
        start_time = self.get_clock().now()
        timeout_duration = 15.0
        angle_traveled = 0.0
        feedback_msg = Yaw.Feedback()
        while (
            rclpy.ok()
            and self.is_executing_goal
        ):
            current_time = self.get_clock().now()
            # Calculate dt
            dt = max(
                (
                    current_time - previous_time
                ).nanoseconds / 1e9,
                0.001
            )

            previous_time = current_time
            # Pose Watchdog
            pose_age = (
                current_time - self.last_pose_time
            ).nanoseconds / 1e9

            if pose_age > 2.0:

                self.get_logger().error(
                    'Missing /robot/ground_truth_pose!'
                )
                self.execute_stop()
                self.is_executing_goal = False
                goal_handle.abort()
                result = Yaw.Result()
                result.success = False
                result.final_direction = (
                    'pose_timeout_' + direction
                )
                return result

            # Timeout

            elapsed_time = (
                current_time - start_time
            ).nanoseconds / 1e9

            if elapsed_time > timeout_duration:

                self.get_logger().error(
                    'Yaw action timed out!'
                )
                self.execute_stop()
                self.is_executing_goal = False
                goal_handle.abort()
                result = Yaw.Result()
                result.success = False
                result.final_direction = (
                    'timeout_' + direction
                )

                return result

            # Calculate yaw difference

            yaw_difference = self.normalize_angle(
                self.current_yaw - self.start_yaw_goal
            )

            # Determine direction

            if direction == 'left':

                angle_traveled = yaw_difference

            else:

                angle_traveled = -yaw_difference

            # PID Error

            self.yaw_pid.error = (
                target_angle_rad - angle_traveled
            )

            # Error Difference

            error_dif = (
                self.yaw_pid.error
                - previous_error
            )

            previous_error = self.yaw_pid.error

            # Integral

            self.yaw_pid.accum_error += (
                self.yaw_pid.error * dt
            )
            # PID Output
            output = self.yaw_pid.compute(
                dt,
                error_dif
            )
            # Determine angular direction
            if direction == 'left':
                angular_speed = output
            else:
                angular_speed = -output
            # Feedback
            feedback_msg.current_yaw = float(
                self.current_yaw
            )
            goal_handle.publish_feedback(
                feedback_msg
            )

            # Target Deadzone

            if abs(
                target_angle_rad - angle_traveled
            ) < 0.005:
                self.get_logger().info(
                    'Target yaw reached.'
                )
                break

            # Cancel

            if goal_handle.is_cancel_requested:

                self.get_logger().info(
                    'Goal canceled via action client!'
                )
                self.perform_recovery_return(
                    self.start_yaw_goal,
                    self.current_direction
                )
                self.is_executing_goal = False
                result = Yaw.Result()
                result.success = False
                result.final_direction = (
                    'canceled_' + direction
                )

                return result

            # Publish velocity

            angular_twist = Twist()
            angular_twist.angular.z = float(
                angular_speed
            )
            self.publisher_.publish(
                angular_twist
            )
            time.sleep(0.05)

        # Stopped via service

        if not self.is_executing_goal:
            result = Yaw.Result()
            result.success = False
            result.final_direction = (
                'stopped_via_service_' + direction
            )
            goal_handle.abort()
            return result

        # Success

        self.execute_stop()
        self.is_executing_goal = False
        goal_handle.succeed()
        result = Yaw.Result()
        result.success = True
        result.final_direction = direction
        self.get_logger().info(
            'Target 90-degree rotation reached successfully. '
            f'Final direction: {result.final_direction}'
        )
        return result
def main():
    rclpy.init()
    move_yaw_action_server = MoveYawActionServer()
    executor = MultiThreadedExecutor(
        num_threads=4
    )
    executor.add_node(
        move_yaw_action_server
    )
    try:
        executor.spin()
    finally:
        move_yaw_action_server.destroy_node()
        rclpy.shutdown()
if __name__ == '__main__':
    main()