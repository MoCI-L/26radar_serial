// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_interfaces:msg/EnemyHP.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__ENEMY_HP__BUILDER_HPP_
#define RADAR_INTERFACES__MSG__DETAIL__ENEMY_HP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "radar_interfaces/msg/detail/enemy_hp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace radar_interfaces
{

namespace msg
{

namespace builder
{

class Init_EnemyHP_sentry_hp
{
public:
  explicit Init_EnemyHP_sentry_hp(::radar_interfaces::msg::EnemyHP & msg)
  : msg_(msg)
  {}
  ::radar_interfaces::msg::EnemyHP sentry_hp(::radar_interfaces::msg::EnemyHP::_sentry_hp_type arg)
  {
    msg_.sentry_hp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_interfaces::msg::EnemyHP msg_;
};

class Init_EnemyHP_reserved
{
public:
  explicit Init_EnemyHP_reserved(::radar_interfaces::msg::EnemyHP & msg)
  : msg_(msg)
  {}
  Init_EnemyHP_sentry_hp reserved(::radar_interfaces::msg::EnemyHP::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return Init_EnemyHP_sentry_hp(msg_);
  }

private:
  ::radar_interfaces::msg::EnemyHP msg_;
};

class Init_EnemyHP_infantry_4_hp
{
public:
  explicit Init_EnemyHP_infantry_4_hp(::radar_interfaces::msg::EnemyHP & msg)
  : msg_(msg)
  {}
  Init_EnemyHP_reserved infantry_4_hp(::radar_interfaces::msg::EnemyHP::_infantry_4_hp_type arg)
  {
    msg_.infantry_4_hp = std::move(arg);
    return Init_EnemyHP_reserved(msg_);
  }

private:
  ::radar_interfaces::msg::EnemyHP msg_;
};

class Init_EnemyHP_infantry_3_hp
{
public:
  explicit Init_EnemyHP_infantry_3_hp(::radar_interfaces::msg::EnemyHP & msg)
  : msg_(msg)
  {}
  Init_EnemyHP_infantry_4_hp infantry_3_hp(::radar_interfaces::msg::EnemyHP::_infantry_3_hp_type arg)
  {
    msg_.infantry_3_hp = std::move(arg);
    return Init_EnemyHP_infantry_4_hp(msg_);
  }

private:
  ::radar_interfaces::msg::EnemyHP msg_;
};

class Init_EnemyHP_engineer_hp
{
public:
  explicit Init_EnemyHP_engineer_hp(::radar_interfaces::msg::EnemyHP & msg)
  : msg_(msg)
  {}
  Init_EnemyHP_infantry_3_hp engineer_hp(::radar_interfaces::msg::EnemyHP::_engineer_hp_type arg)
  {
    msg_.engineer_hp = std::move(arg);
    return Init_EnemyHP_infantry_3_hp(msg_);
  }

private:
  ::radar_interfaces::msg::EnemyHP msg_;
};

class Init_EnemyHP_hero_hp
{
public:
  Init_EnemyHP_hero_hp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EnemyHP_engineer_hp hero_hp(::radar_interfaces::msg::EnemyHP::_hero_hp_type arg)
  {
    msg_.hero_hp = std::move(arg);
    return Init_EnemyHP_engineer_hp(msg_);
  }

private:
  ::radar_interfaces::msg::EnemyHP msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_interfaces::msg::EnemyHP>()
{
  return radar_interfaces::msg::builder::Init_EnemyHP_hero_hp();
}

}  // namespace radar_interfaces

#endif  // RADAR_INTERFACES__MSG__DETAIL__ENEMY_HP__BUILDER_HPP_
