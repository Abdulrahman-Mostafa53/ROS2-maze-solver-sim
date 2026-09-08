// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from maze_interfaces:action/Yaw.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "maze_interfaces/action/yaw.h"


#ifndef MAZE_INTERFACES__ACTION__DETAIL__YAW__STRUCT_H_
#define MAZE_INTERFACES__ACTION__DETAIL__YAW__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'direction'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/Yaw in the package maze_interfaces.
typedef struct maze_interfaces__action__Yaw_Goal
{
  /// "left" or "right"
  rosidl_runtime_c__String direction;
} maze_interfaces__action__Yaw_Goal;

// Struct for a sequence of maze_interfaces__action__Yaw_Goal.
typedef struct maze_interfaces__action__Yaw_Goal__Sequence
{
  maze_interfaces__action__Yaw_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maze_interfaces__action__Yaw_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'final_direction'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Yaw in the package maze_interfaces.
typedef struct maze_interfaces__action__Yaw_Result
{
  bool success;
  rosidl_runtime_c__String final_direction;
} maze_interfaces__action__Yaw_Result;

// Struct for a sequence of maze_interfaces__action__Yaw_Result.
typedef struct maze_interfaces__action__Yaw_Result__Sequence
{
  maze_interfaces__action__Yaw_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maze_interfaces__action__Yaw_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/Yaw in the package maze_interfaces.
typedef struct maze_interfaces__action__Yaw_Feedback
{
  float current_yaw;
} maze_interfaces__action__Yaw_Feedback;

// Struct for a sequence of maze_interfaces__action__Yaw_Feedback.
typedef struct maze_interfaces__action__Yaw_Feedback__Sequence
{
  maze_interfaces__action__Yaw_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maze_interfaces__action__Yaw_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "maze_interfaces/action/detail/yaw__struct.h"

/// Struct defined in action/Yaw in the package maze_interfaces.
typedef struct maze_interfaces__action__Yaw_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  maze_interfaces__action__Yaw_Goal goal;
} maze_interfaces__action__Yaw_SendGoal_Request;

// Struct for a sequence of maze_interfaces__action__Yaw_SendGoal_Request.
typedef struct maze_interfaces__action__Yaw_SendGoal_Request__Sequence
{
  maze_interfaces__action__Yaw_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maze_interfaces__action__Yaw_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Yaw in the package maze_interfaces.
typedef struct maze_interfaces__action__Yaw_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} maze_interfaces__action__Yaw_SendGoal_Response;

// Struct for a sequence of maze_interfaces__action__Yaw_SendGoal_Response.
typedef struct maze_interfaces__action__Yaw_SendGoal_Response__Sequence
{
  maze_interfaces__action__Yaw_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maze_interfaces__action__Yaw_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  maze_interfaces__action__Yaw_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  maze_interfaces__action__Yaw_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Yaw in the package maze_interfaces.
typedef struct maze_interfaces__action__Yaw_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  maze_interfaces__action__Yaw_SendGoal_Request__Sequence request;
  maze_interfaces__action__Yaw_SendGoal_Response__Sequence response;
} maze_interfaces__action__Yaw_SendGoal_Event;

// Struct for a sequence of maze_interfaces__action__Yaw_SendGoal_Event.
typedef struct maze_interfaces__action__Yaw_SendGoal_Event__Sequence
{
  maze_interfaces__action__Yaw_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maze_interfaces__action__Yaw_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Yaw in the package maze_interfaces.
typedef struct maze_interfaces__action__Yaw_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} maze_interfaces__action__Yaw_GetResult_Request;

// Struct for a sequence of maze_interfaces__action__Yaw_GetResult_Request.
typedef struct maze_interfaces__action__Yaw_GetResult_Request__Sequence
{
  maze_interfaces__action__Yaw_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maze_interfaces__action__Yaw_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "maze_interfaces/action/detail/yaw__struct.h"

/// Struct defined in action/Yaw in the package maze_interfaces.
typedef struct maze_interfaces__action__Yaw_GetResult_Response
{
  int8_t status;
  maze_interfaces__action__Yaw_Result result;
} maze_interfaces__action__Yaw_GetResult_Response;

// Struct for a sequence of maze_interfaces__action__Yaw_GetResult_Response.
typedef struct maze_interfaces__action__Yaw_GetResult_Response__Sequence
{
  maze_interfaces__action__Yaw_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maze_interfaces__action__Yaw_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  maze_interfaces__action__Yaw_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  maze_interfaces__action__Yaw_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Yaw in the package maze_interfaces.
typedef struct maze_interfaces__action__Yaw_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  maze_interfaces__action__Yaw_GetResult_Request__Sequence request;
  maze_interfaces__action__Yaw_GetResult_Response__Sequence response;
} maze_interfaces__action__Yaw_GetResult_Event;

// Struct for a sequence of maze_interfaces__action__Yaw_GetResult_Event.
typedef struct maze_interfaces__action__Yaw_GetResult_Event__Sequence
{
  maze_interfaces__action__Yaw_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maze_interfaces__action__Yaw_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "maze_interfaces/action/detail/yaw__struct.h"

/// Struct defined in action/Yaw in the package maze_interfaces.
typedef struct maze_interfaces__action__Yaw_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  maze_interfaces__action__Yaw_Feedback feedback;
} maze_interfaces__action__Yaw_FeedbackMessage;

// Struct for a sequence of maze_interfaces__action__Yaw_FeedbackMessage.
typedef struct maze_interfaces__action__Yaw_FeedbackMessage__Sequence
{
  maze_interfaces__action__Yaw_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maze_interfaces__action__Yaw_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAZE_INTERFACES__ACTION__DETAIL__YAW__STRUCT_H_
