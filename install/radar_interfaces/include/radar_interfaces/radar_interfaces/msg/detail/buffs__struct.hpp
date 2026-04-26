// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from radar_interfaces:msg/Buffs.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__BUFFS__STRUCT_HPP_
#define RADAR_INTERFACES__MSG__DETAIL__BUFFS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__radar_interfaces__msg__Buffs __attribute__((deprecated))
#else
# define DEPRECATED__radar_interfaces__msg__Buffs __declspec(deprecated)
#endif

namespace radar_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Buffs_
{
  using Type = Buffs_<ContainerAllocator>;

  explicit Buffs_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hero_health_regen = 0;
      this->hero_cooling_boost = 0;
      this->hero_defense_boost = 0;
      this->hero_defense_debuff = 0;
      this->hero_attack_boost = 0;
      this->engineer_health_regen = 0;
      this->engineer_cooling_boost = 0;
      this->engineer_defense_boost = 0;
      this->engineer_defense_debuff = 0;
      this->engineer_attack_boost = 0;
      this->infantry_3_health_regen = 0;
      this->infantry_3_cooling_boost = 0;
      this->infantry_3_defense_boost = 0;
      this->infantry_3_defense_debuff = 0;
      this->infantry_3_attack_boost = 0;
      this->infantry_4_health_regen = 0;
      this->infantry_4_cooling_boost = 0;
      this->infantry_4_defense_boost = 0;
      this->infantry_4_defense_debuff = 0;
      this->infantry_4_attack_boost = 0;
      this->sentry_health_regen = 0;
      this->sentry_cooling_boost = 0;
      this->sentry_defense_boost = 0;
      this->sentry_defense_debuff = 0;
      this->sentry_attack_boost = 0;
      this->sentry_posture = 0;
    }
  }

  explicit Buffs_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hero_health_regen = 0;
      this->hero_cooling_boost = 0;
      this->hero_defense_boost = 0;
      this->hero_defense_debuff = 0;
      this->hero_attack_boost = 0;
      this->engineer_health_regen = 0;
      this->engineer_cooling_boost = 0;
      this->engineer_defense_boost = 0;
      this->engineer_defense_debuff = 0;
      this->engineer_attack_boost = 0;
      this->infantry_3_health_regen = 0;
      this->infantry_3_cooling_boost = 0;
      this->infantry_3_defense_boost = 0;
      this->infantry_3_defense_debuff = 0;
      this->infantry_3_attack_boost = 0;
      this->infantry_4_health_regen = 0;
      this->infantry_4_cooling_boost = 0;
      this->infantry_4_defense_boost = 0;
      this->infantry_4_defense_debuff = 0;
      this->infantry_4_attack_boost = 0;
      this->sentry_health_regen = 0;
      this->sentry_cooling_boost = 0;
      this->sentry_defense_boost = 0;
      this->sentry_defense_debuff = 0;
      this->sentry_attack_boost = 0;
      this->sentry_posture = 0;
    }
  }

  // field types and members
  using _hero_health_regen_type =
    uint8_t;
  _hero_health_regen_type hero_health_regen;
  using _hero_cooling_boost_type =
    uint16_t;
  _hero_cooling_boost_type hero_cooling_boost;
  using _hero_defense_boost_type =
    uint8_t;
  _hero_defense_boost_type hero_defense_boost;
  using _hero_defense_debuff_type =
    uint8_t;
  _hero_defense_debuff_type hero_defense_debuff;
  using _hero_attack_boost_type =
    uint16_t;
  _hero_attack_boost_type hero_attack_boost;
  using _engineer_health_regen_type =
    uint8_t;
  _engineer_health_regen_type engineer_health_regen;
  using _engineer_cooling_boost_type =
    uint16_t;
  _engineer_cooling_boost_type engineer_cooling_boost;
  using _engineer_defense_boost_type =
    uint8_t;
  _engineer_defense_boost_type engineer_defense_boost;
  using _engineer_defense_debuff_type =
    uint8_t;
  _engineer_defense_debuff_type engineer_defense_debuff;
  using _engineer_attack_boost_type =
    uint16_t;
  _engineer_attack_boost_type engineer_attack_boost;
  using _infantry_3_health_regen_type =
    uint8_t;
  _infantry_3_health_regen_type infantry_3_health_regen;
  using _infantry_3_cooling_boost_type =
    uint16_t;
  _infantry_3_cooling_boost_type infantry_3_cooling_boost;
  using _infantry_3_defense_boost_type =
    uint8_t;
  _infantry_3_defense_boost_type infantry_3_defense_boost;
  using _infantry_3_defense_debuff_type =
    uint8_t;
  _infantry_3_defense_debuff_type infantry_3_defense_debuff;
  using _infantry_3_attack_boost_type =
    uint16_t;
  _infantry_3_attack_boost_type infantry_3_attack_boost;
  using _infantry_4_health_regen_type =
    uint8_t;
  _infantry_4_health_regen_type infantry_4_health_regen;
  using _infantry_4_cooling_boost_type =
    uint16_t;
  _infantry_4_cooling_boost_type infantry_4_cooling_boost;
  using _infantry_4_defense_boost_type =
    uint8_t;
  _infantry_4_defense_boost_type infantry_4_defense_boost;
  using _infantry_4_defense_debuff_type =
    uint8_t;
  _infantry_4_defense_debuff_type infantry_4_defense_debuff;
  using _infantry_4_attack_boost_type =
    uint16_t;
  _infantry_4_attack_boost_type infantry_4_attack_boost;
  using _sentry_health_regen_type =
    uint8_t;
  _sentry_health_regen_type sentry_health_regen;
  using _sentry_cooling_boost_type =
    uint16_t;
  _sentry_cooling_boost_type sentry_cooling_boost;
  using _sentry_defense_boost_type =
    uint8_t;
  _sentry_defense_boost_type sentry_defense_boost;
  using _sentry_defense_debuff_type =
    uint8_t;
  _sentry_defense_debuff_type sentry_defense_debuff;
  using _sentry_attack_boost_type =
    uint16_t;
  _sentry_attack_boost_type sentry_attack_boost;
  using _sentry_posture_type =
    uint8_t;
  _sentry_posture_type sentry_posture;

  // setters for named parameter idiom
  Type & set__hero_health_regen(
    const uint8_t & _arg)
  {
    this->hero_health_regen = _arg;
    return *this;
  }
  Type & set__hero_cooling_boost(
    const uint16_t & _arg)
  {
    this->hero_cooling_boost = _arg;
    return *this;
  }
  Type & set__hero_defense_boost(
    const uint8_t & _arg)
  {
    this->hero_defense_boost = _arg;
    return *this;
  }
  Type & set__hero_defense_debuff(
    const uint8_t & _arg)
  {
    this->hero_defense_debuff = _arg;
    return *this;
  }
  Type & set__hero_attack_boost(
    const uint16_t & _arg)
  {
    this->hero_attack_boost = _arg;
    return *this;
  }
  Type & set__engineer_health_regen(
    const uint8_t & _arg)
  {
    this->engineer_health_regen = _arg;
    return *this;
  }
  Type & set__engineer_cooling_boost(
    const uint16_t & _arg)
  {
    this->engineer_cooling_boost = _arg;
    return *this;
  }
  Type & set__engineer_defense_boost(
    const uint8_t & _arg)
  {
    this->engineer_defense_boost = _arg;
    return *this;
  }
  Type & set__engineer_defense_debuff(
    const uint8_t & _arg)
  {
    this->engineer_defense_debuff = _arg;
    return *this;
  }
  Type & set__engineer_attack_boost(
    const uint16_t & _arg)
  {
    this->engineer_attack_boost = _arg;
    return *this;
  }
  Type & set__infantry_3_health_regen(
    const uint8_t & _arg)
  {
    this->infantry_3_health_regen = _arg;
    return *this;
  }
  Type & set__infantry_3_cooling_boost(
    const uint16_t & _arg)
  {
    this->infantry_3_cooling_boost = _arg;
    return *this;
  }
  Type & set__infantry_3_defense_boost(
    const uint8_t & _arg)
  {
    this->infantry_3_defense_boost = _arg;
    return *this;
  }
  Type & set__infantry_3_defense_debuff(
    const uint8_t & _arg)
  {
    this->infantry_3_defense_debuff = _arg;
    return *this;
  }
  Type & set__infantry_3_attack_boost(
    const uint16_t & _arg)
  {
    this->infantry_3_attack_boost = _arg;
    return *this;
  }
  Type & set__infantry_4_health_regen(
    const uint8_t & _arg)
  {
    this->infantry_4_health_regen = _arg;
    return *this;
  }
  Type & set__infantry_4_cooling_boost(
    const uint16_t & _arg)
  {
    this->infantry_4_cooling_boost = _arg;
    return *this;
  }
  Type & set__infantry_4_defense_boost(
    const uint8_t & _arg)
  {
    this->infantry_4_defense_boost = _arg;
    return *this;
  }
  Type & set__infantry_4_defense_debuff(
    const uint8_t & _arg)
  {
    this->infantry_4_defense_debuff = _arg;
    return *this;
  }
  Type & set__infantry_4_attack_boost(
    const uint16_t & _arg)
  {
    this->infantry_4_attack_boost = _arg;
    return *this;
  }
  Type & set__sentry_health_regen(
    const uint8_t & _arg)
  {
    this->sentry_health_regen = _arg;
    return *this;
  }
  Type & set__sentry_cooling_boost(
    const uint16_t & _arg)
  {
    this->sentry_cooling_boost = _arg;
    return *this;
  }
  Type & set__sentry_defense_boost(
    const uint8_t & _arg)
  {
    this->sentry_defense_boost = _arg;
    return *this;
  }
  Type & set__sentry_defense_debuff(
    const uint8_t & _arg)
  {
    this->sentry_defense_debuff = _arg;
    return *this;
  }
  Type & set__sentry_attack_boost(
    const uint16_t & _arg)
  {
    this->sentry_attack_boost = _arg;
    return *this;
  }
  Type & set__sentry_posture(
    const uint8_t & _arg)
  {
    this->sentry_posture = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    radar_interfaces::msg::Buffs_<ContainerAllocator> *;
  using ConstRawPtr =
    const radar_interfaces::msg::Buffs_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<radar_interfaces::msg::Buffs_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<radar_interfaces::msg::Buffs_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      radar_interfaces::msg::Buffs_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<radar_interfaces::msg::Buffs_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      radar_interfaces::msg::Buffs_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<radar_interfaces::msg::Buffs_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<radar_interfaces::msg::Buffs_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<radar_interfaces::msg::Buffs_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__radar_interfaces__msg__Buffs
    std::shared_ptr<radar_interfaces::msg::Buffs_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__radar_interfaces__msg__Buffs
    std::shared_ptr<radar_interfaces::msg::Buffs_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Buffs_ & other) const
  {
    if (this->hero_health_regen != other.hero_health_regen) {
      return false;
    }
    if (this->hero_cooling_boost != other.hero_cooling_boost) {
      return false;
    }
    if (this->hero_defense_boost != other.hero_defense_boost) {
      return false;
    }
    if (this->hero_defense_debuff != other.hero_defense_debuff) {
      return false;
    }
    if (this->hero_attack_boost != other.hero_attack_boost) {
      return false;
    }
    if (this->engineer_health_regen != other.engineer_health_regen) {
      return false;
    }
    if (this->engineer_cooling_boost != other.engineer_cooling_boost) {
      return false;
    }
    if (this->engineer_defense_boost != other.engineer_defense_boost) {
      return false;
    }
    if (this->engineer_defense_debuff != other.engineer_defense_debuff) {
      return false;
    }
    if (this->engineer_attack_boost != other.engineer_attack_boost) {
      return false;
    }
    if (this->infantry_3_health_regen != other.infantry_3_health_regen) {
      return false;
    }
    if (this->infantry_3_cooling_boost != other.infantry_3_cooling_boost) {
      return false;
    }
    if (this->infantry_3_defense_boost != other.infantry_3_defense_boost) {
      return false;
    }
    if (this->infantry_3_defense_debuff != other.infantry_3_defense_debuff) {
      return false;
    }
    if (this->infantry_3_attack_boost != other.infantry_3_attack_boost) {
      return false;
    }
    if (this->infantry_4_health_regen != other.infantry_4_health_regen) {
      return false;
    }
    if (this->infantry_4_cooling_boost != other.infantry_4_cooling_boost) {
      return false;
    }
    if (this->infantry_4_defense_boost != other.infantry_4_defense_boost) {
      return false;
    }
    if (this->infantry_4_defense_debuff != other.infantry_4_defense_debuff) {
      return false;
    }
    if (this->infantry_4_attack_boost != other.infantry_4_attack_boost) {
      return false;
    }
    if (this->sentry_health_regen != other.sentry_health_regen) {
      return false;
    }
    if (this->sentry_cooling_boost != other.sentry_cooling_boost) {
      return false;
    }
    if (this->sentry_defense_boost != other.sentry_defense_boost) {
      return false;
    }
    if (this->sentry_defense_debuff != other.sentry_defense_debuff) {
      return false;
    }
    if (this->sentry_attack_boost != other.sentry_attack_boost) {
      return false;
    }
    if (this->sentry_posture != other.sentry_posture) {
      return false;
    }
    return true;
  }
  bool operator!=(const Buffs_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Buffs_

// alias to use template instance with default allocator
using Buffs =
  radar_interfaces::msg::Buffs_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace radar_interfaces

#endif  // RADAR_INTERFACES__MSG__DETAIL__BUFFS__STRUCT_HPP_
