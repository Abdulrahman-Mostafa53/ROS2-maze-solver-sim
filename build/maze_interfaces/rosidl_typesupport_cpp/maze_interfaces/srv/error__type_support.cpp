// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from maze_interfaces:srv/Error.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "maze_interfaces/srv/detail/error__functions.h"
#include "maze_interfaces/srv/detail/error__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace maze_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Error_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Error_Request_type_support_ids_t;

static const _Error_Request_type_support_ids_t _Error_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, maze_interfaces, srv, Error_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, maze_interfaces, srv, Error_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Error_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &maze_interfaces__srv__Error_Request__get_type_hash,
  &maze_interfaces__srv__Error_Request__get_type_description,
  &maze_interfaces__srv__Error_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace maze_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<maze_interfaces::srv::Error_Request>()
{
  return &::maze_interfaces::srv::rosidl_typesupport_cpp::Error_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, maze_interfaces, srv, Error_Request)() {
  return get_message_type_support_handle<maze_interfaces::srv::Error_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "maze_interfaces/srv/detail/error__functions.h"
// already included above
// #include "maze_interfaces/srv/detail/error__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Error_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Error_Response_type_support_ids_t;

static const _Error_Response_type_support_ids_t _Error_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, maze_interfaces, srv, Error_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, maze_interfaces, srv, Error_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Error_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &maze_interfaces__srv__Error_Response__get_type_hash,
  &maze_interfaces__srv__Error_Response__get_type_description,
  &maze_interfaces__srv__Error_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace maze_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<maze_interfaces::srv::Error_Response>()
{
  return &::maze_interfaces::srv::rosidl_typesupport_cpp::Error_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, maze_interfaces, srv, Error_Response)() {
  return get_message_type_support_handle<maze_interfaces::srv::Error_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "maze_interfaces/srv/detail/error__functions.h"
// already included above
// #include "maze_interfaces/srv/detail/error__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Error_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Error_Event_type_support_ids_t;

static const _Error_Event_type_support_ids_t _Error_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, maze_interfaces, srv, Error_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, maze_interfaces, srv, Error_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Error_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &maze_interfaces__srv__Error_Event__get_type_hash,
  &maze_interfaces__srv__Error_Event__get_type_description,
  &maze_interfaces__srv__Error_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace maze_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<maze_interfaces::srv::Error_Event>()
{
  return &::maze_interfaces::srv::rosidl_typesupport_cpp::Error_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, maze_interfaces, srv, Error_Event)() {
  return get_message_type_support_handle<maze_interfaces::srv::Error_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "maze_interfaces/srv/detail/error__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Error_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Error_type_support_ids_t;

static const _Error_type_support_ids_t _Error_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, maze_interfaces, srv, Error)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, maze_interfaces, srv, Error)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Error_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<maze_interfaces::srv::Error_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<maze_interfaces::srv::Error_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<maze_interfaces::srv::Error_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<maze_interfaces::srv::Error>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<maze_interfaces::srv::Error>,
  &maze_interfaces__srv__Error__get_type_hash,
  &maze_interfaces__srv__Error__get_type_description,
  &maze_interfaces__srv__Error__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace maze_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<maze_interfaces::srv::Error>()
{
  return &::maze_interfaces::srv::rosidl_typesupport_cpp::Error_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, maze_interfaces, srv, Error)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<maze_interfaces::srv::Error>();
}

#ifdef __cplusplus
}
#endif
