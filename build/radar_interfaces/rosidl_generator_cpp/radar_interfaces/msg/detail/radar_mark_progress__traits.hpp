// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_interfaces:msg/RadarMarkProgress.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__RADAR_MARK_PROGRESS__TRAITS_HPP_
#define RADAR_INTERFACES__MSG__DETAIL__RADAR_MARK_PROGRESS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "radar_interfaces/msg/detail/radar_mark_progress__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace radar_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RadarMarkProgress & msg,
  std::ostream & out)
{
  out << "{";
  // member: enemy_hero_marked
  {
    out << "enemy_hero_marked: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_hero_marked, out);
    out << ", ";
  }

  // member: enemy_engineer_marked
  {
    out << "enemy_engineer_marked: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_engineer_marked, out);
    out << ", ";
  }

  // member: enemy_infantry_3_marked
  {
    out << "enemy_infantry_3_marked: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_infantry_3_marked, out);
    out << ", ";
  }

  // member: enemy_infantry_4_marked
  {
    out << "enemy_infantry_4_marked: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_infantry_4_marked, out);
    out << ", ";
  }

  // member: enemy_aerial_marked
  {
    out << "enemy_aerial_marked: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_aerial_marked, out);
    out << ", ";
  }

  // member: enemy_sentry_marked
  {
    out << "enemy_sentry_marked: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_sentry_marked, out);
    out << ", ";
  }

  // member: ally_hero_marked
  {
    out << "ally_hero_marked: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_hero_marked, out);
    out << ", ";
  }

  // member: ally_engineer_marked
  {
    out << "ally_engineer_marked: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_engineer_marked, out);
    out << ", ";
  }

  // member: ally_infantry_3_marked
  {
    out << "ally_infantry_3_marked: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_infantry_3_marked, out);
    out << ", ";
  }

  // member: ally_infantry_4_marked
  {
    out << "ally_infantry_4_marked: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_infantry_4_marked, out);
    out << ", ";
  }

  // member: ally_aerial_marked
  {
    out << "ally_aerial_marked: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_aerial_marked, out);
    out << ", ";
  }

  // member: ally_sentry_marked
  {
    out << "ally_sentry_marked: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_sentry_marked, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RadarMarkProgress & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: enemy_hero_marked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enemy_hero_marked: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_hero_marked, out);
    out << "\n";
  }

  // member: enemy_engineer_marked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enemy_engineer_marked: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_engineer_marked, out);
    out << "\n";
  }

  // member: enemy_infantry_3_marked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enemy_infantry_3_marked: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_infantry_3_marked, out);
    out << "\n";
  }

  // member: enemy_infantry_4_marked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enemy_infantry_4_marked: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_infantry_4_marked, out);
    out << "\n";
  }

  // member: enemy_aerial_marked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enemy_aerial_marked: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_aerial_marked, out);
    out << "\n";
  }

  // member: enemy_sentry_marked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enemy_sentry_marked: ";
    rosidl_generator_traits::value_to_yaml(msg.enemy_sentry_marked, out);
    out << "\n";
  }

  // member: ally_hero_marked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ally_hero_marked: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_hero_marked, out);
    out << "\n";
  }

  // member: ally_engineer_marked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ally_engineer_marked: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_engineer_marked, out);
    out << "\n";
  }

  // member: ally_infantry_3_marked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ally_infantry_3_marked: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_infantry_3_marked, out);
    out << "\n";
  }

  // member: ally_infantry_4_marked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ally_infantry_4_marked: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_infantry_4_marked, out);
    out << "\n";
  }

  // member: ally_aerial_marked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ally_aerial_marked: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_aerial_marked, out);
    out << "\n";
  }

  // member: ally_sentry_marked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ally_sentry_marked: ";
    rosidl_generator_traits::value_to_yaml(msg.ally_sentry_marked, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RadarMarkProgress & msg, bool use_flow_style = false)
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
  const radar_interfaces::msg::RadarMarkProgress & msg,
  std::ostream & out, size_t indentation = 0)
{
  radar_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use radar_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const radar_interfaces::msg::RadarMarkProgress & msg)
{
  return radar_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<radar_interfaces::msg::RadarMarkProgress>()
{
  return "radar_interfaces::msg::RadarMarkProgress";
}

template<>
inline const char * name<radar_interfaces::msg::RadarMarkProgress>()
{
  return "radar_interfaces/msg/RadarMarkProgress";
}

template<>
struct has_fixed_size<radar_interfaces::msg::RadarMarkProgress>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<radar_interfaces::msg::RadarMarkProgress>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<radar_interfaces::msg::RadarMarkProgress>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_INTERFACES__MSG__DETAIL__RADAR_MARK_PROGRESS__TRAITS_HPP_
