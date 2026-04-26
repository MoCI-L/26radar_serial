// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_interfaces:msg/RadarDecisionCommand.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__RADAR_DECISION_COMMAND__BUILDER_HPP_
#define RADAR_INTERFACES__MSG__DETAIL__RADAR_DECISION_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "radar_interfaces/msg/detail/radar_decision_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace radar_interfaces
{

namespace msg
{

namespace builder
{

class Init_RadarDecisionCommand_password
{
public:
  explicit Init_RadarDecisionCommand_password(::radar_interfaces::msg::RadarDecisionCommand & msg)
  : msg_(msg)
  {}
  ::radar_interfaces::msg::RadarDecisionCommand password(::radar_interfaces::msg::RadarDecisionCommand::_password_type arg)
  {
    msg_.password = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_interfaces::msg::RadarDecisionCommand msg_;
};

class Init_RadarDecisionCommand_password_command_type
{
public:
  explicit Init_RadarDecisionCommand_password_command_type(::radar_interfaces::msg::RadarDecisionCommand & msg)
  : msg_(msg)
  {}
  Init_RadarDecisionCommand_password password_command_type(::radar_interfaces::msg::RadarDecisionCommand::_password_command_type_type arg)
  {
    msg_.password_command_type = std::move(arg);
    return Init_RadarDecisionCommand_password(msg_);
  }

private:
  ::radar_interfaces::msg::RadarDecisionCommand msg_;
};

class Init_RadarDecisionCommand_double_vulnerability_request
{
public:
  explicit Init_RadarDecisionCommand_double_vulnerability_request(::radar_interfaces::msg::RadarDecisionCommand & msg)
  : msg_(msg)
  {}
  Init_RadarDecisionCommand_password_command_type double_vulnerability_request(::radar_interfaces::msg::RadarDecisionCommand::_double_vulnerability_request_type arg)
  {
    msg_.double_vulnerability_request = std::move(arg);
    return Init_RadarDecisionCommand_password_command_type(msg_);
  }

private:
  ::radar_interfaces::msg::RadarDecisionCommand msg_;
};

class Init_RadarDecisionCommand_receiver_id
{
public:
  explicit Init_RadarDecisionCommand_receiver_id(::radar_interfaces::msg::RadarDecisionCommand & msg)
  : msg_(msg)
  {}
  Init_RadarDecisionCommand_double_vulnerability_request receiver_id(::radar_interfaces::msg::RadarDecisionCommand::_receiver_id_type arg)
  {
    msg_.receiver_id = std::move(arg);
    return Init_RadarDecisionCommand_double_vulnerability_request(msg_);
  }

private:
  ::radar_interfaces::msg::RadarDecisionCommand msg_;
};

class Init_RadarDecisionCommand_sender_id
{
public:
  Init_RadarDecisionCommand_sender_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarDecisionCommand_receiver_id sender_id(::radar_interfaces::msg::RadarDecisionCommand::_sender_id_type arg)
  {
    msg_.sender_id = std::move(arg);
    return Init_RadarDecisionCommand_receiver_id(msg_);
  }

private:
  ::radar_interfaces::msg::RadarDecisionCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_interfaces::msg::RadarDecisionCommand>()
{
  return radar_interfaces::msg::builder::Init_RadarDecisionCommand_sender_id();
}

}  // namespace radar_interfaces

#endif  // RADAR_INTERFACES__MSG__DETAIL__RADAR_DECISION_COMMAND__BUILDER_HPP_
