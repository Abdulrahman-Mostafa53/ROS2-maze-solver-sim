// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from maze_interfaces:action/MoveX.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "maze_interfaces/action/move_x.h"


#ifndef MAZE_INTERFACES__ACTION__DETAIL__MOVE_X__STRUCT_H_
#define MAZE_INTERFACES__ACTION__DETAIL__MOVE_X__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/MoveX in the package maze_interfaces.
typedef struct maze_interfaces__action__MoveX_Goal
{
  float target_distance;
} maze_interfaces__action__MoveX_Goal;

// Struct for a sequence of maze_interfaces__action__MoveX_Goal.
typedef struct maze_interfaces__action__MoveX_Goal__Sequence
{
  maze_interfaces__action__MoveX_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maze_interfaces__action__MoveX_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/MoveX in the package maze_interfaces.
typedef struct maze_interfaces__action__MoveX_Result
{
  bool success;
  float final_distance;
} maze_interfaces__action__MoveX_Result;

// Struct for a sequence of maze_interfaces__action__MoveX_Result.
typedef struct maze_interfaces__action__MoveX_Result__Sequence
{
  maze_interfaces__action__MoveX_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maze_interfaces__action__MoveX_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/MoveX in the package maze_interfaces.
typedef struct maze_interfaces__action__MoveX_Feedback
{
  float current_distance_traveled;
} maze_interfaces__action__MoveX_Feedback;

// Struct for a sequence of maze_interfaces__action__MoveX_Feedback.
typedef struct maze_interfaces__action__MoveX_Feedback__Sequence
{
  maze_interfaces__action__MoveX_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maze_interfaces__action__MoveX_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "maze_interfaces/action/detail/move_x__struct.h"

/// Struct defined in action/MoveX in the package maze_interfaces.
typedef struct maze_interfaces__action__MoveX_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  maze_interfaces__action__MoveX_Goal goal;
} maze_interfaces__action__MoveX_SendGoal_Request;

// Struct for a sequence of maze_interfaces__action__MoveX_SendGoal_Request.
typedef struct maze_interfaces__action__MoveX_SendGoal_Request__Sequence
{
  maze_interfaces__action__MoveX_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maze_interfaces__action__MoveX_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MoveX in the package maze_interfaces.
typedef struct maze_interfaces__action__MoveX_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} maze_interfaces__action__MoveX_SendGoal_Response;

// Struct for a sequence of maze_interfaces__action__MoveX_SendGoal_Response.
typedef struct maze_interfaces__action__MoveX_SendGoal_Response__Sequence
{
  maze_interfaces__action__MoveX_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maze_interfaces__action__MoveX_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  maze_interfaces__action__MoveX_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  maze_interfaces__action__MoveX_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/MoveX in the package maze_interfaces.
typedef struct maze_interfaces__action__MoveX_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  maze_interfaces__action__MoveX_SendGoal_Request__Sequence request;
  maze_interfaces__action__MoveX_SendGoal_Response__Sequence response;
} maze_interfaces__action__MoveX_SendGoal_Event;

// Struct for a sequence of maze_interfaces__action__MoveX_SendGoal_Event.
typedef struct maze_interfaces__action__MoveX_SendGoal_Event__Sequence
{
  maze_interfaces__action__MoveX_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maze_interfaces__action__MoveX_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MoveX in the package maze_interfaces.
typedef struct maze_interfaces__action__MoveX_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} maze_interfaces__action__MoveX_GetResult_Request;

// Struct for a sequence of maze_interfaces__action__MoveX_GetResult_Request.
typedef struct maze_interfaces__action__MoveX_GetResult_Request__Sequence
{
  maze_interfaces__action__MoveX_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maze_interfaces__action__MoveX_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "maze_interfaces/action/detail/move_x__struct.h"

/// Struct defined in action/MoveX in the package maze_interfaces.
typedef struct maze_interfaces__action__MoveX_GetResult_Response
{
  int8_t status;
  maze_interfaces__action__MoveX_Result result;
} maze_interfaces__action__MoveX_GetResult_Response;

// Struct for a sequence of maze_interfaces__action__MoveX_GetResult_Response.
typedef struct maze_interfaces__action__MoveX_GetResult_Response__Sequence
{
  maze_interfaces__action__MoveX_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maze_interfaces__action__MoveX_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  maze_interfaces__action__MoveX_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  maze_interfaces__action__MoveX_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/MoveX in the package maze_interfaces.
typedef struct maze_interfaces__action__MoveX_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  maze_interfaces__action__MoveX_GetResult_Request__Sequence request;
  maze_interfaces__action__MoveX_GetResult_Response__Sequence response;
} maze_interfaces__action__MoveX_GetResult_Event;

// Struct for a sequence of maze_interfaces__action__MoveX_GetResult_Event.
typedef struct maze_interfaces__action__MoveX_GetResult_Event__Sequence
{
  maze_interfaces__action__MoveX_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maze_interfaces__action__MoveX_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "maze_interfaces/action/detail/move_x__struct.h"

/// Struct defined in action/MoveX in the package maze_interfaces.
typedef struct maze_interfaces__action__MoveX_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  maze_interfaces__action__MoveX_Feedback feedback;
} maze_interfaces__action__MoveX_FeedbackMessage;

// Struct for a sequence of maze_interfaces__action__MoveX_FeedbackMessage.
typedef struct maze_interfaces__action__MoveX_FeedbackMessage__Sequence
{
  maze_interfaces__action__MoveX_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} maze_interfaces__action__MoveX_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAZE_INTERFACES__ACTION__DETAIL__MOVE_X__STRUCT_H_
