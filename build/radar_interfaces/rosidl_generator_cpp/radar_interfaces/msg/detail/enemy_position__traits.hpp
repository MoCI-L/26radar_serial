// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_interfaces:msg/EnemyPosition.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__ENEMY_POSITION__TRAITS_HPP_
#define RADAR_INTERFACES__MSG__DETAIL__ENEMY_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "radar_interfaces/msg/detail/enemy_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace radar_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const EnemyPosition & msg,
  std::ostream & out)
{
  out << "{";
  // member: hero_x
  {
    out << "hero_x: ";
    rosidl_generator_traits::value_to_yaml(msg.hero_x, out);
    out << ", ";
  }

  // member: hero_y
  {
    out << "hero_y: ";
    rosidl_generator_traits::value_to_yaml(msg.hero_y, out);
    out << ", ";
  }

  // member: engineer_x
  {
    out << "engineer_x: ";
    rosidl_generator_traits::value_to_yaml(msg.engineer_x, out);
    out << ", ";
  }

  // member: engineer_y
  {
    out << "engineer_y: ";
    rosidl_generator_traits::value_to_yaml(msg.engineer_y, out);
    out << ", ";
  }

  // member: infantry_3_x
  {
    out << "infantry_3_x: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_3_x, out);
    out << ", ";
  }

  // member: infantry_3_y
  {
    out << "infantry_3_y: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_3_y, out);
    out << ", ";
  }

  // member: infantry_4_x
  {
    out << "infantry_4_x: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_4_x, out);
    out << ", ";
  }

  // member: infantry_4_y
  {
    out << "infantry_4_y: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_4_y, out);
    out << ", ";
  }

  // member: aerial_x
  {
    out << "aerial_x: ";
    rosidl_generator_traits::value_to_yaml(msg.aerial_x, out);
    out << ", ";
  }

  // member: aerial_y
  {
    out << "aerial_y: ";
    rosidl_generator_traits::value_to_yaml(msg.aerial_y, out);
    out << ", ";
  }

  // member: sentry_x
  {
    out << "sentry_x: ";
    rosidl_generator_traits::value_to_yaml(msg.sentry_x, out);
    out << ", ";
  }

  // member: sentry_y
  {
    out << "sentry_y: ";
    rosidl_generator_traits::value_to_yaml(msg.sentry_y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EnemyPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: hero_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hero_x: ";
    rosidl_generator_traits::value_to_yaml(msg.hero_x, out);
    out << "\n";
  }

  // member: hero_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hero_y: ";
    rosidl_generator_traits::value_to_yaml(msg.hero_y, out);
    out << "\n";
  }

  // member: engineer_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engineer_x: ";
    rosidl_generator_traits::value_to_yaml(msg.engineer_x, out);
    out << "\n";
  }

  // member: engineer_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engineer_y: ";
    rosidl_generator_traits::value_to_yaml(msg.engineer_y, out);
    out << "\n";
  }

  // member: infantry_3_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "infantry_3_x: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_3_x, out);
    out << "\n";
  }

  // member: infantry_3_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "infantry_3_y: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_3_y, out);
    out << "\n";
  }

  // member: infantry_4_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "infantry_4_x: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_4_x, out);
    out << "\n";
  }

  // member: infantry_4_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "infantry_4_y: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_4_y, out);
    out << "\n";
  }

  // member: aerial_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aerial_x: ";
    rosidl_generator_traits::value_to_yaml(msg.aerial_x, out);
    out << "\n";
  }

  // member: aerial_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aerial_y: ";
    rosidl_generator_traits::value_to_yaml(msg.aerial_y, out);
    out << "\n";
  }

  // member: sentry_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sentry_x: ";
    rosidl_generator_traits::value_to_yaml(msg.sentry_x, out);
    out << "\n";
  }

  // member: sentry_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sentry_y: ";
    rosidl_generator_traits::value_to_yaml(msg.sentry_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EnemyPosition & msg, bool use_flow_style = false)
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
  const radar_interfaces::msg::EnemyPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  radar_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use radar_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const radar_interfaces::msg::EnemyPosition & msg)
{
  return radar_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<radar_interfaces::msg::EnemyPosition>()
{
  return "radar_interfaces::msg::EnemyPosition";
}

template<>
inline const char * name<radar_interfaces::msg::EnemyPosition>()
{
  return "radar_interfaces/msg/EnemyPosition";
}

template<>
struct has_fixed_size<radar_interfaces::msg::EnemyPosition>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<radar_interfaces::msg::EnemyPosition>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<radar_interfaces::msg::EnemyPosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_INTERFACES__MSG__DETAIL__ENEMY_POSITION__TRAITS_HPP_
