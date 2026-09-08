import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Pose
import math
from tf_transformations import euler_from_quaternion

class Monitor(Node):
    def __init__(self):
        super().__init__('monitor')
        self.current_yaw = 0
        self.subscription = self.create_subscription(
            Pose,
            '/robot/ground_truth_pose',
            self.odom_callback,
            10,
        )

    def odom_callback(self, msg):
        q = msg.orientation
        quaternion = [q.x,q.y,q.z,q.w]

        self.current_yaw = euler_from_quaternion(quaternion)[2]*(180/math.pi)

        self.get_logger().info(f"Current yaw : {self.current_yaw}")
        

def main():
    rclpy.init()
    node = Monitor()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()