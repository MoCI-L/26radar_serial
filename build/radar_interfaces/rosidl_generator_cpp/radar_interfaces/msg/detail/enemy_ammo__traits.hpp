// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_interfaces:msg/EnemyAmmo.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__ENEMY_AMMO__TRAITS_HPP_
#define RADAR_INTERFACES__MSG__DETAIL__ENEMY_AMMO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "radar_interfaces/msg/detail/enemy_ammo__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace radar_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const EnemyAmmo & msg,
  std::ostream & out)
{
  out << "{";
  // member: hero_ammo
  {
    out << "hero_ammo: ";
    rosidl_generator_traits::value_to_yaml(msg.hero_ammo, out);
    out << ", ";
  }

  // member: infantry_3_ammo
  {
    out << "infantry_3_ammo: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_3_ammo, out);
    out << ", ";
  }

  // member: infantry_4_ammo
  {
    out << "infantry_4_ammo: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_4_ammo, out);
    out << ", ";
  }

  // member: aerial_ammo
  {
    out << "aerial_ammo: ";
    rosidl_generator_traits::value_to_yaml(msg.aerial_ammo, out);
    out << ", ";
  }

  // member: sentry_ammo
  {
    out << "sentry_ammo: ";
    rosidl_generator_traits::value_to_yaml(msg.sentry_ammo, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EnemyAmmo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: hero_ammo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hero_ammo: ";
    rosidl_generator_traits::value_to_yaml(msg.hero_ammo, out);
    out << "\n";
  }

  // member: infantry_3_ammo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "infantry_3_ammo: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_3_ammo, out);
    out << "\n";
  }

  // member: infantry_4_ammo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "infantry_4_ammo: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_4_ammo, out);
    out << "\n";
  }

  // member: aerial_ammo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aerial_ammo: ";
    rosidl_generator_traits::value_to_yaml(msg.aerial_ammo, out);
    out << "\n";
  }

  // member: sentry_ammo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sentry_ammo: ";
    rosidl_generator_traits::value_to_yaml(msg.sentry_ammo, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EnemyAmmo & msg, bool use_flow_style = false)
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
  const radar_interfaces::msg::EnemyAmmo & msg,
  std::ostream & out, size_t indentation = 0)
{
  radar_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use radar_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const radar_interfaces::msg::EnemyAmmo & msg)
{
  return radar_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<radar_interfaces::msg::EnemyAmmo>()
{
  return "radar_interfaces::msg::EnemyAmmo";
}

template<>
inline const char * name<radar_interfaces::msg::EnemyAmmo>()
{
  return "radar_interfaces/msg/EnemyAmmo";
}

template<>
struct has_fixed_size<radar_interfaces::msg::EnemyAmmo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<radar_interfaces::msg::EnemyAmmo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<radar_interfaces::msg::EnemyAmmo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_INTERFACES__MSG__DETAIL__ENEMY_AMMO__TRAITS_HPP_
