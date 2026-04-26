// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_interfaces:msg/EnemyPosition.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__ENEMY_POSITION__BUILDER_HPP_
#define RADAR_INTERFACES__MSG__DETAIL__ENEMY_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "radar_interfaces/msg/detail/enemy_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace radar_interfaces
{

namespace msg
{

namespace builder
{

class Init_EnemyPosition_sentry_y
{
public:
  explicit Init_EnemyPosition_sentry_y(::radar_interfaces::msg::EnemyPosition & msg)
  : msg_(msg)
  {}
  ::radar_interfaces::msg::EnemyPosition sentry_y(::radar_interfaces::msg::EnemyPosition::_sentry_y_type arg)
  {
    msg_.sentry_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_interfaces::msg::EnemyPosition msg_;
};

class Init_EnemyPosition_sentry_x
{
public:
  explicit Init_EnemyPosition_sentry_x(::radar_interfaces::msg::EnemyPosition & msg)
  : msg_(msg)
  {}
  Init_EnemyPosition_sentry_y sentry_x(::radar_interfaces::msg::EnemyPosition::_sentry_x_type arg)
  {
    msg_.sentry_x = std::move(arg);
    return Init_EnemyPosition_sentry_y(msg_);
  }

private:
  ::radar_interfaces::msg::EnemyPosition msg_;
};

class Init_EnemyPosition_aerial_y
{
public:
  explicit Init_EnemyPosition_aerial_y(::radar_interfaces::msg::EnemyPosition & msg)
  : msg_(msg)
  {}
  Init_EnemyPosition_sentry_x aerial_y(::radar_interfaces::msg::EnemyPosition::_aerial_y_type arg)
  {
    msg_.aerial_y = std::move(arg);
    return Init_EnemyPosition_sentry_x(msg_);
  }

private:
  ::radar_interfaces::msg::EnemyPosition msg_;
};

class Init_EnemyPosition_aerial_x
{
public:
  explicit Init_EnemyPosition_aerial_x(::radar_interfaces::msg::EnemyPosition & msg)
  : msg_(msg)
  {}
  Init_EnemyPosition_aerial_y aerial_x(::radar_interfaces::msg::EnemyPosition::_aerial_x_type arg)
  {
    msg_.aerial_x = std::move(arg);
    return Init_EnemyPosition_aerial_y(msg_);
  }

private:
  ::radar_interfaces::msg::EnemyPosition msg_;
};

class Init_EnemyPosition_infantry_4_y
{
public:
  explicit Init_EnemyPosition_infantry_4_y(::radar_interfaces::msg::EnemyPosition & msg)
  : msg_(msg)
  {}
  Init_EnemyPosition_aerial_x infantry_4_y(::radar_interfaces::msg::EnemyPosition::_infantry_4_y_type arg)
  {
    msg_.infantry_4_y = std::move(arg);
    return Init_EnemyPosition_aerial_x(msg_);
  }

private:
  ::radar_interfaces::msg::EnemyPosition msg_;
};

class Init_EnemyPosition_infantry_4_x
{
public:
  explicit Init_EnemyPosition_infantry_4_x(::radar_interfaces::msg::EnemyPosition & msg)
  : msg_(msg)
  {}
  Init_EnemyPosition_infantry_4_y infantry_4_x(::radar_interfaces::msg::EnemyPosition::_infantry_4_x_type arg)
  {
    msg_.infantry_4_x = std::move(arg);
    return Init_EnemyPosition_infantry_4_y(msg_);
  }

private:
  ::radar_interfaces::msg::EnemyPosition msg_;
};

class Init_EnemyPosition_infantry_3_y
{
public:
  explicit Init_EnemyPosition_infantry_3_y(::radar_interfaces::msg::EnemyPosition & msg)
  : msg_(msg)
  {}
  Init_EnemyPosition_infantry_4_x infantry_3_y(::radar_interfaces::msg::EnemyPosition::_infantry_3_y_type arg)
  {
    msg_.infantry_3_y = std::move(arg);
    return Init_EnemyPosition_infantry_4_x(msg_);
  }

private:
  ::radar_interfaces::msg::EnemyPosition msg_;
};

class Init_EnemyPosition_infantry_3_x
{
public:
  explicit Init_EnemyPosition_infantry_3_x(::radar_interfaces::msg::EnemyPosition & msg)
  : msg_(msg)
  {}
  Init_EnemyPosition_infantry_3_y infantry_3_x(::radar_interfaces::msg::EnemyPosition::_infantry_3_x_type arg)
  {
    msg_.infantry_3_x = std::move(arg);
    return Init_EnemyPosition_infantry_3_y(msg_);
  }

private:
  ::radar_interfaces::msg::EnemyPosition msg_;
};

class Init_EnemyPosition_engineer_y
{
public:
  explicit Init_EnemyPosition_engineer_y(::radar_interfaces::msg::EnemyPosition & msg)
  : msg_(msg)
  {}
  Init_EnemyPosition_infantry_3_x engineer_y(::radar_interfaces::msg::EnemyPosition::_engineer_y_type arg)
  {
    msg_.engineer_y = std::move(arg);
    return Init_EnemyPosition_infantry_3_x(msg_);
  }

private:
  ::radar_interfaces::msg::EnemyPosition msg_;
};

class Init_EnemyPosition_engineer_x
{
public:
  explicit Init_EnemyPosition_engineer_x(::radar_interfaces::msg::EnemyPosition & msg)
  : msg_(msg)
  {}
  Init_EnemyPosition_engineer_y engineer_x(::radar_interfaces::msg::EnemyPosition::_engineer_x_type arg)
  {
    msg_.engineer_x = std::move(arg);
    return Init_EnemyPosition_engineer_y(msg_);
  }

private:
  ::radar_interfaces::msg::EnemyPosition msg_;
};

class Init_EnemyPosition_hero_y
{
public:
  explicit Init_EnemyPosition_hero_y(::radar_interfaces::msg::EnemyPosition & msg)
  : msg_(msg)
  {}
  Init_EnemyPosition_engineer_x hero_y(::radar_interfaces::msg::EnemyPosition::_hero_y_type arg)
  {
    msg_.hero_y = std::move(arg);
    return Init_EnemyPosition_engineer_x(msg_);
  }

private:
  ::radar_interfaces::msg::EnemyPosition msg_;
};

class Init_EnemyPosition_hero_x
{
public:
  Init_EnemyPosition_hero_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EnemyPosition_hero_y hero_x(::radar_interfaces::msg::EnemyPosition::_hero_x_type arg)
  {
    msg_.hero_x = std::move(arg);
    return Init_EnemyPosition_hero_y(msg_);
  }

private:
  ::radar_interfaces::msg::EnemyPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_interfaces::msg::EnemyPosition>()
{
  return radar_interfaces::msg::builder::Init_EnemyPosition_hero_x();
}

}  // namespace radar_interfaces

#endif  // RADAR_INTERFACES__MSG__DETAIL__ENEMY_POSITION__BUILDER_HPP_
