// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_interfaces:msg/MapRobotData.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__MAP_ROBOT_DATA__BUILDER_HPP_
#define RADAR_INTERFACES__MSG__DETAIL__MAP_ROBOT_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "radar_interfaces/msg/detail/map_robot_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace radar_interfaces
{

namespace msg
{

namespace builder
{

class Init_MapRobotData_ally_sentry_y
{
public:
  explicit Init_MapRobotData_ally_sentry_y(::radar_interfaces::msg::MapRobotData & msg)
  : msg_(msg)
  {}
  ::radar_interfaces::msg::MapRobotData ally_sentry_y(::radar_interfaces::msg::MapRobotData::_ally_sentry_y_type arg)
  {
    msg_.ally_sentry_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_interfaces::msg::MapRobotData msg_;
};

class Init_MapRobotData_ally_sentry_x
{
public:
  explicit Init_MapRobotData_ally_sentry_x(::radar_interfaces::msg::MapRobotData & msg)
  : msg_(msg)
  {}
  Init_MapRobotData_ally_sentry_y ally_sentry_x(::radar_interfaces::msg::MapRobotData::_ally_sentry_x_type arg)
  {
    msg_.ally_sentry_x = std::move(arg);
    return Init_MapRobotData_ally_sentry_y(msg_);
  }

private:
  ::radar_interfaces::msg::MapRobotData msg_;
};

class Init_MapRobotData_ally_aerial_y
{
public:
  explicit Init_MapRobotData_ally_aerial_y(::radar_interfaces::msg::MapRobotData & msg)
  : msg_(msg)
  {}
  Init_MapRobotData_ally_sentry_x ally_aerial_y(::radar_interfaces::msg::MapRobotData::_ally_aerial_y_type arg)
  {
    msg_.ally_aerial_y = std::move(arg);
    return Init_MapRobotData_ally_sentry_x(msg_);
  }

private:
  ::radar_interfaces::msg::MapRobotData msg_;
};

class Init_MapRobotData_ally_aerial_x
{
public:
  explicit Init_MapRobotData_ally_aerial_x(::radar_interfaces::msg::MapRobotData & msg)
  : msg_(msg)
  {}
  Init_MapRobotData_ally_aerial_y ally_aerial_x(::radar_interfaces::msg::MapRobotData::_ally_aerial_x_type arg)
  {
    msg_.ally_aerial_x = std::move(arg);
    return Init_MapRobotData_ally_aerial_y(msg_);
  }

private:
  ::radar_interfaces::msg::MapRobotData msg_;
};

class Init_MapRobotData_ally_infantry_4_y
{
public:
  explicit Init_MapRobotData_ally_infantry_4_y(::radar_interfaces::msg::MapRobotData & msg)
  : msg_(msg)
  {}
  Init_MapRobotData_ally_aerial_x ally_infantry_4_y(::radar_interfaces::msg::MapRobotData::_ally_infantry_4_y_type arg)
  {
    msg_.ally_infantry_4_y = std::move(arg);
    return Init_MapRobotData_ally_aerial_x(msg_);
  }

private:
  ::radar_interfaces::msg::MapRobotData msg_;
};

class Init_MapRobotData_ally_infantry_4_x
{
public:
  explicit Init_MapRobotData_ally_infantry_4_x(::radar_interfaces::msg::MapRobotData & msg)
  : msg_(msg)
  {}
  Init_MapRobotData_ally_infantry_4_y ally_infantry_4_x(::radar_interfaces::msg::MapRobotData::_ally_infantry_4_x_type arg)
  {
    msg_.ally_infantry_4_x = std::move(arg);
    return Init_MapRobotData_ally_infantry_4_y(msg_);
  }

private:
  ::radar_interfaces::msg::MapRobotData msg_;
};

class Init_MapRobotData_ally_infantry_3_y
{
public:
  explicit Init_MapRobotData_ally_infantry_3_y(::radar_interfaces::msg::MapRobotData & msg)
  : msg_(msg)
  {}
  Init_MapRobotData_ally_infantry_4_x ally_infantry_3_y(::radar_interfaces::msg::MapRobotData::_ally_infantry_3_y_type arg)
  {
    msg_.ally_infantry_3_y = std::move(arg);
    return Init_MapRobotData_ally_infantry_4_x(msg_);
  }

private:
  ::radar_interfaces::msg::MapRobotData msg_;
};

class Init_MapRobotData_ally_infantry_3_x
{
public:
  explicit Init_MapRobotData_ally_infantry_3_x(::radar_interfaces::msg::MapRobotData & msg)
  : msg_(msg)
  {}
  Init_MapRobotData_ally_infantry_3_y ally_infantry_3_x(::radar_interfaces::msg::MapRobotData::_ally_infantry_3_x_type arg)
  {
    msg_.ally_infantry_3_x = std::move(arg);
    return Init_MapRobotData_ally_infantry_3_y(msg_);
  }

private:
  ::radar_interfaces::msg::MapRobotData msg_;
};

class Init_MapRobotData_ally_engineer_y
{
public:
  explicit Init_MapRobotData_ally_engineer_y(::radar_interfaces::msg::MapRobotData & msg)
  : msg_(msg)
  {}
  Init_MapRobotData_ally_infantry_3_x ally_engineer_y(::radar_interfaces::msg::MapRobotData::_ally_engineer_y_type arg)
  {
    msg_.ally_engineer_y = std::move(arg);
    return Init_MapRobotData_ally_infantry_3_x(msg_);
  }

private:
  ::radar_interfaces::msg::MapRobotData msg_;
};

class Init_MapRobotData_ally_engineer_x
{
public:
  explicit Init_MapRobotData_ally_engineer_x(::radar_interfaces::msg::MapRobotData & msg)
  : msg_(msg)
  {}
  Init_MapRobotData_ally_engineer_y ally_engineer_x(::radar_interfaces::msg::MapRobotData::_ally_engineer_x_type arg)
  {
    msg_.ally_engineer_x = std::move(arg);
    return Init_MapRobotData_ally_engineer_y(msg_);
  }

private:
  ::radar_interfaces::msg::MapRobotData msg_;
};

class Init_MapRobotData_ally_hero_y
{
public:
  explicit Init_MapRobotData_ally_hero_y(::radar_interfaces::msg::MapRobotData & msg)
  : msg_(msg)
  {}
  Init_MapRobotData_ally_engineer_x ally_hero_y(::radar_interfaces::msg::MapRobotData::_ally_hero_y_type arg)
  {
    msg_.ally_hero_y = std::move(arg);
    return Init_MapRobotData_ally_engineer_x(msg_);
  }

private:
  ::radar_interfaces::msg::MapRobotData msg_;
};

class Init_MapRobotData_ally_hero_x
{
public:
  explicit Init_MapRobotData_ally_hero_x(::radar_interfaces::msg::MapRobotData & msg)
  : msg_(msg)
  {}
  Init_MapRobotData_ally_hero_y ally_hero_x(::radar_interfaces::msg::MapRobotData::_ally_hero_x_type arg)
  {
    msg_.ally_hero_x = std::move(arg);
    return Init_MapRobotData_ally_hero_y(msg_);
  }

private:
  ::radar_interfaces::msg::MapRobotData msg_;
};

class Init_MapRobotData_opponent_sentry_y
{
public:
  explicit Init_MapRobotData_opponent_sentry_y(::radar_interfaces::msg::MapRobotData & msg)
  : msg_(msg)
  {}
  Init_MapRobotData_ally_hero_x opponent_sentry_y(::radar_interfaces::msg::MapRobotData::_opponent_sentry_y_type arg)
  {
    msg_.opponent_sentry_y = std::move(arg);
    return Init_MapRobotData_ally_hero_x(msg_);
  }

private:
  ::radar_interfaces::msg::MapRobotData msg_;
};

class Init_MapRobotData_opponent_sentry_x
{
public:
  explicit Init_MapRobotData_opponent_sentry_x(::radar_interfaces::msg::MapRobotData & msg)
  : msg_(msg)
  {}
  Init_MapRobotData_opponent_sentry_y opponent_sentry_x(::radar_interfaces::msg::MapRobotData::_opponent_sentry_x_type arg)
  {
    msg_.opponent_sentry_x = std::move(arg);
    return Init_MapRobotData_opponent_sentry_y(msg_);
  }

private:
  ::radar_interfaces::msg::MapRobotData msg_;
};

class Init_MapRobotData_opponent_aerial_y
{
public:
  explicit Init_MapRobotData_opponent_aerial_y(::radar_interfaces::msg::MapRobotData & msg)
  : msg_(msg)
  {}
  Init_MapRobotData_opponent_sentry_x opponent_aerial_y(::radar_interfaces::msg::MapRobotData::_opponent_aerial_y_type arg)
  {
    msg_.opponent_aerial_y = std::move(arg);
    return Init_MapRobotData_opponent_sentry_x(msg_);
  }

private:
  ::radar_interfaces::msg::MapRobotData msg_;
};

class Init_MapRobotData_opponent_aerial_x
{
public:
  explicit Init_MapRobotData_opponent_aerial_x(::radar_interfaces::msg::MapRobotData & msg)
  : msg_(msg)
  {}
  Init_MapRobotData_opponent_aerial_y opponent_aerial_x(::radar_interfaces::msg::MapRobotData::_opponent_aerial_x_type arg)
  {
    msg_.opponent_aerial_x = std::move(arg);
    return Init_MapRobotData_opponent_aerial_y(msg_);
  }

private:
  ::radar_interfaces::msg::MapRobotData msg_;
};

class Init_MapRobotData_opponent_infantry_4_y
{
public:
  explicit Init_MapRobotData_opponent_infantry_4_y(::radar_interfaces::msg::MapRobotData & msg)
  : msg_(msg)
  {}
  Init_MapRobotData_opponent_aerial_x opponent_infantry_4_y(::radar_interfaces::msg::MapRobotData::_opponent_infantry_4_y_type arg)
  {
    msg_.opponent_infantry_4_y = std::move(arg);
    return Init_MapRobotData_opponent_aerial_x(msg_);
  }

private:
  ::radar_interfaces::msg::MapRobotData msg_;
};

class Init_MapRobotData_opponent_infantry_4_x
{
public:
  explicit Init_MapRobotData_opponent_infantry_4_x(::radar_interfaces::msg::MapRobotData & msg)
  : msg_(msg)
  {}
  Init_MapRobotData_opponent_infantry_4_y opponent_infantry_4_x(::radar_interfaces::msg::MapRobotData::_opponent_infantry_4_x_type arg)
  {
    msg_.opponent_infantry_4_x = std::move(arg);
    return Init_MapRobotData_opponent_infantry_4_y(msg_);
  }

private:
  ::radar_interfaces::msg::MapRobotData msg_;
};

class Init_MapRobotData_opponent_infantry_3_y
{
public:
  explicit Init_MapRobotData_opponent_infantry_3_y(::radar_interfaces::msg::MapRobotData & msg)
  : msg_(msg)
  {}
  Init_MapRobotData_opponent_infantry_4_x opponent_infantry_3_y(::radar_interfaces::msg::MapRobotData::_opponent_infantry_3_y_type arg)
  {
    msg_.opponent_infantry_3_y = std::move(arg);
    return Init_MapRobotData_opponent_infantry_4_x(msg_);
  }

private:
  ::radar_interfaces::msg::MapRobotData msg_;
};

class Init_MapRobotData_opponent_infantry_3_x
{
public:
  explicit Init_MapRobotData_opponent_infantry_3_x(::radar_interfaces::msg::MapRobotData & msg)
  : msg_(msg)
  {}
  Init_MapRobotData_opponent_infantry_3_y opponent_infantry_3_x(::radar_interfaces::msg::MapRobotData::_opponent_infantry_3_x_type arg)
  {
    msg_.opponent_infantry_3_x = std::move(arg);
    return Init_MapRobotData_opponent_infantry_3_y(msg_);
  }

private:
  ::radar_interfaces::msg::MapRobotData msg_;
};

class Init_MapRobotData_opponent_engineer_y
{
public:
  explicit Init_MapRobotData_opponent_engineer_y(::radar_interfaces::msg::MapRobotData & msg)
  : msg_(msg)
  {}
  Init_MapRobotData_opponent_infantry_3_x opponent_engineer_y(::radar_interfaces::msg::MapRobotData::_opponent_engineer_y_type arg)
  {
    msg_.opponent_engineer_y = std::move(arg);
    return Init_MapRobotData_opponent_infantry_3_x(msg_);
  }

private:
  ::radar_interfaces::msg::MapRobotData msg_;
};

class Init_MapRobotData_opponent_engineer_x
{
public:
  explicit Init_MapRobotData_opponent_engineer_x(::radar_interfaces::msg::MapRobotData & msg)
  : msg_(msg)
  {}
  Init_MapRobotData_opponent_engineer_y opponent_engineer_x(::radar_interfaces::msg::MapRobotData::_opponent_engineer_x_type arg)
  {
    msg_.opponent_engineer_x = std::move(arg);
    return Init_MapRobotData_opponent_engineer_y(msg_);
  }

private:
  ::radar_interfaces::msg::MapRobotData msg_;
};

class Init_MapRobotData_opponent_hero_y
{
public:
  explicit Init_MapRobotData_opponent_hero_y(::radar_interfaces::msg::MapRobotData & msg)
  : msg_(msg)
  {}
  Init_MapRobotData_opponent_engineer_x opponent_hero_y(::radar_interfaces::msg::MapRobotData::_opponent_hero_y_type arg)
  {
    msg_.opponent_hero_y = std::move(arg);
    return Init_MapRobotData_opponent_engineer_x(msg_);
  }

private:
  ::radar_interfaces::msg::MapRobotData msg_;
};

class Init_MapRobotData_opponent_hero_x
{
public:
  Init_MapRobotData_opponent_hero_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapRobotData_opponent_hero_y opponent_hero_x(::radar_interfaces::msg::MapRobotData::_opponent_hero_x_type arg)
  {
    msg_.opponent_hero_x = std::move(arg);
    return Init_MapRobotData_opponent_hero_y(msg_);
  }

private:
  ::radar_interfaces::msg::MapRobotData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_interfaces::msg::MapRobotData>()
{
  return radar_interfaces::msg::builder::Init_MapRobotData_opponent_hero_x();
}

}  // namespace radar_interfaces

#endif  // RADAR_INTERFACES__MSG__DETAIL__MAP_ROBOT_DATA__BUILDER_HPP_
