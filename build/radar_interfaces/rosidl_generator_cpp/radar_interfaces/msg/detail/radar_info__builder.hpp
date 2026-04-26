// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_interfaces:msg/RadarInfo.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__RADAR_INFO__BUILDER_HPP_
#define RADAR_INTERFACES__MSG__DETAIL__RADAR_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "radar_interfaces/msg/detail/radar_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace radar_interfaces
{

namespace msg
{

namespace builder
{

class Init_RadarInfo_key_change_enabled
{
public:
  explicit Init_RadarInfo_key_change_enabled(::radar_interfaces::msg::RadarInfo & msg)
  : msg_(msg)
  {}
  ::radar_interfaces::msg::RadarInfo key_change_enabled(::radar_interfaces::msg::RadarInfo::_key_change_enabled_type arg)
  {
    msg_.key_change_enabled = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_interfaces::msg::RadarInfo msg_;
};

class Init_RadarInfo_encryption_level
{
public:
  explicit Init_RadarInfo_encryption_level(::radar_interfaces::msg::RadarInfo & msg)
  : msg_(msg)
  {}
  Init_RadarInfo_key_change_enabled encryption_level(::radar_interfaces::msg::RadarInfo::_encryption_level_type arg)
  {
    msg_.encryption_level = std::move(arg);
    return Init_RadarInfo_key_change_enabled(msg_);
  }

private:
  ::radar_interfaces::msg::RadarInfo msg_;
};

class Init_RadarInfo_opponent_double_vulnerability_active
{
public:
  explicit Init_RadarInfo_opponent_double_vulnerability_active(::radar_interfaces::msg::RadarInfo & msg)
  : msg_(msg)
  {}
  Init_RadarInfo_encryption_level opponent_double_vulnerability_active(::radar_interfaces::msg::RadarInfo::_opponent_double_vulnerability_active_type arg)
  {
    msg_.opponent_double_vulnerability_active = std::move(arg);
    return Init_RadarInfo_encryption_level(msg_);
  }

private:
  ::radar_interfaces::msg::RadarInfo msg_;
};

class Init_RadarInfo_double_vulnerability_chances
{
public:
  Init_RadarInfo_double_vulnerability_chances()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarInfo_opponent_double_vulnerability_active double_vulnerability_chances(::radar_interfaces::msg::RadarInfo::_double_vulnerability_chances_type arg)
  {
    msg_.double_vulnerability_chances = std::move(arg);
    return Init_RadarInfo_opponent_double_vulnerability_active(msg_);
  }

private:
  ::radar_interfaces::msg::RadarInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_interfaces::msg::RadarInfo>()
{
  return radar_interfaces::msg::builder::Init_RadarInfo_double_vulnerability_chances();
}

}  // namespace radar_interfaces

#endif  // RADAR_INTERFACES__MSG__DETAIL__RADAR_INFO__BUILDER_HPP_
