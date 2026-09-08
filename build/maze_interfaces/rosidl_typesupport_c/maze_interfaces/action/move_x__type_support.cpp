// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from maze_interfaces:action/MoveX.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "maze_interfaces/action/detail/move_x__struct.h"
#include "maze_interfaces/action/detail/move_x__type_support.h"
#include "maze_interfaces/action/detail/move_x__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace maze_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveX_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveX_Goal_type_support_ids_t;

static const _MoveX_Goal_type_support_ids_t _MoveX_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveX_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveX_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveX_Goal_type_support_symbol_names_t _MoveX_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, maze_interfaces, action, MoveX_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, maze_interfaces, action, MoveX_Goal)),
  }
};

typedef struct _MoveX_Goal_type_support_data_t
{
  void * data[2];
} _MoveX_Goal_type_support_data_t;

static _MoveX_Goal_type_support_data_t _MoveX_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveX_Goal_message_typesupport_map = {
  2,
  "maze_interfaces",
  &_MoveX_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_MoveX_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_MoveX_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveX_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveX_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &maze_interfaces__action__MoveX_Goal__get_type_hash,
  &maze_interfaces__action__MoveX_Goal__get_type_description,
  &maze_interfaces__action__MoveX_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace maze_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, maze_interfaces, action, MoveX_Goal)() {
  return &::maze_interfaces::action::rosidl_typesupport_c::MoveX_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "maze_interfaces/action/detail/move_x__struct.h"
// already included above
// #include "maze_interfaces/action/detail/move_x__type_support.h"
// already included above
// #include "maze_interfaces/action/detail/move_x__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveX_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveX_Result_type_support_ids_t;

static const _MoveX_Result_type_support_ids_t _MoveX_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveX_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveX_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveX_Result_type_support_symbol_names_t _MoveX_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, maze_interfaces, action, MoveX_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, maze_interfaces, action, MoveX_Result)),
  }
};

typedef struct _MoveX_Result_type_support_data_t
{
  void * data[2];
} _MoveX_Result_type_support_data_t;

static _MoveX_Result_type_support_data_t _MoveX_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveX_Result_message_typesupport_map = {
  2,
  "maze_interfaces",
  &_MoveX_Result_message_typesupport_ids.typesupport_identifier[0],
  &_MoveX_Result_message_typesupport_symbol_names.symbol_name[0],
  &_MoveX_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveX_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveX_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &maze_interfaces__action__MoveX_Result__get_type_hash,
  &maze_interfaces__action__MoveX_Result__get_type_description,
  &maze_interfaces__action__MoveX_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace maze_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, maze_interfaces, action, MoveX_Result)() {
  return &::maze_interfaces::action::rosidl_typesupport_c::MoveX_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "maze_interfaces/action/detail/move_x__struct.h"
// already included above
// #include "maze_interfaces/action/detail/move_x__type_support.h"
// already included above
// #include "maze_interfaces/action/detail/move_x__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveX_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveX_Feedback_type_support_ids_t;

static const _MoveX_Feedback_type_support_ids_t _MoveX_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveX_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveX_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveX_Feedback_type_support_symbol_names_t _MoveX_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, maze_interfaces, action, MoveX_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, maze_interfaces, action, MoveX_Feedback)),
  }
};

typedef struct _MoveX_Feedback_type_support_data_t
{
  void * data[2];
} _MoveX_Feedback_type_support_data_t;

static _MoveX_Feedback_type_support_data_t _MoveX_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveX_Feedback_message_typesupport_map = {
  2,
  "maze_interfaces",
  &_MoveX_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_MoveX_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_MoveX_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveX_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveX_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &maze_interfaces__action__MoveX_Feedback__get_type_hash,
  &maze_interfaces__action__MoveX_Feedback__get_type_description,
  &maze_interfaces__action__MoveX_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace maze_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, maze_interfaces, action, MoveX_Feedback)() {
  return &::maze_interfaces::action::rosidl_typesupport_c::MoveX_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "maze_interfaces/action/detail/move_x__struct.h"
// already included above
// #include "maze_interfaces/action/detail/move_x__type_support.h"
// already included above
// #include "maze_interfaces/action/detail/move_x__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveX_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveX_SendGoal_Request_type_support_ids_t;

static const _MoveX_SendGoal_Request_type_support_ids_t _MoveX_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveX_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveX_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveX_SendGoal_Request_type_support_symbol_names_t _MoveX_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, maze_interfaces, action, MoveX_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, maze_interfaces, action, MoveX_SendGoal_Request)),
  }
};

typedef struct _MoveX_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _MoveX_SendGoal_Request_type_support_data_t;

static _MoveX_SendGoal_Request_type_support_data_t _MoveX_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveX_SendGoal_Request_message_typesupport_map = {
  2,
  "maze_interfaces",
  &_MoveX_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveX_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveX_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveX_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveX_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &maze_interfaces__action__MoveX_SendGoal_Request__get_type_hash,
  &maze_interfaces__action__MoveX_SendGoal_Request__get_type_description,
  &maze_interfaces__action__MoveX_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace maze_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, maze_interfaces, action, MoveX_SendGoal_Request)() {
  return &::maze_interfaces::action::rosidl_typesupport_c::MoveX_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "maze_interfaces/action/detail/move_x__struct.h"
// already included above
// #include "maze_interfaces/action/detail/move_x__type_support.h"
// already included above
// #include "maze_interfaces/action/detail/move_x__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveX_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveX_SendGoal_Response_type_support_ids_t;

static const _MoveX_SendGoal_Response_type_support_ids_t _MoveX_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveX_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveX_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveX_SendGoal_Response_type_support_symbol_names_t _MoveX_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, maze_interfaces, action, MoveX_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, maze_interfaces, action, MoveX_SendGoal_Response)),
  }
};

typedef struct _MoveX_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _MoveX_SendGoal_Response_type_support_data_t;

static _MoveX_SendGoal_Response_type_support_data_t _MoveX_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveX_SendGoal_Response_message_typesupport_map = {
  2,
  "maze_interfaces",
  &_MoveX_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveX_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveX_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveX_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveX_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &maze_interfaces__action__MoveX_SendGoal_Response__get_type_hash,
  &maze_interfaces__action__MoveX_SendGoal_Response__get_type_description,
  &maze_interfaces__action__MoveX_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace maze_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, maze_interfaces, action, MoveX_SendGoal_Response)() {
  return &::maze_interfaces::action::rosidl_typesupport_c::MoveX_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "maze_interfaces/action/detail/move_x__struct.h"
// already included above
// #include "maze_interfaces/action/detail/move_x__type_support.h"
// already included above
// #include "maze_interfaces/action/detail/move_x__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveX_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveX_SendGoal_Event_type_support_ids_t;

static const _MoveX_SendGoal_Event_type_support_ids_t _MoveX_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveX_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveX_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveX_SendGoal_Event_type_support_symbol_names_t _MoveX_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, maze_interfaces, action, MoveX_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, maze_interfaces, action, MoveX_SendGoal_Event)),
  }
};

typedef struct _MoveX_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _MoveX_SendGoal_Event_type_support_data_t;

static _MoveX_SendGoal_Event_type_support_data_t _MoveX_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveX_SendGoal_Event_message_typesupport_map = {
  2,
  "maze_interfaces",
  &_MoveX_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_MoveX_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_MoveX_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveX_SendGoal_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveX_SendGoal_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &maze_interfaces__action__MoveX_SendGoal_Event__get_type_hash,
  &maze_interfaces__action__MoveX_SendGoal_Event__get_type_description,
  &maze_interfaces__action__MoveX_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace maze_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, maze_interfaces, action, MoveX_SendGoal_Event)() {
  return &::maze_interfaces::action::rosidl_typesupport_c::MoveX_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "maze_interfaces/action/detail/move_x__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace maze_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _MoveX_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveX_SendGoal_type_support_ids_t;

static const _MoveX_SendGoal_type_support_ids_t _MoveX_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveX_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveX_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveX_SendGoal_type_support_symbol_names_t _MoveX_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, maze_interfaces, action, MoveX_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, maze_interfaces, action, MoveX_SendGoal)),
  }
};

typedef struct _MoveX_SendGoal_type_support_data_t
{
  void * data[2];
} _MoveX_SendGoal_type_support_data_t;

static _MoveX_SendGoal_type_support_data_t _MoveX_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveX_SendGoal_service_typesupport_map = {
  2,
  "maze_interfaces",
  &_MoveX_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_MoveX_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_MoveX_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveX_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveX_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &MoveX_SendGoal_Request_message_type_support_handle,
  &MoveX_SendGoal_Response_message_type_support_handle,
  &MoveX_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    maze_interfaces,
    action,
    MoveX_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    maze_interfaces,
    action,
    MoveX_SendGoal
  ),
  &maze_interfaces__action__MoveX_SendGoal__get_type_hash,
  &maze_interfaces__action__MoveX_SendGoal__get_type_description,
  &maze_interfaces__action__MoveX_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace maze_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, maze_interfaces, action, MoveX_SendGoal)() {
  return &::maze_interfaces::action::rosidl_typesupport_c::MoveX_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "maze_interfaces/action/detail/move_x__struct.h"
// already included above
// #include "maze_interfaces/action/detail/move_x__type_support.h"
// already included above
// #include "maze_interfaces/action/detail/move_x__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveX_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveX_GetResult_Request_type_support_ids_t;

static const _MoveX_GetResult_Request_type_support_ids_t _MoveX_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveX_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveX_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveX_GetResult_Request_type_support_symbol_names_t _MoveX_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, maze_interfaces, action, MoveX_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, maze_interfaces, action, MoveX_GetResult_Request)),
  }
};

typedef struct _MoveX_GetResult_Request_type_support_data_t
{
  void * data[2];
} _MoveX_GetResult_Request_type_support_data_t;

static _MoveX_GetResult_Request_type_support_data_t _MoveX_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveX_GetResult_Request_message_typesupport_map = {
  2,
  "maze_interfaces",
  &_MoveX_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveX_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveX_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveX_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveX_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &maze_interfaces__action__MoveX_GetResult_Request__get_type_hash,
  &maze_interfaces__action__MoveX_GetResult_Request__get_type_description,
  &maze_interfaces__action__MoveX_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace maze_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, maze_interfaces, action, MoveX_GetResult_Request)() {
  return &::maze_interfaces::action::rosidl_typesupport_c::MoveX_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "maze_interfaces/action/detail/move_x__struct.h"
// already included above
// #include "maze_interfaces/action/detail/move_x__type_support.h"
// already included above
// #include "maze_interfaces/action/detail/move_x__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveX_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveX_GetResult_Response_type_support_ids_t;

static const _MoveX_GetResult_Response_type_support_ids_t _MoveX_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveX_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveX_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveX_GetResult_Response_type_support_symbol_names_t _MoveX_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, maze_interfaces, action, MoveX_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, maze_interfaces, action, MoveX_GetResult_Response)),
  }
};

typedef struct _MoveX_GetResult_Response_type_support_data_t
{
  void * data[2];
} _MoveX_GetResult_Response_type_support_data_t;

static _MoveX_GetResult_Response_type_support_data_t _MoveX_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveX_GetResult_Response_message_typesupport_map = {
  2,
  "maze_interfaces",
  &_MoveX_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveX_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveX_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveX_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveX_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &maze_interfaces__action__MoveX_GetResult_Response__get_type_hash,
  &maze_interfaces__action__MoveX_GetResult_Response__get_type_description,
  &maze_interfaces__action__MoveX_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace maze_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, maze_interfaces, action, MoveX_GetResult_Response)() {
  return &::maze_interfaces::action::rosidl_typesupport_c::MoveX_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "maze_interfaces/action/detail/move_x__struct.h"
// already included above
// #include "maze_interfaces/action/detail/move_x__type_support.h"
// already included above
// #include "maze_interfaces/action/detail/move_x__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveX_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveX_GetResult_Event_type_support_ids_t;

static const _MoveX_GetResult_Event_type_support_ids_t _MoveX_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveX_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveX_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveX_GetResult_Event_type_support_symbol_names_t _MoveX_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, maze_interfaces, action, MoveX_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, maze_interfaces, action, MoveX_GetResult_Event)),
  }
};

typedef struct _MoveX_GetResult_Event_type_support_data_t
{
  void * data[2];
} _MoveX_GetResult_Event_type_support_data_t;

static _MoveX_GetResult_Event_type_support_data_t _MoveX_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveX_GetResult_Event_message_typesupport_map = {
  2,
  "maze_interfaces",
  &_MoveX_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_MoveX_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_MoveX_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveX_GetResult_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveX_GetResult_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &maze_interfaces__action__MoveX_GetResult_Event__get_type_hash,
  &maze_interfaces__action__MoveX_GetResult_Event__get_type_description,
  &maze_interfaces__action__MoveX_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace maze_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, maze_interfaces, action, MoveX_GetResult_Event)() {
  return &::maze_interfaces::action::rosidl_typesupport_c::MoveX_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "maze_interfaces/action/detail/move_x__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "service_msgs/msg/service_event_info.h"
// already included above
// #include "builtin_interfaces/msg/time.h"

namespace maze_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _MoveX_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveX_GetResult_type_support_ids_t;

static const _MoveX_GetResult_type_support_ids_t _MoveX_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveX_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveX_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveX_GetResult_type_support_symbol_names_t _MoveX_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, maze_interfaces, action, MoveX_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, maze_interfaces, action, MoveX_GetResult)),
  }
};

typedef struct _MoveX_GetResult_type_support_data_t
{
  void * data[2];
} _MoveX_GetResult_type_support_data_t;

static _MoveX_GetResult_type_support_data_t _MoveX_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveX_GetResult_service_typesupport_map = {
  2,
  "maze_interfaces",
  &_MoveX_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_MoveX_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_MoveX_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveX_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveX_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &MoveX_GetResult_Request_message_type_support_handle,
  &MoveX_GetResult_Response_message_type_support_handle,
  &MoveX_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    maze_interfaces,
    action,
    MoveX_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    maze_interfaces,
    action,
    MoveX_GetResult
  ),
  &maze_interfaces__action__MoveX_GetResult__get_type_hash,
  &maze_interfaces__action__MoveX_GetResult__get_type_description,
  &maze_interfaces__action__MoveX_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace maze_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, maze_interfaces, action, MoveX_GetResult)() {
  return &::maze_interfaces::action::rosidl_typesupport_c::MoveX_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "maze_interfaces/action/detail/move_x__struct.h"
// already included above
// #include "maze_interfaces/action/detail/move_x__type_support.h"
// already included above
// #include "maze_interfaces/action/detail/move_x__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveX_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveX_FeedbackMessage_type_support_ids_t;

static const _MoveX_FeedbackMessage_type_support_ids_t _MoveX_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveX_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveX_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveX_FeedbackMessage_type_support_symbol_names_t _MoveX_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, maze_interfaces, action, MoveX_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, maze_interfaces, action, MoveX_FeedbackMessage)),
  }
};

typedef struct _MoveX_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _MoveX_FeedbackMessage_type_support_data_t;

static _MoveX_FeedbackMessage_type_support_data_t _MoveX_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveX_FeedbackMessage_message_typesupport_map = {
  2,
  "maze_interfaces",
  &_MoveX_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_MoveX_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_MoveX_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveX_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveX_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &maze_interfaces__action__MoveX_FeedbackMessage__get_type_hash,
  &maze_interfaces__action__MoveX_FeedbackMessage__get_type_description,
  &maze_interfaces__action__MoveX_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace maze_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, maze_interfaces, action, MoveX_FeedbackMessage)() {
  return &::maze_interfaces::action::rosidl_typesupport_c::MoveX_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "maze_interfaces/action/move_x.h"
// already included above
// #include "maze_interfaces/action/detail/move_x__type_support.h"

static rosidl_action_type_support_t _maze_interfaces__action__MoveX__typesupport_c = {
  NULL, NULL, NULL, NULL, NULL,
  &maze_interfaces__action__MoveX__get_type_hash,
  &maze_interfaces__action__MoveX__get_type_description,
  &maze_interfaces__action__MoveX__get_type_description_sources,
};

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, maze_interfaces, action, MoveX)()
{
  // Thread-safe by always writing the same values to the static struct
  _maze_interfaces__action__MoveX__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, maze_interfaces, action, MoveX_SendGoal)();
  _maze_interfaces__action__MoveX__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, maze_interfaces, action, MoveX_GetResult)();
  _maze_interfaces__action__MoveX__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _maze_interfaces__action__MoveX__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, maze_interfaces, action, MoveX_FeedbackMessage)();
  _maze_interfaces__action__MoveX__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_maze_interfaces__action__MoveX__typesupport_c;
}

#ifdef __cplusplus
}
#endif
