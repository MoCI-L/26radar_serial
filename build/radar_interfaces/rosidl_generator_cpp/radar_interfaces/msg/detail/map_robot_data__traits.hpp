// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_interfaces:msg/MapRobotData.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__MAP_ROBOT_DATA__TRAITS_HPP_
#define RADAR_INTERFACES__MSG__DETAIL__MAP_ROBOT_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "radar_interfaces/msg/detail/map_robot_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace radar_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MapRobotData & msg,
  std::ostream & out)
{
  out << "{";
  // member: opponent_hero_x
  {
    out << "opponent_hero_x: ";
    rosidl_generator_traits::value_to_yaml(msg.opponent_hero_x, out);
    out << ", ";
  }

  // member: opponent_hero_y
  {
    out << "opponent_hero_y: ";
    rosidl_generator_traits::value_to_yaml(msg.opponent_hero_y, out);
    out << ", ";
  }

  // member: opponent_engineer_x
  {
    out << "opponent_engineer_x: ";
    rosidl_generator_traits::value_to_yaml(msg.opponent_engineer_x, out);
    out << ", ";
  }

  // member: opponent_engineer_y
  {
    out << "opponent_engineer_y: ";
    rosidl_generator_traits::value_to_yaml(msg.opponent_engineer_y, out);
    out << ", ";
  }

  // member: opponent_infantry_3_x
  {
    out << "opponent_infantry_3_x: ";
    rosidl_generator_traits::value_to_yaml(msg.opponent_infantry_3_x, out);
    out << ", ";
  }

  // member: opponent_infantry_3_y
  {
    out << "opponent_infantry_3_y: ";
    rosidl_generator_traits::value_to_yaml(msg.opponent_infantry_3_y, out);
    out << ", ";
  }

  // member: opponent_infantry_4_x
  {
    out << "opponent_infantry_4_x: ";
    rosidl_generator_traits::value_to_yaml(msg.opponent_infantry_4_x, out);
    out << ", ";
  }

  // member: opponent_infantry_4_y
  {
    out << "opponent_infantry_4_y: ";
    rosidl_generator_traits::value_to_yaml(msg.opponent_infantry_4_y, out);
    out << ", ";
  }

  // member: opponent_aerial_x
  {
    out << "opponent_aerial_x: ";
    rosidl_generator_traits::value_to_yaml(msg.opponent_aerial_x, out);
    out << ", ";
  }

  // member: opponent_aerial_y
  {
    out << "opponent_aerial_y: ";
    rosidl_generator_traits::value_to_yaml(msg.opponent_aerial_y, out);
    out << ", ";
  }

  // member: opponent_sentry_x
  {
    out << "opponent_sentry_x: ";
    rosidl_generator_traits::value_to_yaml(msg.opponent_sentry_x, out);
    out << ", ";
  }

  // member: opponent_sentry_y
  {
    out << "opponent_sentry_y: ";
    rosidl_generator_traits::value_to_yaml(msg.opponent_sentry_y, out);
    out << ", ";
  }

  // member: ally_hero_x
  {
    out << "ally_hero_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_hero_x, out);
    out << ", ";
  }

  // member: ally_hero_y
  {
    out << "ally_hero_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_hero_y, out);
    out << ", ";
  }

  // member: ally_engineer_x
  {
    out << "ally_engineer_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_engineer_x, out);
    out << ", ";
  }

  // member: ally_engineer_y
  {
    out << "ally_engineer_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_engineer_y, out);
    out << ", ";
  }

  // member: ally_infantry_3_x
  {
    out << "ally_infantry_3_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_infantry_3_x, out);
    out << ", ";
  }

  // member: ally_infantry_3_y
  {
    out << "ally_infantry_3_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_infantry_3_y, out);
    out << ", ";
  }

  // member: ally_infantry_4_x
  {
    out << "ally_infantry_4_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_infantry_4_x, out);
    out << ", ";
  }

  // member: ally_infantry_4_y
  {
    out << "ally_infantry_4_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_infantry_4_y, out);
    out << ", ";
  }

  // member: ally_aerial_x
  {
    out << "ally_aerial_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_aerial_x, out);
    out << ", ";
  }

  // member: ally_aerial_y
  {
    out << "ally_aerial_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_aerial_y, out);
    out << ", ";
  }

  // member: ally_sentry_x
  {
    out << "ally_sentry_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_sentry_x, out);
    out << ", ";
  }

  // member: ally_sentry_y
  {
    out << "ally_sentry_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_sentry_y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapRobotData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: opponent_hero_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "opponent_hero_x: ";
    rosidl_generator_traits::value_to_yaml(msg.opponent_hero_x, out);
    out << "\n";
  }

  // member: opponent_hero_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "opponent_hero_y: ";
    rosidl_generator_traits::value_to_yaml(msg.opponent_hero_y, out);
    out << "\n";
  }

  // member: opponent_engineer_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "opponent_engineer_x: ";
    rosidl_generator_traits::value_to_yaml(msg.opponent_engineer_x, out);
    out << "\n";
  }

  // member: opponent_engineer_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "opponent_engineer_y: ";
    rosidl_generator_traits::value_to_yaml(msg.opponent_engineer_y, out);
    out << "\n";
  }

  // member: opponent_infantry_3_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "opponent_infantry_3_x: ";
    rosidl_generator_traits::value_to_yaml(msg.opponent_infantry_3_x, out);
    out << "\n";
  }

  // member: opponent_infantry_3_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "opponent_infantry_3_y: ";
    rosidl_generator_traits::value_to_yaml(msg.opponent_infantry_3_y, out);
    out << "\n";
  }

  // member: opponent_infantry_4_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "opponent_infantry_4_x: ";
    rosidl_generator_traits::value_to_yaml(msg.opponent_infantry_4_x, out);
    out << "\n";
  }

  // member: opponent_infantry_4_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "opponent_infantry_4_y: ";
    rosidl_generator_traits::value_to_yaml(msg.opponent_infantry_4_y, out);
    out << "\n";
  }

  // member: opponent_aerial_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "opponent_aerial_x: ";
    rosidl_generator_traits::value_to_yaml(msg.opponent_aerial_x, out);
    out << "\n";
  }

  // member: opponent_aerial_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "opponent_aerial_y: ";
    rosidl_generator_traits::value_to_yaml(msg.opponent_aerial_y, out);
    out << "\n";
  }

  // member: opponent_sentry_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "opponent_sentry_x: ";
    rosidl_generator_traits::value_to_yaml(msg.opponent_sentry_x, out);
    out << "\n";
  }

  // member: opponent_sentry_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "opponent_sentry_y: ";
    rosidl_generator_traits::value_to_yaml(msg.opponent_sentry_y, out);
    out << "\n";
  }

  // member: ally_hero_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ally_hero_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_hero_x, out);
    out << "\n";
  }

  // member: ally_hero_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ally_hero_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_hero_y, out);
    out << "\n";
  }

  // member: ally_engineer_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ally_engineer_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_engineer_x, out);
    out << "\n";
  }

  // member: ally_engineer_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ally_engineer_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_engineer_y, out);
    out << "\n";
  }

  // member: ally_infantry_3_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ally_infantry_3_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_infantry_3_x, out);
    out << "\n";
  }

  // member: ally_infantry_3_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ally_infantry_3_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_infantry_3_y, out);
    out << "\n";
  }

  // member: ally_infantry_4_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ally_infantry_4_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_infantry_4_x, out);
    out << "\n";
  }

  // member: ally_infantry_4_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ally_infantry_4_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_infantry_4_y, out);
    out << "\n";
  }

  // member: ally_aerial_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ally_aerial_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_aerial_x, out);
    out << "\n";
  }

  // member: ally_aerial_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ally_aerial_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_aerial_y, out);
    out << "\n";
  }

  // member: ally_sentry_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ally_sentry_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_sentry_x, out);
    out << "\n";
  }

  // member: ally_sentry_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ally_sentry_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_sentry_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapRobotData & msg, bool use_flow_style = false)
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
  const radar_interfaces::msg::MapRobotData & msg,
  std::ostream & out, size_t indentation = 0)
{
  radar_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use radar_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const radar_interfaces::msg::MapRobotData & msg)
{
  return radar_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<radar_interfaces::msg::MapRobotData>()
{
  return "radar_interfaces::msg::MapRobotData";
}

template<>
inline const char * name<radar_interfaces::msg::MapRobotData>()
{
  return "radar_interfaces/msg/MapRobotData";
}

template<>
struct has_fixed_size<radar_interfaces::msg::MapRobotData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<radar_interfaces::msg::MapRobotData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<radar_interfaces::msg::MapRobotData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_INTERFACES__MSG__DETAIL__MAP_ROBOT_DATA__TRAITS_HPP_
