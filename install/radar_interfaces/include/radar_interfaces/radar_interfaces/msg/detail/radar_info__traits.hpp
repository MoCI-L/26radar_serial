// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_interfaces:msg/RadarInfo.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__RADAR_INFO__TRAITS_HPP_
#define RADAR_INTERFACES__MSG__DETAIL__RADAR_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "radar_interfaces/msg/detail/radar_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace radar_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RadarInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: double_vulnerability_chances
  {
    out << "double_vulnerability_chances: ";
    rosidl_generator_traits::value_to_yaml(msg.double_vulnerability_chances, out);
    out << ", ";
  }

  // member: opponent_double_vulnerability_active
  {
    out << "opponent_double_vulnerability_active: ";
    rosidl_generator_traits::value_to_yaml(msg.opponent_double_vulnerability_active, out);
    out << ", ";
  }

  // member: encryption_level
  {
    out << "encryption_level: ";
    rosidl_generator_traits::value_to_yaml(msg.encryption_level, out);
    out << ", ";
  }

  // member: key_change_enabled
  {
    out << "key_change_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.key_change_enabled, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RadarInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: double_vulnerability_chances
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "double_vulnerability_chances: ";
    rosidl_generator_traits::value_to_yaml(msg.double_vulnerability_chances, out);
    out << "\n";
  }

  // member: opponent_double_vulnerability_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "opponent_double_vulnerability_active: ";
    rosidl_generator_traits::value_to_yaml(msg.opponent_double_vulnerability_active, out);
    out << "\n";
  }

  // member: encryption_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "encryption_level: ";
    rosidl_generator_traits::value_to_yaml(msg.encryption_level, out);
    out << "\n";
  }

  // member: key_change_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_change_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.key_change_enabled, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RadarInfo & msg, bool use_flow_style = false)
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
  const radar_interfaces::msg::RadarInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  radar_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use radar_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const radar_interfaces::msg::RadarInfo & msg)
{
  return radar_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<radar_interfaces::msg::RadarInfo>()
{
  return "radar_interfaces::msg::RadarInfo";
}

template<>
inline const char * name<radar_interfaces::msg::RadarInfo>()
{
  return "radar_interfaces/msg/RadarInfo";
}

template<>
struct has_fixed_size<radar_interfaces::msg::RadarInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<radar_interfaces::msg::RadarInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<radar_interfaces::msg::RadarInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_INTERFACES__MSG__DETAIL__RADAR_INFO__TRAITS_HPP_
