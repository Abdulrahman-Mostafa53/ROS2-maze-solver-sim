import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/abdulrahman/MIA/GROUP_12/src/install/maze_control'
