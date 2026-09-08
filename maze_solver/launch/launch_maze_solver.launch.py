from launch import LaunchDescription

from launch.launch_description_sources import PythonLaunchDescriptionSource

from launch_ros.actions import Node

from launch.actions import IncludeLaunchDescription

from ament_index_python.packages import get_package_share_directory


def generate_launch_description():

    maze_control_pkg_dir = get_package_share_directory("maze_control")

    included_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            f"{maze_control_pkg_dir}/launch/maze_simulation_tb3.launch.py"
        )
    )

    movex_action_server_node = Node(
        executable="move_x_action_server",
        package="maze_solver",
        name="movex_action_server",
        parameters=[
            {
                "movex_kp": 1.0,
                "movex_ki": 0.0,
                "movex_kd": 0.0,
                "movex_anti_wind_clamp": 1e+8,
                "movex_controller_clamp": 0.8,

                "heading_kp": 1.0,
                "heading_ki": 0.0,
                "heading_kd": 0.0,
                "heading_controller_clamp": 1.0,
            }
        ],
    )

    move_yaw_action_server_node = Node(
        executable="move_yaw_action_server",
        package="maze_solver",
        name="yaw_action_server",
        parameters=[
            {
                "yaw_kp": 1.5,
                "yaw_ki": 0.005,
                "yaw_kd": 0.01,
                "yaw_anti_wind_clamp": 20.0,
                "yaw_controller_clamp": 1.0,
            }
        ],
    )

    action_client_node = Node(
        executable="action",
        package="maze_solver",
        name="action_client"
    )

    return LaunchDescription(
        [
            included_launch,
            movex_action_server_node,
            move_yaw_action_server_node,
            action_client_node
        ]
    )