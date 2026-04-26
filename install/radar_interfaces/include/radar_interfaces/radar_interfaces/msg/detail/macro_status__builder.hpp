// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from radar_interfaces:msg/MacroStatus.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__MACRO_STATUS__BUILDER_HPP_
#define RADAR_INTERFACES__MSG__DETAIL__MACRO_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "radar_interfaces/msg/detail/macro_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace radar_interfaces
{

namespace msg
{

namespace builder
{

class Init_MacroStatus_enemy_road_upper_occupied
{
public:
  explicit Init_MacroStatus_enemy_road_upper_occupied(::radar_interfaces::msg::MacroStatus & msg)
  : msg_(msg)
  {}
  ::radar_interfaces::msg::MacroStatus enemy_road_upper_occupied(::radar_interfaces::msg::MacroStatus::_enemy_road_upper_occupied_type arg)
  {
    msg_.enemy_road_upper_occupied = std::move(arg);
    return std::move(msg_);
  }

private:
  ::radar_interfaces::msg::MacroStatus msg_;
};

class Init_MacroStatus_enemy_jump_upper_occupied
{
public:
  explicit Init_MacroStatus_enemy_jump_upper_occupied(::radar_interfaces::msg::MacroStatus & msg)
  : msg_(msg)
  {}
  Init_MacroStatus_enemy_road_upper_occupied enemy_jump_upper_occupied(::radar_interfaces::msg::MacroStatus::_enemy_jump_upper_occupied_type arg)
  {
    msg_.enemy_jump_upper_occupied = std::move(arg);
    return Init_MacroStatus_enemy_road_upper_occupied(msg_);
  }

private:
  ::radar_interfaces::msg::MacroStatus msg_;
};

class Init_MacroStatus_enemy_highland_upper_occupied
{
public:
  explicit Init_MacroStatus_enemy_highland_upper_occupied(::radar_interfaces::msg::MacroStatus & msg)
  : msg_(msg)
  {}
  Init_MacroStatus_enemy_jump_upper_occupied enemy_highland_upper_occupied(::radar_interfaces::msg::MacroStatus::_enemy_highland_upper_occupied_type arg)
  {
    msg_.enemy_highland_upper_occupied = std::move(arg);
    return Init_MacroStatus_enemy_jump_upper_occupied(msg_);
  }

private:
  ::radar_interfaces::msg::MacroStatus msg_;
};

class Init_MacroStatus_ally_side_tunnel_post_jump_occupied
{
public:
  explicit Init_MacroStatus_ally_side_tunnel_post_jump_occupied(::radar_interfaces::msg::MacroStatus & msg)
  : msg_(msg)
  {}
  Init_MacroStatus_enemy_highland_upper_occupied ally_side_tunnel_post_jump_occupied(::radar_interfaces::msg::MacroStatus::_ally_side_tunnel_post_jump_occupied_type arg)
  {
    msg_.ally_side_tunnel_post_jump_occupied = std::move(arg);
    return Init_MacroStatus_enemy_highland_upper_occupied(msg_);
  }

private:
  ::radar_interfaces::msg::MacroStatus msg_;
};

class Init_MacroStatus_ally_side_tunnel_pre_jump_occupied
{
public:
  explicit Init_MacroStatus_ally_side_tunnel_pre_jump_occupied(::radar_interfaces::msg::MacroStatus & msg)
  : msg_(msg)
  {}
  Init_MacroStatus_ally_side_tunnel_post_jump_occupied ally_side_tunnel_pre_jump_occupied(::radar_interfaces::msg::MacroStatus::_ally_side_tunnel_pre_jump_occupied_type arg)
  {
    msg_.ally_side_tunnel_pre_jump_occupied = std::move(arg);
    return Init_MacroStatus_ally_side_tunnel_post_jump_occupied(msg_);
  }

private:
  ::radar_interfaces::msg::MacroStatus msg_;
};

class Init_MacroStatus_enemy_tunnel_post_jump_occupied
{
public:
  explicit Init_MacroStatus_enemy_tunnel_post_jump_occupied(::radar_interfaces::msg::MacroStatus & msg)
  : msg_(msg)
  {}
  Init_MacroStatus_ally_side_tunnel_pre_jump_occupied enemy_tunnel_post_jump_occupied(::radar_interfaces::msg::MacroStatus::_enemy_tunnel_post_jump_occupied_type arg)
  {
    msg_.enemy_tunnel_post_jump_occupied = std::move(arg);
    return Init_MacroStatus_ally_side_tunnel_pre_jump_occupied(msg_);
  }

private:
  ::radar_interfaces::msg::MacroStatus msg_;
};

class Init_MacroStatus_enemy_tunnel_pre_jump_occupied
{
public:
  explicit Init_MacroStatus_enemy_tunnel_pre_jump_occupied(::radar_interfaces::msg::MacroStatus & msg)
  : msg_(msg)
  {}
  Init_MacroStatus_enemy_tunnel_post_jump_occupied enemy_tunnel_pre_jump_occupied(::radar_interfaces::msg::MacroStatus::_enemy_tunnel_pre_jump_occupied_type arg)
  {
    msg_.enemy_tunnel_pre_jump_occupied = std::move(arg);
    return Init_MacroStatus_enemy_tunnel_post_jump_occupied(msg_);
  }

private:
  ::radar_interfaces::msg::MacroStatus msg_;
};

class Init_MacroStatus_enemy_base_buff_occupied
{
public:
  explicit Init_MacroStatus_enemy_base_buff_occupied(::radar_interfaces::msg::MacroStatus & msg)
  : msg_(msg)
  {}
  Init_MacroStatus_enemy_tunnel_pre_jump_occupied enemy_base_buff_occupied(::radar_interfaces::msg::MacroStatus::_enemy_base_buff_occupied_type arg)
  {
    msg_.enemy_base_buff_occupied = std::move(arg);
    return Init_MacroStatus_enemy_tunnel_pre_jump_occupied(msg_);
  }

private:
  ::radar_interfaces::msg::MacroStatus msg_;
};

class Init_MacroStatus_enemy_outpost_buff_status
{
public:
  explicit Init_MacroStatus_enemy_outpost_buff_status(::radar_interfaces::msg::MacroStatus & msg)
  : msg_(msg)
  {}
  Init_MacroStatus_enemy_base_buff_occupied enemy_outpost_buff_status(::radar_interfaces::msg::MacroStatus::_enemy_outpost_buff_status_type arg)
  {
    msg_.enemy_outpost_buff_status = std::move(arg);
    return Init_MacroStatus_enemy_base_buff_occupied(msg_);
  }

private:
  ::radar_interfaces::msg::MacroStatus msg_;
};

class Init_MacroStatus_enemy_fort_buff_status
{
public:
  explicit Init_MacroStatus_enemy_fort_buff_status(::radar_interfaces::msg::MacroStatus & msg)
  : msg_(msg)
  {}
  Init_MacroStatus_enemy_outpost_buff_status enemy_fort_buff_status(::radar_interfaces::msg::MacroStatus::_enemy_fort_buff_status_type arg)
  {
    msg_.enemy_fort_buff_status = std::move(arg);
    return Init_MacroStatus_enemy_outpost_buff_status(msg_);
  }

private:
  ::radar_interfaces::msg::MacroStatus msg_;
};

class Init_MacroStatus_enemy_trapezoid_highland_occupied
{
public:
  explicit Init_MacroStatus_enemy_trapezoid_highland_occupied(::radar_interfaces::msg::MacroStatus & msg)
  : msg_(msg)
  {}
  Init_MacroStatus_enemy_fort_buff_status enemy_trapezoid_highland_occupied(::radar_interfaces::msg::MacroStatus::_enemy_trapezoid_highland_occupied_type arg)
  {
    msg_.enemy_trapezoid_highland_occupied = std::move(arg);
    return Init_MacroStatus_enemy_fort_buff_status(msg_);
  }

private:
  ::radar_interfaces::msg::MacroStatus msg_;
};

class Init_MacroStatus_enemy_central_highland_status
{
public:
  explicit Init_MacroStatus_enemy_central_highland_status(::radar_interfaces::msg::MacroStatus & msg)
  : msg_(msg)
  {}
  Init_MacroStatus_enemy_trapezoid_highland_occupied enemy_central_highland_status(::radar_interfaces::msg::MacroStatus::_enemy_central_highland_status_type arg)
  {
    msg_.enemy_central_highland_status = std::move(arg);
    return Init_MacroStatus_enemy_trapezoid_highland_occupied(msg_);
  }

private:
  ::radar_interfaces::msg::MacroStatus msg_;
};

class Init_MacroStatus_enemy_supply_area_occupied
{
public:
  explicit Init_MacroStatus_enemy_supply_area_occupied(::radar_interfaces::msg::MacroStatus & msg)
  : msg_(msg)
  {}
  Init_MacroStatus_enemy_central_highland_status enemy_supply_area_occupied(::radar_interfaces::msg::MacroStatus::_enemy_supply_area_occupied_type arg)
  {
    msg_.enemy_supply_area_occupied = std::move(arg);
    return Init_MacroStatus_enemy_central_highland_status(msg_);
  }

private:
  ::radar_interfaces::msg::MacroStatus msg_;
};

class Init_MacroStatus_total_gold
{
public:
  explicit Init_MacroStatus_total_gold(::radar_interfaces::msg::MacroStatus & msg)
  : msg_(msg)
  {}
  Init_MacroStatus_enemy_supply_area_occupied total_gold(::radar_interfaces::msg::MacroStatus::_total_gold_type arg)
  {
    msg_.total_gold = std::move(arg);
    return Init_MacroStatus_enemy_supply_area_occupied(msg_);
  }

private:
  ::radar_interfaces::msg::MacroStatus msg_;
};

class Init_MacroStatus_remaining_gold
{
public:
  Init_MacroStatus_remaining_gold()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MacroStatus_total_gold remaining_gold(::radar_interfaces::msg::MacroStatus::_remaining_gold_type arg)
  {
    msg_.remaining_gold = std::move(arg);
    return Init_MacroStatus_total_gold(msg_);
  }

private:
  ::radar_interfaces::msg::MacroStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::radar_interfaces::msg::MacroStatus>()
{
  return radar_interfaces::msg::builder::Init_MacroStatus_remaining_gold();
}

}  // namespace radar_interfaces

#endif  // RADAR_INTERFACES__MSG__DETAIL__MACRO_STATUS__BUILDER_HPP_
