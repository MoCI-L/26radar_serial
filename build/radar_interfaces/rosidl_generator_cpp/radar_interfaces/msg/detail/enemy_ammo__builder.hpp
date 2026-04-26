// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_interfaces:msg/EnemyAmmo.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__ENEMY_AMMO__BUILDER_HPP_
#define RADAR_INTERFACES__MSG__DETAIL__ENEMY_AMMO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "radar_interfaces/msg/detail/enemy_ammo__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace radar_interfaces
{

namespace msg
{

namespace builder
{

class Init_EnemyAmmo_sentry_ammo
{
public:
  explicit Init_EnemyAmmo_sentry_ammo(::radar_interfaces::msg::EnemyAmmo & msg)
  : msg_(msg)
  {}
  ::radar_interfaces::msg::EnemyAmmo sentry_ammo(::radar_interfaces::msg::EnemyAmmo::_sentry_ammo_type arg)
  {
    msg_.sentry_ammo = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_interfaces::msg::EnemyAmmo msg_;
};

class Init_EnemyAmmo_aerial_ammo
{
public:
  explicit Init_EnemyAmmo_aerial_ammo(::radar_interfaces::msg::EnemyAmmo & msg)
  : msg_(msg)
  {}
  Init_EnemyAmmo_sentry_ammo aerial_ammo(::radar_interfaces::msg::EnemyAmmo::_aerial_ammo_type arg)
  {
    msg_.aerial_ammo = std::move(arg);
    return Init_EnemyAmmo_sentry_ammo(msg_);
  }

private:
  ::radar_interfaces::msg::EnemyAmmo msg_;
};

class Init_EnemyAmmo_infantry_4_ammo
{
public:
  explicit Init_EnemyAmmo_infantry_4_ammo(::radar_interfaces::msg::EnemyAmmo & msg)
  : msg_(msg)
  {}
  Init_EnemyAmmo_aerial_ammo infantry_4_ammo(::radar_interfaces::msg::EnemyAmmo::_infantry_4_ammo_type arg)
  {
    msg_.infantry_4_ammo = std::move(arg);
    return Init_EnemyAmmo_aerial_ammo(msg_);
  }

private:
  ::radar_interfaces::msg::EnemyAmmo msg_;
};

class Init_EnemyAmmo_infantry_3_ammo
{
public:
  explicit Init_EnemyAmmo_infantry_3_ammo(::radar_interfaces::msg::EnemyAmmo & msg)
  : msg_(msg)
  {}
  Init_EnemyAmmo_infantry_4_ammo infantry_3_ammo(::radar_interfaces::msg::EnemyAmmo::_infantry_3_ammo_type arg)
  {
    msg_.infantry_3_ammo = std::move(arg);
    return Init_EnemyAmmo_infantry_4_ammo(msg_);
  }

private:
  ::radar_interfaces::msg::EnemyAmmo msg_;
};

class Init_EnemyAmmo_hero_ammo
{
public:
  Init_EnemyAmmo_hero_ammo()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EnemyAmmo_infantry_3_ammo hero_ammo(::radar_interfaces::msg::EnemyAmmo::_hero_ammo_type arg)
  {
    msg_.hero_ammo = std::move(arg);
    return Init_EnemyAmmo_infantry_3_ammo(msg_);
  }

private:
  ::radar_interfaces::msg::EnemyAmmo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_interfaces::msg::EnemyAmmo>()
{
  return radar_interfaces::msg::builder::Init_EnemyAmmo_hero_ammo();
}

}  // namespace radar_interfaces

#endif  // RADAR_INTERFACES__MSG__DETAIL__ENEMY_AMMO__BUILDER_HPP_
