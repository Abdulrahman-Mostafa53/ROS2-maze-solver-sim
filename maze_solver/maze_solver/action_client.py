import rclpy
from rclpy.node import Node
from std_srvs.srv import SetBool
from time import sleep
from maze_interfaces.action import MoveX
from maze_interfaces.action import Yaw
from rclpy.action import ActionClient


class WallServiceClient(Node):

    def __init__(self):
        super().__init__('wall_service_client')

        self.client = self.create_client(
            SetBool,
            '/toggle_walls_1_2'
        )

        # Wait until the service is available
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info(
                'Waiting for /toggle_walls_1_2 service...'
            )

        self.get_logger().info(
            'Wall service is available!'
        )

    def toggle_walls(self ,state):
        request = SetBool.Request()

        # true = toggle the walls
        request.data = state

        future = self.client.call_async(request)

        future.add_done_callback(self.service_response)

    def service_response(self, future):
        try:
            response = future.result()

            if response.success:
                self.get_logger().info(
                    f'Service succeeded: {response.message}'
                )
            else:
                self.get_logger().error(
                    f'Service failed: {response.message}'
                )

        except Exception as e:
            self.get_logger().error(
                f'Service call failed: {e}'
            )

class MazeSolver(Node):
    def __init__(self):
        super().__init__('maze_solver')

        self.movement_x_client = ActionClient(
            self,
            MoveX,
            'move_x'
        )

        self.movement_yaw_client = ActionClient(
            self,
            Yaw,
            'move_yaw'
        )

    def move_x(self, distance):
        self.get_logger().info("ffffff")
        goal_msg = MoveX.Goal()
        goal_msg.target_distance = distance

        self.movement_x_client.wait_for_server()
        self.get_logger().info("ffffff")
        future = self.movement_x_client.send_goal_async(
            goal_msg
        )

        future.add_done_callback(
            self.movement_x_goal_response
        )

    def movement_x_goal_response(self, future):

        goal_handle = future.result()

        if not goal_handle.accepted:
            self.get_logger().error(
                'movement_x goal was rejected.'
            )
            return

        self.get_logger().info(
            'movement_x goal was accepted.'
        )

        result_future = goal_handle.get_result_async()

        result_future.add_done_callback(
            self.movement_x_result
        )

    def movement_x_result(self, future):

        result = future.result().result

        if result.success:
            self.get_logger().info(
                'movement_x completed successfully.'
            )
        else:
            self.get_logger().error(
                'movement_x failed.'
            )

    def move_yaw(self, direction):

        goal_msg = Yaw.Goal()
        goal_msg.direction = direction

        self.movement_yaw_client.wait_for_server()

        future = self.movement_yaw_client.send_goal_async(
            goal_msg
        )

        future.add_done_callback(
            self.movement_yaw_goal_response
        )

    def movement_yaw_goal_response(self, future):

        goal_handle = future.result()

        if not goal_handle.accepted:
            self.get_logger().error(
                'movement_yaw goal was rejected.'
            )
            return

        self.get_logger().info(
            'movement_yaw goal was accepted.'
        )

        result_future = goal_handle.get_result_async()

        result_future.add_done_callback(
            self.movement_yaw_result
        )

    def movement_yaw_result(self, future):

        result = future.result().result

        if result.success:
            self.get_logger().info(
                'movement_yaw completed successfully.'
            )
        else:
            self.get_logger().error(
                'movement_yaw failed.'
            )

def solve_maze():
    wall_node = WallServiceClient()
    motion_node = MazeSolver()
    motion_node.move_yaw("left")
    sleep(3)

    

def main():
    rclpy.init()
    sleep(10.5)
    solve_maze()
    rclpy.shutdown()
