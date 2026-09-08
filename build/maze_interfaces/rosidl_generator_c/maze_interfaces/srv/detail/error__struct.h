// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from maze_interfaces:srv/Error.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "maze_interfaces/srv/error.h"


#ifndef MAZE_INTERFACES__SRV__DETAIL__ERROR__STRUCT_H_
#define MAZE_INTERFACES__SRV__DETAIL__ERROR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Error in the package maze_interfaces.
typedef struct maze_interfaces__srv__Error_Request
{
  bool stop;
} maze_interfaces__srv__Error_Request;

// Struct for a sequence of maze_interfaces__srv__Error_Request.
typedef struct maze_interfaces__srv__Error_Request__Sequence
{
  maze_interfaces__srv__Error_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maze_interfaces__srv__Error_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Error in the package maze_interfaces.
typedef struct maze_interfaces__srv__Error_Response
{
  bool success;
  rosidl_runtime_c__String message;
} maze_interfaces__srv__Error_Response;

// Struct for a sequence of maze_interfaces__srv__Error_Response.
typedef struct maze_interfaces__srv__Error_Response__Sequence
{
  maze_interfaces__srv__Error_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maze_interfaces__srv__Error_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  maze_interfaces__srv__Error_Event__request__MAX_SIZE = 1
};
// response
enum
{
  maze_interfaces__srv__Error_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Error in the package maze_interfaces.
typedef struct maze_interfaces__srv__Error_Event
{
  service_msgs__msg__ServiceEventInfo info;
  maze_interfaces__srv__Error_Request__Sequence request;
  maze_interfaces__srv__Error_Response__Sequence response;
} maze_interfaces__srv__Error_Event;

// Struct for a sequence of maze_interfaces__srv__Error_Event.
typedef struct maze_interfaces__srv__Error_Event__Sequence
{
  maze_interfaces__srv__Error_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maze_interfaces__srv__Error_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAZE_INTERFACES__SRV__DETAIL__ERROR__STRUCT_H_
