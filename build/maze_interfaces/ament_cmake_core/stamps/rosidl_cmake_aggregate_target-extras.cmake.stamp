# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target maze_interfaces::maze_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${maze_interfaces_TARGETS}.
if(maze_interfaces_TARGETS AND NOT TARGET maze_interfaces::maze_interfaces)
  add_library(maze_interfaces::maze_interfaces INTERFACE IMPORTED)
  set_target_properties(maze_interfaces::maze_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${maze_interfaces_TARGETS}")
endif()
