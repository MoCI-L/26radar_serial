// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from radar_interfaces:msg/Buffs.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__BUFFS__TRAITS_HPP_
#define RADAR_INTERFACES__MSG__DETAIL__BUFFS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "radar_interfaces/msg/detail/buffs__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace radar_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Buffs & msg,
  std::ostream & out)
{
  out << "{";
  // member: hero_health_regen
  {
    out << "hero_health_regen: ";
    rosidl_generator_traits::value_to_yaml(msg.hero_health_regen, out);
    out << ", ";
  }

  // member: hero_cooling_boost
  {
    out << "hero_cooling_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.hero_cooling_boost, out);
    out << ", ";
  }

  // member: hero_defense_boost
  {
    out << "hero_defense_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.hero_defense_boost, out);
    out << ", ";
  }

  // member: hero_defense_debuff
  {
    out << "hero_defense_debuff: ";
    rosidl_generator_traits::value_to_yaml(msg.hero_defense_debuff, out);
    out << ", ";
  }

  // member: hero_attack_boost
  {
    out << "hero_attack_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.hero_attack_boost, out);
    out << ", ";
  }

  // member: engineer_health_regen
  {
    out << "engineer_health_regen: ";
    rosidl_generator_traits::value_to_yaml(msg.engineer_health_regen, out);
    out << ", ";
  }

  // member: engineer_cooling_boost
  {
    out << "engineer_cooling_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.engineer_cooling_boost, out);
    out << ", ";
  }

  // member: engineer_defense_boost
  {
    out << "engineer_defense_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.engineer_defense_boost, out);
    out << ", ";
  }

  // member: engineer_defense_debuff
  {
    out << "engineer_defense_debuff: ";
    rosidl_generator_traits::value_to_yaml(msg.engineer_defense_debuff, out);
    out << ", ";
  }

  // member: engineer_attack_boost
  {
    out << "engineer_attack_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.engineer_attack_boost, out);
    out << ", ";
  }

  // member: infantry_3_health_regen
  {
    out << "infantry_3_health_regen: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_3_health_regen, out);
    out << ", ";
  }

  // member: infantry_3_cooling_boost
  {
    out << "infantry_3_cooling_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_3_cooling_boost, out);
    out << ", ";
  }

  // member: infantry_3_defense_boost
  {
    out << "infantry_3_defense_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_3_defense_boost, out);
    out << ", ";
  }

  // member: infantry_3_defense_debuff
  {
    out << "infantry_3_defense_debuff: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_3_defense_debuff, out);
    out << ", ";
  }

  // member: infantry_3_attack_boost
  {
    out << "infantry_3_attack_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_3_attack_boost, out);
    out << ", ";
  }

  // member: infantry_4_health_regen
  {
    out << "infantry_4_health_regen: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_4_health_regen, out);
    out << ", ";
  }

  // member: infantry_4_cooling_boost
  {
    out << "infantry_4_cooling_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_4_cooling_boost, out);
    out << ", ";
  }

  // member: infantry_4_defense_boost
  {
    out << "infantry_4_defense_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_4_defense_boost, out);
    out << ", ";
  }

  // member: infantry_4_defense_debuff
  {
    out << "infantry_4_defense_debuff: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_4_defense_debuff, out);
    out << ", ";
  }

  // member: infantry_4_attack_boost
  {
    out << "infantry_4_attack_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_4_attack_boost, out);
    out << ", ";
  }

  // member: sentry_health_regen
  {
    out << "sentry_health_regen: ";
    rosidl_generator_traits::value_to_yaml(msg.sentry_health_regen, out);
    out << ", ";
  }

  // member: sentry_cooling_boost
  {
    out << "sentry_cooling_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.sentry_cooling_boost, out);
    out << ", ";
  }

  // member: sentry_defense_boost
  {
    out << "sentry_defense_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.sentry_defense_boost, out);
    out << ", ";
  }

  // member: sentry_defense_debuff
  {
    out << "sentry_defense_debuff: ";
    rosidl_generator_traits::value_to_yaml(msg.sentry_defense_debuff, out);
    out << ", ";
  }

  // member: sentry_attack_boost
  {
    out << "sentry_attack_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.sentry_attack_boost, out);
    out << ", ";
  }

  // member: sentry_posture
  {
    out << "sentry_posture: ";
    rosidl_generator_traits::value_to_yaml(msg.sentry_posture, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Buffs & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: hero_health_regen
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hero_health_regen: ";
    rosidl_generator_traits::value_to_yaml(msg.hero_health_regen, out);
    out << "\n";
  }

  // member: hero_cooling_boost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hero_cooling_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.hero_cooling_boost, out);
    out << "\n";
  }

  // member: hero_defense_boost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hero_defense_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.hero_defense_boost, out);
    out << "\n";
  }

  // member: hero_defense_debuff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hero_defense_debuff: ";
    rosidl_generator_traits::value_to_yaml(msg.hero_defense_debuff, out);
    out << "\n";
  }

  // member: hero_attack_boost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hero_attack_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.hero_attack_boost, out);
    out << "\n";
  }

  // member: engineer_health_regen
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engineer_health_regen: ";
    rosidl_generator_traits::value_to_yaml(msg.engineer_health_regen, out);
    out << "\n";
  }

  // member: engineer_cooling_boost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engineer_cooling_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.engineer_cooling_boost, out);
    out << "\n";
  }

  // member: engineer_defense_boost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engineer_defense_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.engineer_defense_boost, out);
    out << "\n";
  }

  // member: engineer_defense_debuff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engineer_defense_debuff: ";
    rosidl_generator_traits::value_to_yaml(msg.engineer_defense_debuff, out);
    out << "\n";
  }

  // member: engineer_attack_boost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engineer_attack_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.engineer_attack_boost, out);
    out << "\n";
  }

  // member: infantry_3_health_regen
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "infantry_3_health_regen: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_3_health_regen, out);
    out << "\n";
  }

  // member: infantry_3_cooling_boost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "infantry_3_cooling_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_3_cooling_boost, out);
    out << "\n";
  }

  // member: infantry_3_defense_boost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "infantry_3_defense_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_3_defense_boost, out);
    out << "\n";
  }

  // member: infantry_3_defense_debuff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "infantry_3_defense_debuff: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_3_defense_debuff, out);
    out << "\n";
  }

  // member: infantry_3_attack_boost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "infantry_3_attack_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_3_attack_boost, out);
    out << "\n";
  }

  // member: infantry_4_health_regen
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "infantry_4_health_regen: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_4_health_regen, out);
    out << "\n";
  }

  // member: infantry_4_cooling_boost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "infantry_4_cooling_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_4_cooling_boost, out);
    out << "\n";
  }

  // member: infantry_4_defense_boost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "infantry_4_defense_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_4_defense_boost, out);
    out << "\n";
  }

  // member: infantry_4_defense_debuff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "infantry_4_defense_debuff: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_4_defense_debuff, out);
    out << "\n";
  }

  // member: infantry_4_attack_boost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "infantry_4_attack_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.infantry_4_attack_boost, out);
    out << "\n";
  }

  // member: sentry_health_regen
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sentry_health_regen: ";
    rosidl_generator_traits::value_to_yaml(msg.sentry_health_regen, out);
    out << "\n";
  }

  // member: sentry_cooling_boost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sentry_cooling_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.sentry_cooling_boost, out);
    out << "\n";
  }

  // member: sentry_defense_boost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sentry_defense_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.sentry_defense_boost, out);
    out << "\n";
  }

  // member: sentry_defense_debuff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sentry_defense_debuff: ";
    rosidl_generator_traits::value_to_yaml(msg.sentry_defense_debuff, out);
    out << "\n";
  }

  // member: sentry_attack_boost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sentry_attack_boost: ";
    rosidl_generator_traits::value_to_yaml(msg.sentry_attack_boost, out);
    out << "\n";
  }

  // member: sentry_posture
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sentry_posture: ";
    rosidl_generator_traits::value_to_yaml(msg.sentry_posture, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Buffs & msg, bool use_flow_style = false)
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
  const radar_interfaces::msg::Buffs & msg,
  std::ostream & out, size_t indentation = 0)
{
  radar_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use radar_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const radar_interfaces::msg::Buffs & msg)
{
  return radar_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<radar_interfaces::msg::Buffs>()
{
  return "radar_interfaces::msg::Buffs";
}

template<>
inline const char * name<radar_interfaces::msg::Buffs>()
{
  return "radar_interfaces/msg/Buffs";
}

template<>
struct has_fixed_size<radar_interfaces::msg::Buffs>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<radar_interfaces::msg::Buffs>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<radar_interfaces::msg::Buffs>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RADAR_INTERFACES__MSG__DETAIL__BUFFS__TRAITS_HPP_
