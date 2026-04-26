// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_interfaces:msg/InterferenceKey.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__INTERFERENCE_KEY__BUILDER_HPP_
#define RADAR_INTERFACES__MSG__DETAIL__INTERFERENCE_KEY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "radar_interfaces/msg/detail/interference_key__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace radar_interfaces
{

namespace msg
{

namespace builder
{

class Init_InterferenceKey_key
{
public:
  Init_InterferenceKey_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::radar_interfaces::msg::InterferenceKey key(::radar_interfaces::msg::InterferenceKey::_key_type arg)
  {
    msg_.key = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_interfaces::msg::InterferenceKey msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_interfaces::msg::InterferenceKey>()
{
  return radar_interfaces::msg::builder::Init_InterferenceKey_key();
}

}  // namespace radar_interfaces

#endif  // RADAR_INTERFACES__MSG__DETAIL__INTERFERENCE_KEY__BUILDER_HPP_
