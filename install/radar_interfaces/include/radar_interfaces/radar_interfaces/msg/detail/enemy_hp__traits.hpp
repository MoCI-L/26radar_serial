// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_interfaces:msg/EnemyHP.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__ENEMY_HP__TRAITS_HPP_
#define RADAR_INTERFACES__MSG__DETAIL__ENEMY_HP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "radar_interfaces/msg/detail/enemy_hp__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace radar_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const EnemyHP & msg,
  std::ostream & out)
{
  out << "{";
  // member: hero_hp
  {
    out << "hero_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.hero_hp, out);
    out << ", ";
  }

  // member: engineer_hp
  {
    out << "engineer_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.engineer_hp, out);
    out << ", ";
  }

  // member: infantry_3_hp
  {
    out << "infantry_3_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_3_hp, out);
    out << ", ";
  }

  // member: infantry_4_hp
  {
    out << "infantry_4_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_4_hp, out);
    out << ", ";
  }

  // member: reserved
  {
    out << "reserved: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved, out);
    out << ", ";
  }

  // member: sentry_hp
  {
    out << "sentry_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.sentry_hp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EnemyHP & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: hero_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hero_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.hero_hp, out);
    out << "\n";
  }

  // member: engineer_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engineer_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.engineer_hp, out);
    out << "\n";
  }

  // member: infantry_3_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "infantry_3_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_3_hp, out);
    out << "\n";
  }

  // member: infantry_4_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "infantry_4_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_4_hp, out);
    out << "\n";
  }

  // member: reserved
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserved: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved, out);
    out << "\n";
  }

  // member: sentry_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sentry_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.sentry_hp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EnemyHP & msg, bool use_flow_style = false)
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
  const radar_interfaces::msg::EnemyHP & msg,
  std::ostream & out, size_t indentation = 0)
{
  radar_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use radar_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const radar_interfaces::msg::EnemyHP & msg)
{
  return radar_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<radar_interfaces::msg::EnemyHP>()
{
  return "radar_interfaces::msg::EnemyHP";
}

template<>
inline const char * name<radar_interfaces::msg::EnemyHP>()
{
  return "radar_interfaces/msg/EnemyHP";
}

template<>
struct has_fixed_size<radar_interfaces::msg::EnemyHP>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<radar_interfaces::msg::EnemyHP>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<radar_interfaces::msg::EnemyHP>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_INTERFACES__MSG__DETAIL__ENEMY_HP__TRAITS_HPP_
