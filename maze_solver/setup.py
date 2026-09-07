from setuptools import find_packages, setup

package_name = 'maze_solver'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + "/launch", ['launch/launch_maze_solver.launch.py']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='abdulrahman',
    maintainer_email='abdulrahmanmostafa1101@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'action = maze_solver.action_client:main',
            'move_x_action_server = maze_solver.movex_action_server:main',
            'move_yaw_action_server = maze_solver.yaw_action_server:main',
            'monitor = maze_solver.monitor:main'
        ],
    },
)
