// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from maze_interfaces:srv/Error.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "maze_interfaces/srv/detail/error__struct.h"
#include "maze_interfaces/srv/detail/error__type_support.h"
#include "maze_interfaces/srv/detail/error__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace maze_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Error_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Error_Request_type_support_ids_t;

static const _Error_Request_type_support_ids_t _Error_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Error_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Error_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Error_Request_type_support_symbol_names_t _Error_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, maze_interfaces, srv, Error_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, maze_interfaces, srv, Error_Request)),
  }
};

typedef struct _Error_Request_type_support_data_t
{
  void * data[2];
} _Error_Request_type_support_data_t;

static _Error_Request_type_support_data_t _Error_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Error_Request_message_typesupport_map = {
  2,
  "maze_interfaces",
  &_Error_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Error_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Error_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Error_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Error_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &maze_interfaces__srv__Error_Request__get_type_hash,
  &maze_interfaces__srv__Error_Request__get_type_description,
  &maze_interfaces__srv__Error_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace maze_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, maze_interfaces, srv, Error_Request)() {
  return &::maze_interfaces::srv::rosidl_typesupport_c::Error_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "maze_interfaces/srv/detail/error__struct.h"
// already included above
// #include "maze_interfaces/srv/detail/error__type_support.h"
// already included above
// #include "maze_interfaces/srv/detail/error__functions.h"
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

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Error_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Error_Response_type_support_ids_t;

static const _Error_Response_type_support_ids_t _Error_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Error_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Error_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Error_Response_type_support_symbol_names_t _Error_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, maze_interfaces, srv, Error_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, maze_interfaces, srv, Error_Response)),
  }
};

typedef struct _Error_Response_type_support_data_t
{
  void * data[2];
} _Error_Response_type_support_data_t;

static _Error_Response_type_support_data_t _Error_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Error_Response_message_typesupport_map = {
  2,
  "maze_interfaces",
  &_Error_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Error_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Error_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Error_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Error_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &maze_interfaces__srv__Error_Response__get_type_hash,
  &maze_interfaces__srv__Error_Response__get_type_description,
  &maze_interfaces__srv__Error_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace maze_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, maze_interfaces, srv, Error_Response)() {
  return &::maze_interfaces::srv::rosidl_typesupport_c::Error_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "maze_interfaces/srv/detail/error__struct.h"
// already included above
// #include "maze_interfaces/srv/detail/error__type_support.h"
// already included above
// #include "maze_interfaces/srv/detail/error__functions.h"
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

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Error_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Error_Event_type_support_ids_t;

static const _Error_Event_type_support_ids_t _Error_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Error_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Error_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Error_Event_type_support_symbol_names_t _Error_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, maze_interfaces, srv, Error_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, maze_interfaces, srv, Error_Event)),
  }
};

typedef struct _Error_Event_type_support_data_t
{
  void * data[2];
} _Error_Event_type_support_data_t;

static _Error_Event_type_support_data_t _Error_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Error_Event_message_typesupport_map = {
  2,
  "maze_interfaces",
  &_Error_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Error_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Error_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Error_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Error_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &maze_interfaces__srv__Error_Event__get_type_hash,
  &maze_interfaces__srv__Error_Event__get_type_description,
  &maze_interfaces__srv__Error_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace maze_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, maze_interfaces, srv, Error_Event)() {
  return &::maze_interfaces::srv::rosidl_typesupport_c::Error_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "maze_interfaces/srv/detail/error__type_support.h"
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

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _Error_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Error_type_support_ids_t;

static const _Error_type_support_ids_t _Error_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Error_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Error_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Error_type_support_symbol_names_t _Error_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, maze_interfaces, srv, Error)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, maze_interfaces, srv, Error)),
  }
};

typedef struct _Error_type_support_data_t
{
  void * data[2];
} _Error_type_support_data_t;

static _Error_type_support_data_t _Error_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Error_service_typesupport_map = {
  2,
  "maze_interfaces",
  &_Error_service_typesupport_ids.typesupport_identifier[0],
  &_Error_service_typesupport_symbol_names.symbol_name[0],
  &_Error_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Error_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Error_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &Error_Request_message_type_support_handle,
  &Error_Response_message_type_support_handle,
  &Error_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    maze_interfaces,
    srv,
    Error
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    maze_interfaces,
    srv,
    Error
  ),
  &maze_interfaces__srv__Error__get_type_hash,
  &maze_interfaces__srv__Error__get_type_description,
  &maze_interfaces__srv__Error__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace maze_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, maze_interfaces, srv, Error)() {
  return &::maze_interfaces::srv::rosidl_typesupport_c::Error_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
