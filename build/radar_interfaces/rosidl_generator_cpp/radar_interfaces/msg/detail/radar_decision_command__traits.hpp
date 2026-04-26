// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_interfaces:msg/RadarDecisionCommand.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__RADAR_DECISION_COMMAND__TRAITS_HPP_
#define RADAR_INTERFACES__MSG__DETAIL__RADAR_DECISION_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "radar_interfaces/msg/detail/radar_decision_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace radar_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RadarDecisionCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: sender_id
  {
    out << "sender_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sender_id, out);
    out << ", ";
  }

  // member: receiver_id
  {
    out << "receiver_id: ";
    rosidl_generator_traits::value_to_yaml(msg.receiver_id, out);
    out << ", ";
  }

  // member: double_vulnerability_request
  {
    out << "double_vulnerability_request: ";
    rosidl_generator_traits::value_to_yaml(msg.double_vulnerability_request, out);
    out << ", ";
  }

  // member: password_command_type
  {
    out << "password_command_type: ";
    rosidl_generator_traits::value_to_yaml(msg.password_command_type, out);
    out << ", ";
  }

  // member: password
  {
    out << "password: ";
    rosidl_generator_traits::value_to_yaml(msg.password, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RadarDecisionCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sender_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sender_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sender_id, out);
    out << "\n";
  }

  // member: receiver_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "receiver_id: ";
    rosidl_generator_traits::value_to_yaml(msg.receiver_id, out);
    out << "\n";
  }

  // member: double_vulnerability_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "double_vulnerability_request: ";
    rosidl_generator_traits::value_to_yaml(msg.double_vulnerability_request, out);
    out << "\n";
  }

  // member: password_command_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "password_command_type: ";
    rosidl_generator_traits::value_to_yaml(msg.password_command_type, out);
    out << "\n";
  }

  // member: password
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "password: ";
    rosidl_generator_traits::value_to_yaml(msg.password, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RadarDecisionCommand & msg, bool use_flow_style = false)
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
  const radar_interfaces::msg::RadarDecisionCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  radar_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use radar_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const radar_interfaces::msg::RadarDecisionCommand & msg)
{
  return radar_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<radar_interfaces::msg::RadarDecisionCommand>()
{
  return "radar_interfaces::msg::RadarDecisionCommand";
}

template<>
inline const char * name<radar_interfaces::msg::RadarDecisionCommand>()
{
  return "radar_interfaces/msg/RadarDecisionCommand";
}

template<>
struct has_fixed_size<radar_interfaces::msg::RadarDecisionCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<radar_interfaces::msg::RadarDecisionCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<radar_interfaces::msg::RadarDecisionCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_INTERFACES__MSG__DETAIL__RADAR_DECISION_COMMAND__TRAITS_HPP_
