// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_interfaces:msg/MacroStatus.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__MACRO_STATUS__TRAITS_HPP_
#define RADAR_INTERFACES__MSG__DETAIL__MACRO_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "radar_interfaces/msg/detail/macro_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace radar_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MacroStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: remaining_gold
  {
    out << "remaining_gold: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_gold, out);
    out << ", ";
  }

  // member: total_gold
  {
    out << "total_gold: ";
    rosidl_generator_traits::value_to_yaml(msg.total_gold, out);
    out << ", ";
  }

  // member: enemy_supply_area_occupied
  {
    out << "enemy_supply_area_occupied: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_supply_area_occupied, out);
    out << ", ";
  }

  // member: enemy_central_highland_status
  {
    out << "enemy_central_highland_status: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_central_highland_status, out);
    out << ", ";
  }

  // member: enemy_trapezoid_highland_occupied
  {
    out << "enemy_trapezoid_highland_occupied: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_trapezoid_highland_occupied, out);
    out << ", ";
  }

  // member: enemy_fort_buff_status
  {
    out << "enemy_fort_buff_status: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_fort_buff_status, out);
    out << ", ";
  }

  // member: enemy_outpost_buff_status
  {
    out << "enemy_outpost_buff_status: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_outpost_buff_status, out);
    out << ", ";
  }

  // member: enemy_base_buff_occupied
  {
    out << "enemy_base_buff_occupied: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_base_buff_occupied, out);
    out << ", ";
  }

  // member: enemy_tunnel_pre_jump_occupied
  {
    out << "enemy_tunnel_pre_jump_occupied: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_tunnel_pre_jump_occupied, out);
    out << ", ";
  }

  // member: enemy_tunnel_post_jump_occupied
  {
    out << "enemy_tunnel_post_jump_occupied: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_tunnel_post_jump_occupied, out);
    out << ", ";
  }

  // member: ally_side_tunnel_pre_jump_occupied
  {
    out << "ally_side_tunnel_pre_jump_occupied: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_side_tunnel_pre_jump_occupied, out);
    out << ", ";
  }

  // member: ally_side_tunnel_post_jump_occupied
  {
    out << "ally_side_tunnel_post_jump_occupied: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_side_tunnel_post_jump_occupied, out);
    out << ", ";
  }

  // member: enemy_highland_upper_occupied
  {
    out << "enemy_highland_upper_occupied: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_highland_upper_occupied, out);
    out << ", ";
  }

  // member: enemy_jump_upper_occupied
  {
    out << "enemy_jump_upper_occupied: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_jump_upper_occupied, out);
    out << ", ";
  }

  // member: enemy_road_upper_occupied
  {
    out << "enemy_road_upper_occupied: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_road_upper_occupied, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MacroStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: remaining_gold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining_gold: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_gold, out);
    out << "\n";
  }

  // member: total_gold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_gold: ";
    rosidl_generator_traits::value_to_yaml(msg.total_gold, out);
    out << "\n";
  }

  // member: enemy_supply_area_occupied
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enemy_supply_area_occupied: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_supply_area_occupied, out);
    out << "\n";
  }

  // member: enemy_central_highland_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enemy_central_highland_status: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_central_highland_status, out);
    out << "\n";
  }

  // member: enemy_trapezoid_highland_occupied
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enemy_trapezoid_highland_occupied: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_trapezoid_highland_occupied, out);
    out << "\n";
  }

  // member: enemy_fort_buff_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enemy_fort_buff_status: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_fort_buff_status, out);
    out << "\n";
  }

  // member: enemy_outpost_buff_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enemy_outpost_buff_status: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_outpost_buff_status, out);
    out << "\n";
  }

  // member: enemy_base_buff_occupied
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enemy_base_buff_occupied: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_base_buff_occupied, out);
    out << "\n";
  }

  // member: enemy_tunnel_pre_jump_occupied
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enemy_tunnel_pre_jump_occupied: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_tunnel_pre_jump_occupied, out);
    out << "\n";
  }

  // member: enemy_tunnel_post_jump_occupied
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enemy_tunnel_post_jump_occupied: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_tunnel_post_jump_occupied, out);
    out << "\n";
  }

  // member: ally_side_tunnel_pre_jump_occupied
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ally_side_tunnel_pre_jump_occupied: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_side_tunnel_pre_jump_occupied, out);
    out << "\n";
  }

  // member: ally_side_tunnel_post_jump_occupied
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ally_side_tunnel_post_jump_occupied: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_side_tunnel_post_jump_occupied, out);
    out << "\n";
  }

  // member: enemy_highland_upper_occupied
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enemy_highland_upper_occupied: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_highland_upper_occupied, out);
    out << "\n";
  }

  // member: enemy_jump_upper_occupied
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enemy_jump_upper_occupied: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_jump_upper_occupied, out);
    out << "\n";
  }

  // member: enemy_road_upper_occupied
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enemy_road_upper_occupied: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_road_upper_occupied, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MacroStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace radar_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use radar_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const radar_interfaces::msg::MacroStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  radar_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use radar_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const radar_interfaces::msg::MacroStatus & msg)
{
  return radar_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<radar_interfaces::msg::MacroStatus>()
{
  return "radar_interfaces::msg::MacroStatus";
}

template<>
inline const char * name<radar_interfaces::msg::MacroStatus>()
{
  return "radar_interfaces/msg/MacroStatus";
}

template<>
struct has_fixed_size<radar_interfaces::msg::MacroStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<radar_interfaces::msg::MacroStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<radar_interfaces::msg::MacroStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_INTERFACES__MSG__DETAIL__MACRO_STATUS__TRAITS_HPP_
