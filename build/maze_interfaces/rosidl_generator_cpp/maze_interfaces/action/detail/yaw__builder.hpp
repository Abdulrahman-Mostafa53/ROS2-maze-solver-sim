// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from maze_interfaces:action/Yaw.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "maze_interfaces/action/yaw.hpp"


#ifndef MAZE_INTERFACES__ACTION__DETAIL__YAW__BUILDER_HPP_
#define MAZE_INTERFACES__ACTION__DETAIL__YAW__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "maze_interfaces/action/detail/yaw__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace maze_interfaces
{

namespace action
{

namespace builder
{

class Init_Yaw_Goal_direction
{
public:
  Init_Yaw_Goal_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::maze_interfaces::action::Yaw_Goal direction(::maze_interfaces::action::Yaw_Goal::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maze_interfaces::action::Yaw_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::maze_interfaces::action::Yaw_Goal>()
{
  return maze_interfaces::action::builder::Init_Yaw_Goal_direction();
}

}  // namespace maze_interfaces


namespace maze_interfaces
{

namespace action
{

namespace builder
{

class Init_Yaw_Result_final_direction
{
public:
  explicit Init_Yaw_Result_final_direction(::maze_interfaces::action::Yaw_Result & msg)
  : msg_(msg)
  {}
  ::maze_interfaces::action::Yaw_Result final_direction(::maze_interfaces::action::Yaw_Result::_final_direction_type arg)
  {
    msg_.final_direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maze_interfaces::action::Yaw_Result msg_;
};

class Init_Yaw_Result_success
{
public:
  Init_Yaw_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Yaw_Result_final_direction success(::maze_interfaces::action::Yaw_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Yaw_Result_final_direction(msg_);
  }

private:
  ::maze_interfaces::action::Yaw_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::maze_interfaces::action::Yaw_Result>()
{
  return maze_interfaces::action::builder::Init_Yaw_Result_success();
}

}  // namespace maze_interfaces


namespace maze_interfaces
{

namespace action
{

namespace builder
{

class Init_Yaw_Feedback_current_yaw
{
public:
  Init_Yaw_Feedback_current_yaw()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::maze_interfaces::action::Yaw_Feedback current_yaw(::maze_interfaces::action::Yaw_Feedback::_current_yaw_type arg)
  {
    msg_.current_yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maze_interfaces::action::Yaw_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::maze_interfaces::action::Yaw_Feedback>()
{
  return maze_interfaces::action::builder::Init_Yaw_Feedback_current_yaw();
}

}  // namespace maze_interfaces


namespace maze_interfaces
{

namespace action
{

namespace builder
{

class Init_Yaw_SendGoal_Request_goal
{
public:
  explicit Init_Yaw_SendGoal_Request_goal(::maze_interfaces::action::Yaw_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::maze_interfaces::action::Yaw_SendGoal_Request goal(::maze_interfaces::action::Yaw_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maze_interfaces::action::Yaw_SendGoal_Request msg_;
};

class Init_Yaw_SendGoal_Request_goal_id
{
public:
  Init_Yaw_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Yaw_SendGoal_Request_goal goal_id(::maze_interfaces::action::Yaw_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Yaw_SendGoal_Request_goal(msg_);
  }

private:
  ::maze_interfaces::action::Yaw_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::maze_interfaces::action::Yaw_SendGoal_Request>()
{
  return maze_interfaces::action::builder::Init_Yaw_SendGoal_Request_goal_id();
}

}  // namespace maze_interfaces


namespace maze_interfaces
{

namespace action
{

namespace builder
{

class Init_Yaw_SendGoal_Response_stamp
{
public:
  explicit Init_Yaw_SendGoal_Response_stamp(::maze_interfaces::action::Yaw_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::maze_interfaces::action::Yaw_SendGoal_Response stamp(::maze_interfaces::action::Yaw_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maze_interfaces::action::Yaw_SendGoal_Response msg_;
};

class Init_Yaw_SendGoal_Response_accepted
{
public:
  Init_Yaw_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Yaw_SendGoal_Response_stamp accepted(::maze_interfaces::action::Yaw_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Yaw_SendGoal_Response_stamp(msg_);
  }

private:
  ::maze_interfaces::action::Yaw_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::maze_interfaces::action::Yaw_SendGoal_Response>()
{
  return maze_interfaces::action::builder::Init_Yaw_SendGoal_Response_accepted();
}

}  // namespace maze_interfaces


namespace maze_interfaces
{

namespace action
{

namespace builder
{

class Init_Yaw_SendGoal_Event_response
{
public:
  explicit Init_Yaw_SendGoal_Event_response(::maze_interfaces::action::Yaw_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::maze_interfaces::action::Yaw_SendGoal_Event response(::maze_interfaces::action::Yaw_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maze_interfaces::action::Yaw_SendGoal_Event msg_;
};

class Init_Yaw_SendGoal_Event_request
{
public:
  explicit Init_Yaw_SendGoal_Event_request(::maze_interfaces::action::Yaw_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_Yaw_SendGoal_Event_response request(::maze_interfaces::action::Yaw_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Yaw_SendGoal_Event_response(msg_);
  }

private:
  ::maze_interfaces::action::Yaw_SendGoal_Event msg_;
};

class Init_Yaw_SendGoal_Event_info
{
public:
  Init_Yaw_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Yaw_SendGoal_Event_request info(::maze_interfaces::action::Yaw_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Yaw_SendGoal_Event_request(msg_);
  }

private:
  ::maze_interfaces::action::Yaw_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::maze_interfaces::action::Yaw_SendGoal_Event>()
{
  return maze_interfaces::action::builder::Init_Yaw_SendGoal_Event_info();
}

}  // namespace maze_interfaces


namespace maze_interfaces
{

namespace action
{

namespace builder
{

class Init_Yaw_GetResult_Request_goal_id
{
public:
  Init_Yaw_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::maze_interfaces::action::Yaw_GetResult_Request goal_id(::maze_interfaces::action::Yaw_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maze_interfaces::action::Yaw_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::maze_interfaces::action::Yaw_GetResult_Request>()
{
  return maze_interfaces::action::builder::Init_Yaw_GetResult_Request_goal_id();
}

}  // namespace maze_interfaces


namespace maze_interfaces
{

namespace action
{

namespace builder
{

class Init_Yaw_GetResult_Response_result
{
public:
  explicit Init_Yaw_GetResult_Response_result(::maze_interfaces::action::Yaw_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::maze_interfaces::action::Yaw_GetResult_Response result(::maze_interfaces::action::Yaw_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maze_interfaces::action::Yaw_GetResult_Response msg_;
};

class Init_Yaw_GetResult_Response_status
{
public:
  Init_Yaw_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Yaw_GetResult_Response_result status(::maze_interfaces::action::Yaw_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Yaw_GetResult_Response_result(msg_);
  }

private:
  ::maze_interfaces::action::Yaw_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::maze_interfaces::action::Yaw_GetResult_Response>()
{
  return maze_interfaces::action::builder::Init_Yaw_GetResult_Response_status();
}

}  // namespace maze_interfaces


namespace maze_interfaces
{

namespace action
{

namespace builder
{

class Init_Yaw_GetResult_Event_response
{
public:
  explicit Init_Yaw_GetResult_Event_response(::maze_interfaces::action::Yaw_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::maze_interfaces::action::Yaw_GetResult_Event response(::maze_interfaces::action::Yaw_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maze_interfaces::action::Yaw_GetResult_Event msg_;
};

class Init_Yaw_GetResult_Event_request
{
public:
  explicit Init_Yaw_GetResult_Event_request(::maze_interfaces::action::Yaw_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_Yaw_GetResult_Event_response request(::maze_interfaces::action::Yaw_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Yaw_GetResult_Event_response(msg_);
  }

private:
  ::maze_interfaces::action::Yaw_GetResult_Event msg_;
};

class Init_Yaw_GetResult_Event_info
{
public:
  Init_Yaw_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Yaw_GetResult_Event_request info(::maze_interfaces::action::Yaw_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Yaw_GetResult_Event_request(msg_);
  }

private:
  ::maze_interfaces::action::Yaw_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::maze_interfaces::action::Yaw_GetResult_Event>()
{
  return maze_interfaces::action::builder::Init_Yaw_GetResult_Event_info();
}

}  // namespace maze_interfaces


namespace maze_interfaces
{

namespace action
{

namespace builder
{

class Init_Yaw_FeedbackMessage_feedback
{
public:
  explicit Init_Yaw_FeedbackMessage_feedback(::maze_interfaces::action::Yaw_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::maze_interfaces::action::Yaw_FeedbackMessage feedback(::maze_interfaces::action::Yaw_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::maze_interfaces::action::Yaw_FeedbackMessage msg_;
};

class Init_Yaw_FeedbackMessage_goal_id
{
public:
  Init_Yaw_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Yaw_FeedbackMessage_feedback goal_id(::maze_interfaces::action::Yaw_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Yaw_FeedbackMessage_feedback(msg_);
  }

private:
  ::maze_interfaces::action::Yaw_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::maze_interfaces::action::Yaw_FeedbackMessage>()
{
  return maze_interfaces::action::builder::Init_Yaw_FeedbackMessage_goal_id();
}

}  // namespace maze_interfaces

#endif  // MAZE_INTERFACES__ACTION__DETAIL__YAW__BUILDER_HPP_
