// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_interfaces:msg/Buffs.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__BUFFS__BUILDER_HPP_
#define RADAR_INTERFACES__MSG__DETAIL__BUFFS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "radar_interfaces/msg/detail/buffs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace radar_interfaces
{

namespace msg
{

namespace builder
{

class Init_Buffs_sentry_posture
{
public:
  explicit Init_Buffs_sentry_posture(::radar_interfaces::msg::Buffs & msg)
  : msg_(msg)
  {}
  ::radar_interfaces::msg::Buffs sentry_posture(::radar_interfaces::msg::Buffs::_sentry_posture_type arg)
  {
    msg_.sentry_posture = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_interfaces::msg::Buffs msg_;
};

class Init_Buffs_sentry_attack_boost
{
public:
  explicit Init_Buffs_sentry_attack_boost(::radar_interfaces::msg::Buffs & msg)
  : msg_(msg)
  {}
  Init_Buffs_sentry_posture sentry_attack_boost(::radar_interfaces::msg::Buffs::_sentry_attack_boost_type arg)
  {
    msg_.sentry_attack_boost = std::move(arg);
    return Init_Buffs_sentry_posture(msg_);
  }

private:
  ::radar_interfaces::msg::Buffs msg_;
};

class Init_Buffs_sentry_defense_debuff
{
public:
  explicit Init_Buffs_sentry_defense_debuff(::radar_interfaces::msg::Buffs & msg)
  : msg_(msg)
  {}
  Init_Buffs_sentry_attack_boost sentry_defense_debuff(::radar_interfaces::msg::Buffs::_sentry_defense_debuff_type arg)
  {
    msg_.sentry_defense_debuff = std::move(arg);
    return Init_Buffs_sentry_attack_boost(msg_);
  }

private:
  ::radar_interfaces::msg::Buffs msg_;
};

class Init_Buffs_sentry_defense_boost
{
public:
  explicit Init_Buffs_sentry_defense_boost(::radar_interfaces::msg::Buffs & msg)
  : msg_(msg)
  {}
  Init_Buffs_sentry_defense_debuff sentry_defense_boost(::radar_interfaces::msg::Buffs::_sentry_defense_boost_type arg)
  {
    msg_.sentry_defense_boost = std::move(arg);
    return Init_Buffs_sentry_defense_debuff(msg_);
  }

private:
  ::radar_interfaces::msg::Buffs msg_;
};

class Init_Buffs_sentry_cooling_boost
{
public:
  explicit Init_Buffs_sentry_cooling_boost(::radar_interfaces::msg::Buffs & msg)
  : msg_(msg)
  {}
  Init_Buffs_sentry_defense_boost sentry_cooling_boost(::radar_interfaces::msg::Buffs::_sentry_cooling_boost_type arg)
  {
    msg_.sentry_cooling_boost = std::move(arg);
    return Init_Buffs_sentry_defense_boost(msg_);
  }

private:
  ::radar_interfaces::msg::Buffs msg_;
};

class Init_Buffs_sentry_health_regen
{
public:
  explicit Init_Buffs_sentry_health_regen(::radar_interfaces::msg::Buffs & msg)
  : msg_(msg)
  {}
  Init_Buffs_sentry_cooling_boost sentry_health_regen(::radar_interfaces::msg::Buffs::_sentry_health_regen_type arg)
  {
    msg_.sentry_health_regen = std::move(arg);
    return Init_Buffs_sentry_cooling_boost(msg_);
  }

private:
  ::radar_interfaces::msg::Buffs msg_;
};

class Init_Buffs_infantry_4_attack_boost
{
public:
  explicit Init_Buffs_infantry_4_attack_boost(::radar_interfaces::msg::Buffs & msg)
  : msg_(msg)
  {}
  Init_Buffs_sentry_health_regen infantry_4_attack_boost(::radar_interfaces::msg::Buffs::_infantry_4_attack_boost_type arg)
  {
    msg_.infantry_4_attack_boost = std::move(arg);
    return Init_Buffs_sentry_health_regen(msg_);
  }

private:
  ::radar_interfaces::msg::Buffs msg_;
};

class Init_Buffs_infantry_4_defense_debuff
{
public:
  explicit Init_Buffs_infantry_4_defense_debuff(::radar_interfaces::msg::Buffs & msg)
  : msg_(msg)
  {}
  Init_Buffs_infantry_4_attack_boost infantry_4_defense_debuff(::radar_interfaces::msg::Buffs::_infantry_4_defense_debuff_type arg)
  {
    msg_.infantry_4_defense_debuff = std::move(arg);
    return Init_Buffs_infantry_4_attack_boost(msg_);
  }

private:
  ::radar_interfaces::msg::Buffs msg_;
};

class Init_Buffs_infantry_4_defense_boost
{
public:
  explicit Init_Buffs_infantry_4_defense_boost(::radar_interfaces::msg::Buffs & msg)
  : msg_(msg)
  {}
  Init_Buffs_infantry_4_defense_debuff infantry_4_defense_boost(::radar_interfaces::msg::Buffs::_infantry_4_defense_boost_type arg)
  {
    msg_.infantry_4_defense_boost = std::move(arg);
    return Init_Buffs_infantry_4_defense_debuff(msg_);
  }

private:
  ::radar_interfaces::msg::Buffs msg_;
};

class Init_Buffs_infantry_4_cooling_boost
{
public:
  explicit Init_Buffs_infantry_4_cooling_boost(::radar_interfaces::msg::Buffs & msg)
  : msg_(msg)
  {}
  Init_Buffs_infantry_4_defense_boost infantry_4_cooling_boost(::radar_interfaces::msg::Buffs::_infantry_4_cooling_boost_type arg)
  {
    msg_.infantry_4_cooling_boost = std::move(arg);
    return Init_Buffs_infantry_4_defense_boost(msg_);
  }

private:
  ::radar_interfaces::msg::Buffs msg_;
};

class Init_Buffs_infantry_4_health_regen
{
public:
  explicit Init_Buffs_infantry_4_health_regen(::radar_interfaces::msg::Buffs & msg)
  : msg_(msg)
  {}
  Init_Buffs_infantry_4_cooling_boost infantry_4_health_regen(::radar_interfaces::msg::Buffs::_infantry_4_health_regen_type arg)
  {
    msg_.infantry_4_health_regen = std::move(arg);
    return Init_Buffs_infantry_4_cooling_boost(msg_);
  }

private:
  ::radar_interfaces::msg::Buffs msg_;
};

class Init_Buffs_infantry_3_attack_boost
{
public:
  explicit Init_Buffs_infantry_3_attack_boost(::radar_interfaces::msg::Buffs & msg)
  : msg_(msg)
  {}
  Init_Buffs_infantry_4_health_regen infantry_3_attack_boost(::radar_interfaces::msg::Buffs::_infantry_3_attack_boost_type arg)
  {
    msg_.infantry_3_attack_boost = std::move(arg);
    return Init_Buffs_infantry_4_health_regen(msg_);
  }

private:
  ::radar_interfaces::msg::Buffs msg_;
};

class Init_Buffs_infantry_3_defense_debuff
{
public:
  explicit Init_Buffs_infantry_3_defense_debuff(::radar_interfaces::msg::Buffs & msg)
  : msg_(msg)
  {}
  Init_Buffs_infantry_3_attack_boost infantry_3_defense_debuff(::radar_interfaces::msg::Buffs::_infantry_3_defense_debuff_type arg)
  {
    msg_.infantry_3_defense_debuff = std::move(arg);
    return Init_Buffs_infantry_3_attack_boost(msg_);
  }

private:
  ::radar_interfaces::msg::Buffs msg_;
};

class Init_Buffs_infantry_3_defense_boost
{
public:
  explicit Init_Buffs_infantry_3_defense_boost(::radar_interfaces::msg::Buffs & msg)
  : msg_(msg)
  {}
  Init_Buffs_infantry_3_defense_debuff infantry_3_defense_boost(::radar_interfaces::msg::Buffs::_infantry_3_defense_boost_type arg)
  {
    msg_.infantry_3_defense_boost = std::move(arg);
    return Init_Buffs_infantry_3_defense_debuff(msg_);
  }

private:
  ::radar_interfaces::msg::Buffs msg_;
};

class Init_Buffs_infantry_3_cooling_boost
{
public:
  explicit Init_Buffs_infantry_3_cooling_boost(::radar_interfaces::msg::Buffs & msg)
  : msg_(msg)
  {}
  Init_Buffs_infantry_3_defense_boost infantry_3_cooling_boost(::radar_interfaces::msg::Buffs::_infantry_3_cooling_boost_type arg)
  {
    msg_.infantry_3_cooling_boost = std::move(arg);
    return Init_Buffs_infantry_3_defense_boost(msg_);
  }

private:
  ::radar_interfaces::msg::Buffs msg_;
};

class Init_Buffs_infantry_3_health_regen
{
public:
  explicit Init_Buffs_infantry_3_health_regen(::radar_interfaces::msg::Buffs & msg)
  : msg_(msg)
  {}
  Init_Buffs_infantry_3_cooling_boost infantry_3_health_regen(::radar_interfaces::msg::Buffs::_infantry_3_health_regen_type arg)
  {
    msg_.infantry_3_health_regen = std::move(arg);
    return Init_Buffs_infantry_3_cooling_boost(msg_);
  }

private:
  ::radar_interfaces::msg::Buffs msg_;
};

class Init_Buffs_engineer_attack_boost
{
public:
  explicit Init_Buffs_engineer_attack_boost(::radar_interfaces::msg::Buffs & msg)
  : msg_(msg)
  {}
  Init_Buffs_infantry_3_health_regen engineer_attack_boost(::radar_interfaces::msg::Buffs::_engineer_attack_boost_type arg)
  {
    msg_.engineer_attack_boost = std::move(arg);
    return Init_Buffs_infantry_3_health_regen(msg_);
  }

private:
  ::radar_interfaces::msg::Buffs msg_;
};

class Init_Buffs_engineer_defense_debuff
{
public:
  explicit Init_Buffs_engineer_defense_debuff(::radar_interfaces::msg::Buffs & msg)
  : msg_(msg)
  {}
  Init_Buffs_engineer_attack_boost engineer_defense_debuff(::radar_interfaces::msg::Buffs::_engineer_defense_debuff_type arg)
  {
    msg_.engineer_defense_debuff = std::move(arg);
    return Init_Buffs_engineer_attack_boost(msg_);
  }

private:
  ::radar_interfaces::msg::Buffs msg_;
};

class Init_Buffs_engineer_defense_boost
{
public:
  explicit Init_Buffs_engineer_defense_boost(::radar_interfaces::msg::Buffs & msg)
  : msg_(msg)
  {}
  Init_Buffs_engineer_defense_debuff engineer_defense_boost(::radar_interfaces::msg::Buffs::_engineer_defense_boost_type arg)
  {
    msg_.engineer_defense_boost = std::move(arg);
    return Init_Buffs_engineer_defense_debuff(msg_);
  }

private:
  ::radar_interfaces::msg::Buffs msg_;
};

class Init_Buffs_engineer_cooling_boost
{
public:
  explicit Init_Buffs_engineer_cooling_boost(::radar_interfaces::msg::Buffs & msg)
  : msg_(msg)
  {}
  Init_Buffs_engineer_defense_boost engineer_cooling_boost(::radar_interfaces::msg::Buffs::_engineer_cooling_boost_type arg)
  {
    msg_.engineer_cooling_boost = std::move(arg);
    return Init_Buffs_engineer_defense_boost(msg_);
  }

private:
  ::radar_interfaces::msg::Buffs msg_;
};

class Init_Buffs_engineer_health_regen
{
public:
  explicit Init_Buffs_engineer_health_regen(::radar_interfaces::msg::Buffs & msg)
  : msg_(msg)
  {}
  Init_Buffs_engineer_cooling_boost engineer_health_regen(::radar_interfaces::msg::Buffs::_engineer_health_regen_type arg)
  {
    msg_.engineer_health_regen = std::move(arg);
    return Init_Buffs_engineer_cooling_boost(msg_);
  }

private:
  ::radar_interfaces::msg::Buffs msg_;
};

class Init_Buffs_hero_attack_boost
{
public:
  explicit Init_Buffs_hero_attack_boost(::radar_interfaces::msg::Buffs & msg)
  : msg_(msg)
  {}
  Init_Buffs_engineer_health_regen hero_attack_boost(::radar_interfaces::msg::Buffs::_hero_attack_boost_type arg)
  {
    msg_.hero_attack_boost = std::move(arg);
    return Init_Buffs_engineer_health_regen(msg_);
  }

private:
  ::radar_interfaces::msg::Buffs msg_;
};

class Init_Buffs_hero_defense_debuff
{
public:
  explicit Init_Buffs_hero_defense_debuff(::radar_interfaces::msg::Buffs & msg)
  : msg_(msg)
  {}
  Init_Buffs_hero_attack_boost hero_defense_debuff(::radar_interfaces::msg::Buffs::_hero_defense_debuff_type arg)
  {
    msg_.hero_defense_debuff = std::move(arg);
    return Init_Buffs_hero_attack_boost(msg_);
  }

private:
  ::radar_interfaces::msg::Buffs msg_;
};

class Init_Buffs_hero_defense_boost
{
public:
  explicit Init_Buffs_hero_defense_boost(::radar_interfaces::msg::Buffs & msg)
  : msg_(msg)
  {}
  Init_Buffs_hero_defense_debuff hero_defense_boost(::radar_interfaces::msg::Buffs::_hero_defense_boost_type arg)
  {
    msg_.hero_defense_boost = std::move(arg);
    return Init_Buffs_hero_defense_debuff(msg_);
  }

private:
  ::radar_interfaces::msg::Buffs msg_;
};

class Init_Buffs_hero_cooling_boost
{
public:
  explicit Init_Buffs_hero_cooling_boost(::radar_interfaces::msg::Buffs & msg)
  : msg_(msg)
  {}
  Init_Buffs_hero_defense_boost hero_cooling_boost(::radar_interfaces::msg::Buffs::_hero_cooling_boost_type arg)
  {
    msg_.hero_cooling_boost = std::move(arg);
    return Init_Buffs_hero_defense_boost(msg_);
  }

private:
  ::radar_interfaces::msg::Buffs msg_;
};

class Init_Buffs_hero_health_regen
{
public:
  Init_Buffs_hero_health_regen()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Buffs_hero_cooling_boost hero_health_regen(::radar_interfaces::msg::Buffs::_hero_health_regen_type arg)
  {
    msg_.hero_health_regen = std::move(arg);
    return Init_Buffs_hero_cooling_boost(msg_);
  }

private:
  ::radar_interfaces::msg::Buffs msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_interfaces::msg::Buffs>()
{
  return radar_interfaces::msg::builder::Init_Buffs_hero_health_regen();
}

}  // namespace radar_interfaces

#endif  // RADAR_INTERFACES__MSG__DETAIL__BUFFS__BUILDER_HPP_
