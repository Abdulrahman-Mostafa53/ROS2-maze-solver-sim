// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from maze_interfaces:srv/Error.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "maze_interfaces/srv/error.hpp"


#ifndef MAZE_INTERFACES__SRV__DETAIL__ERROR__BUILDER_HPP_
#define MAZE_INTERFACES__SRV__DETAIL__ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "maze_interfaces/srv/detail/error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace maze_interfaces
{

namespace srv
{

namespace builder
{

class Init_Error_Request_stop
{
public:
  Init_Error_Request_stop()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::maze_interfaces::srv::Error_Request stop(::maze_interfaces::srv::Error_Request::_stop_type arg)
  {
    msg_.stop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maze_interfaces::srv::Error_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::maze_interfaces::srv::Error_Request>()
{
  return maze_interfaces::srv::builder::Init_Error_Request_stop();
}

}  // namespace maze_interfaces


namespace maze_interfaces
{

namespace srv
{

namespace builder
{

class Init_Error_Response_message
{
public:
  explicit Init_Error_Response_message(::maze_interfaces::srv::Error_Response & msg)
  : msg_(msg)
  {}
  ::maze_interfaces::srv::Error_Response message(::maze_interfaces::srv::Error_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maze_interfaces::srv::Error_Response msg_;
};

class Init_Error_Response_success
{
public:
  Init_Error_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Error_Response_message success(::maze_interfaces::srv::Error_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Error_Response_message(msg_);
  }

private:
  ::maze_interfaces::srv::Error_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::maze_interfaces::srv::Error_Response>()
{
  return maze_interfaces::srv::builder::Init_Error_Response_success();
}

}  // namespace maze_interfaces


namespace maze_interfaces
{

namespace srv
{

namespace builder
{

class Init_Error_Event_response
{
public:
  explicit Init_Error_Event_response(::maze_interfaces::srv::Error_Event & msg)
  : msg_(msg)
  {}
  ::maze_interfaces::srv::Error_Event response(::maze_interfaces::srv::Error_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maze_interfaces::srv::Error_Event msg_;
};

class Init_Error_Event_request
{
public:
  explicit Init_Error_Event_request(::maze_interfaces::srv::Error_Event & msg)
  : msg_(msg)
  {}
  Init_Error_Event_response request(::maze_interfaces::srv::Error_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Error_Event_response(msg_);
  }

private:
  ::maze_interfaces::srv::Error_Event msg_;
};

class Init_Error_Event_info
{
public:
  Init_Error_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Error_Event_request info(::maze_interfaces::srv::Error_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Error_Event_request(msg_);
  }

private:
  ::maze_interfaces::srv::Error_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::maze_interfaces::srv::Error_Event>()
{
  return maze_interfaces::srv::builder::Init_Error_Event_info();
}

}  // namespace maze_interfaces

#endif  // MAZE_INTERFACES__SRV__DETAIL__ERROR__BUILDER_HPP_
