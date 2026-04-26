// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_interfaces:msg/RadarMarkProgress.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__RADAR_MARK_PROGRESS__BUILDER_HPP_
#define RADAR_INTERFACES__MSG__DETAIL__RADAR_MARK_PROGRESS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "radar_interfaces/msg/detail/radar_mark_progress__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace radar_interfaces
{

namespace msg
{

namespace builder
{

class Init_RadarMarkProgress_ally_sentry_marked
{
public:
  explicit Init_RadarMarkProgress_ally_sentry_marked(::radar_interfaces::msg::RadarMarkProgress & msg)
  : msg_(msg)
  {}
  ::radar_interfaces::msg::RadarMarkProgress ally_sentry_marked(::radar_interfaces::msg::RadarMarkProgress::_ally_sentry_marked_type arg)
  {
    msg_.ally_sentry_marked = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_interfaces::msg::RadarMarkProgress msg_;
};

class Init_RadarMarkProgress_ally_aerial_marked
{
public:
  explicit Init_RadarMarkProgress_ally_aerial_marked(::radar_interfaces::msg::RadarMarkProgress & msg)
  : msg_(msg)
  {}
  Init_RadarMarkProgress_ally_sentry_marked ally_aerial_marked(::radar_interfaces::msg::RadarMarkProgress::_ally_aerial_marked_type arg)
  {
    msg_.ally_aerial_marked = std::move(arg);
    return Init_RadarMarkProgress_ally_sentry_marked(msg_);
  }

private:
  ::radar_interfaces::msg::RadarMarkProgress msg_;
};

class Init_RadarMarkProgress_ally_infantry_4_marked
{
public:
  explicit Init_RadarMarkProgress_ally_infantry_4_marked(::radar_interfaces::msg::RadarMarkProgress & msg)
  : msg_(msg)
  {}
  Init_RadarMarkProgress_ally_aerial_marked ally_infantry_4_marked(::radar_interfaces::msg::RadarMarkProgress::_ally_infantry_4_marked_type arg)
  {
    msg_.ally_infantry_4_marked = std::move(arg);
    return Init_RadarMarkProgress_ally_aerial_marked(msg_);
  }

private:
  ::radar_interfaces::msg::RadarMarkProgress msg_;
};

class Init_RadarMarkProgress_ally_infantry_3_marked
{
public:
  explicit Init_RadarMarkProgress_ally_infantry_3_marked(::radar_interfaces::msg::RadarMarkProgress & msg)
  : msg_(msg)
  {}
  Init_RadarMarkProgress_ally_infantry_4_marked ally_infantry_3_marked(::radar_interfaces::msg::RadarMarkProgress::_ally_infantry_3_marked_type arg)
  {
    msg_.ally_infantry_3_marked = std::move(arg);
    return Init_RadarMarkProgress_ally_infantry_4_marked(msg_);
  }

private:
  ::radar_interfaces::msg::RadarMarkProgress msg_;
};

class Init_RadarMarkProgress_ally_engineer_marked
{
public:
  explicit Init_RadarMarkProgress_ally_engineer_marked(::radar_interfaces::msg::RadarMarkProgress & msg)
  : msg_(msg)
  {}
  Init_RadarMarkProgress_ally_infantry_3_marked ally_engineer_marked(::radar_interfaces::msg::RadarMarkProgress::_ally_engineer_marked_type arg)
  {
    msg_.ally_engineer_marked = std::move(arg);
    return Init_RadarMarkProgress_ally_infantry_3_marked(msg_);
  }

private:
  ::radar_interfaces::msg::RadarMarkProgress msg_;
};

class Init_RadarMarkProgress_ally_hero_marked
{
public:
  explicit Init_RadarMarkProgress_ally_hero_marked(::radar_interfaces::msg::RadarMarkProgress & msg)
  : msg_(msg)
  {}
  Init_RadarMarkProgress_ally_engineer_marked ally_hero_marked(::radar_interfaces::msg::RadarMarkProgress::_ally_hero_marked_type arg)
  {
    msg_.ally_hero_marked = std::move(arg);
    return Init_RadarMarkProgress_ally_engineer_marked(msg_);
  }

private:
  ::radar_interfaces::msg::RadarMarkProgress msg_;
};

class Init_RadarMarkProgress_enemy_sentry_marked
{
public:
  explicit Init_RadarMarkProgress_enemy_sentry_marked(::radar_interfaces::msg::RadarMarkProgress & msg)
  : msg_(msg)
  {}
  Init_RadarMarkProgress_ally_hero_marked enemy_sentry_marked(::radar_interfaces::msg::RadarMarkProgress::_enemy_sentry_marked_type arg)
  {
    msg_.enemy_sentry_marked = std::move(arg);
    return Init_RadarMarkProgress_ally_hero_marked(msg_);
  }

private:
  ::radar_interfaces::msg::RadarMarkProgress msg_;
};

class Init_RadarMarkProgress_enemy_aerial_marked
{
public:
  explicit Init_RadarMarkProgress_enemy_aerial_marked(::radar_interfaces::msg::RadarMarkProgress & msg)
  : msg_(msg)
  {}
  Init_RadarMarkProgress_enemy_sentry_marked enemy_aerial_marked(::radar_interfaces::msg::RadarMarkProgress::_enemy_aerial_marked_type arg)
  {
    msg_.enemy_aerial_marked = std::move(arg);
    return Init_RadarMarkProgress_enemy_sentry_marked(msg_);
  }

private:
  ::radar_interfaces::msg::RadarMarkProgress msg_;
};

class Init_RadarMarkProgress_enemy_infantry_4_marked
{
public:
  explicit Init_RadarMarkProgress_enemy_infantry_4_marked(::radar_interfaces::msg::RadarMarkProgress & msg)
  : msg_(msg)
  {}
  Init_RadarMarkProgress_enemy_aerial_marked enemy_infantry_4_marked(::radar_interfaces::msg::RadarMarkProgress::_enemy_infantry_4_marked_type arg)
  {
    msg_.enemy_infantry_4_marked = std::move(arg);
    return Init_RadarMarkProgress_enemy_aerial_marked(msg_);
  }

private:
  ::radar_interfaces::msg::RadarMarkProgress msg_;
};

class Init_RadarMarkProgress_enemy_infantry_3_marked
{
public:
  explicit Init_RadarMarkProgress_enemy_infantry_3_marked(::radar_interfaces::msg::RadarMarkProgress & msg)
  : msg_(msg)
  {}
  Init_RadarMarkProgress_enemy_infantry_4_marked enemy_infantry_3_marked(::radar_interfaces::msg::RadarMarkProgress::_enemy_infantry_3_marked_type arg)
  {
    msg_.enemy_infantry_3_marked = std::move(arg);
    return Init_RadarMarkProgress_enemy_infantry_4_marked(msg_);
  }

private:
  ::radar_interfaces::msg::RadarMarkProgress msg_;
};

class Init_RadarMarkProgress_enemy_engineer_marked
{
public:
  explicit Init_RadarMarkProgress_enemy_engineer_marked(::radar_interfaces::msg::RadarMarkProgress & msg)
  : msg_(msg)
  {}
  Init_RadarMarkProgress_enemy_infantry_3_marked enemy_engineer_marked(::radar_interfaces::msg::RadarMarkProgress::_enemy_engineer_marked_type arg)
  {
    msg_.enemy_engineer_marked = std::move(arg);
    return Init_RadarMarkProgress_enemy_infantry_3_marked(msg_);
  }

private:
  ::radar_interfaces::msg::RadarMarkProgress msg_;
};

class Init_RadarMarkProgress_enemy_hero_marked
{
public:
  Init_RadarMarkProgress_enemy_hero_marked()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarMarkProgress_enemy_engineer_marked enemy_hero_marked(::radar_interfaces::msg::RadarMarkProgress::_enemy_hero_marked_type arg)
  {
    msg_.enemy_hero_marked = std::move(arg);
    return Init_RadarMarkProgress_enemy_engineer_marked(msg_);
  }

private:
  ::radar_interfaces::msg::RadarMarkProgress msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_interfaces::msg::RadarMarkProgress>()
{
  return radar_interfaces::msg::builder::Init_RadarMarkProgress_enemy_hero_marked();
}

}  // namespace radar_interfaces

#endif  // RADAR_INTERFACES__MSG__DETAIL__RADAR_MARK_PROGRESS__BUILDER_HPP_
