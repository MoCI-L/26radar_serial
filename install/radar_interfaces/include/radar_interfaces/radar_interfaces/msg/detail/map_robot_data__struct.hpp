// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from radar_interfaces:msg/MapRobotData.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__MAP_ROBOT_DATA__STRUCT_HPP_
#define RADAR_INTERFACES__MSG__DETAIL__MAP_ROBOT_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__radar_interfaces__msg__MapRobotData __attribute__((deprecated))
#else
# define DEPRECATED__radar_interfaces__msg__MapRobotData __declspec(deprecated)
#endif

namespace radar_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MapRobotData_
{
  using Type = MapRobotData_<ContainerAllocator>;

  explicit MapRobotData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->opponent_hero_x = 0;
      this->opponent_hero_y = 0;
      this->opponent_engineer_x = 0;
      this->opponent_engineer_y = 0;
      this->opponent_infantry_3_x = 0;
      this->opponent_infantry_3_y = 0;
      this->opponent_infantry_4_x = 0;
      this->opponent_infantry_4_y = 0;
      this->opponent_aerial_x = 0;
      this->opponent_aerial_y = 0;
      this->opponent_sentry_x = 0;
      this->opponent_sentry_y = 0;
      this->ally_hero_x = 0;
      this->ally_hero_y = 0;
      this->ally_engineer_x = 0;
      this->ally_engineer_y = 0;
      this->ally_infantry_3_x = 0;
      this->ally_infantry_3_y = 0;
      this->ally_infantry_4_x = 0;
      this->ally_infantry_4_y = 0;
      this->ally_aerial_x = 0;
      this->ally_aerial_y = 0;
      this->ally_sentry_x = 0;
      this->ally_sentry_y = 0;
    }
  }

  explicit MapRobotData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->opponent_hero_x = 0;
      this->opponent_hero_y = 0;
      this->opponent_engineer_x = 0;
      this->opponent_engineer_y = 0;
      this->opponent_infantry_3_x = 0;
      this->opponent_infantry_3_y = 0;
      this->opponent_infantry_4_x = 0;
      this->opponent_infantry_4_y = 0;
      this->opponent_aerial_x = 0;
      this->opponent_aerial_y = 0;
      this->opponent_sentry_x = 0;
      this->opponent_sentry_y = 0;
      this->ally_hero_x = 0;
      this->ally_hero_y = 0;
      this->ally_engineer_x = 0;
      this->ally_engineer_y = 0;
      this->ally_infantry_3_x = 0;
      this->ally_infantry_3_y = 0;
      this->ally_infantry_4_x = 0;
      this->ally_infantry_4_y = 0;
      this->ally_aerial_x = 0;
      this->ally_aerial_y = 0;
      this->ally_sentry_x = 0;
      this->ally_sentry_y = 0;
    }
  }

  // field types and members
  using _opponent_hero_x_type =
    uint16_t;
  _opponent_hero_x_type opponent_hero_x;
  using _opponent_hero_y_type =
    uint16_t;
  _opponent_hero_y_type opponent_hero_y;
  using _opponent_engineer_x_type =
    uint16_t;
  _opponent_engineer_x_type opponent_engineer_x;
  using _opponent_engineer_y_type =
    uint16_t;
  _opponent_engineer_y_type opponent_engineer_y;
  using _opponent_infantry_3_x_type =
    uint16_t;
  _opponent_infantry_3_x_type opponent_infantry_3_x;
  using _opponent_infantry_3_y_type =
    uint16_t;
  _opponent_infantry_3_y_type opponent_infantry_3_y;
  using _opponent_infantry_4_x_type =
    uint16_t;
  _opponent_infantry_4_x_type opponent_infantry_4_x;
  using _opponent_infantry_4_y_type =
    uint16_t;
  _opponent_infantry_4_y_type opponent_infantry_4_y;
  using _opponent_aerial_x_type =
    uint16_t;
  _opponent_aerial_x_type opponent_aerial_x;
  using _opponent_aerial_y_type =
    uint16_t;
  _opponent_aerial_y_type opponent_aerial_y;
  using _opponent_sentry_x_type =
    uint16_t;
  _opponent_sentry_x_type opponent_sentry_x;
  using _opponent_sentry_y_type =
    uint16_t;
  _opponent_sentry_y_type opponent_sentry_y;
  using _ally_hero_x_type =
    uint16_t;
  _ally_hero_x_type ally_hero_x;
  using _ally_hero_y_type =
    uint16_t;
  _ally_hero_y_type ally_hero_y;
  using _ally_engineer_x_type =
    uint16_t;
  _ally_engineer_x_type ally_engineer_x;
  using _ally_engineer_y_type =
    uint16_t;
  _ally_engineer_y_type ally_engineer_y;
  using _ally_infantry_3_x_type =
    uint16_t;
  _ally_infantry_3_x_type ally_infantry_3_x;
  using _ally_infantry_3_y_type =
    uint16_t;
  _ally_infantry_3_y_type ally_infantry_3_y;
  using _ally_infantry_4_x_type =
    uint16_t;
  _ally_infantry_4_x_type ally_infantry_4_x;
  using _ally_infantry_4_y_type =
    uint16_t;
  _ally_infantry_4_y_type ally_infantry_4_y;
  using _ally_aerial_x_type =
    uint16_t;
  _ally_aerial_x_type ally_aerial_x;
  using _ally_aerial_y_type =
    uint16_t;
  _ally_aerial_y_type ally_aerial_y;
  using _ally_sentry_x_type =
    uint16_t;
  _ally_sentry_x_type ally_sentry_x;
  using _ally_sentry_y_type =
    uint16_t;
  _ally_sentry_y_type ally_sentry_y;

  // setters for named parameter idiom
  Type & set__opponent_hero_x(
    const uint16_t & _arg)
  {
    this->opponent_hero_x = _arg;
    return *this;
  }
  Type & set__opponent_hero_y(
    const uint16_t & _arg)
  {
    this->opponent_hero_y = _arg;
    return *this;
  }
  Type & set__opponent_engineer_x(
    const uint16_t & _arg)
  {
    this->opponent_engineer_x = _arg;
    return *this;
  }
  Type & set__opponent_engineer_y(
    const uint16_t & _arg)
  {
    this->opponent_engineer_y = _arg;
    return *this;
  }
  Type & set__opponent_infantry_3_x(
    const uint16_t & _arg)
  {
    this->opponent_infantry_3_x = _arg;
    return *this;
  }
  Type & set__opponent_infantry_3_y(
    const uint16_t & _arg)
  {
    this->opponent_infantry_3_y = _arg;
    return *this;
  }
  Type & set__opponent_infantry_4_x(
    const uint16_t & _arg)
  {
    this->opponent_infantry_4_x = _arg;
    return *this;
  }
  Type & set__opponent_infantry_4_y(
    const uint16_t & _arg)
  {
    this->opponent_infantry_4_y = _arg;
    return *this;
  }
  Type & set__opponent_aerial_x(
    const uint16_t & _arg)
  {
    this->opponent_aerial_x = _arg;
    return *this;
  }
  Type & set__opponent_aerial_y(
    const uint16_t & _arg)
  {
    this->opponent_aerial_y = _arg;
    return *this;
  }
  Type & set__opponent_sentry_x(
    const uint16_t & _arg)
  {
    this->opponent_sentry_x = _arg;
    return *this;
  }
  Type & set__opponent_sentry_y(
    const uint16_t & _arg)
  {
    this->opponent_sentry_y = _arg;
    return *this;
  }
  Type & set__ally_hero_x(
    const uint16_t & _arg)
  {
    this->ally_hero_x = _arg;
    return *this;
  }
  Type & set__ally_hero_y(
    const uint16_t & _arg)
  {
    this->ally_hero_y = _arg;
    return *this;
  }
  Type & set__ally_engineer_x(
    const uint16_t & _arg)
  {
    this->ally_engineer_x = _arg;
    return *this;
  }
  Type & set__ally_engineer_y(
    const uint16_t & _arg)
  {
    this->ally_engineer_y = _arg;
    return *this;
  }
  Type & set__ally_infantry_3_x(
    const uint16_t & _arg)
  {
    this->ally_infantry_3_x = _arg;
    return *this;
  }
  Type & set__ally_infantry_3_y(
    const uint16_t & _arg)
  {
    this->ally_infantry_3_y = _arg;
    return *this;
  }
  Type & set__ally_infantry_4_x(
    const uint16_t & _arg)
  {
    this->ally_infantry_4_x = _arg;
    return *this;
  }
  Type & set__ally_infantry_4_y(
    const uint16_t & _arg)
  {
    this->ally_infantry_4_y = _arg;
    return *this;
  }
  Type & set__ally_aerial_x(
    const uint16_t & _arg)
  {
    this->ally_aerial_x = _arg;
    return *this;
  }
  Type & set__ally_aerial_y(
    const uint16_t & _arg)
  {
    this->ally_aerial_y = _arg;
    return *this;
  }
  Type & set__ally_sentry_x(
    const uint16_t & _arg)
  {
    this->ally_sentry_x = _arg;
    return *this;
  }
  Type & set__ally_sentry_y(
    const uint16_t & _arg)
  {
    this->ally_sentry_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    radar_interfaces::msg::MapRobotData_<ContainerAllocator> *;
  using ConstRawPtr =
    const radar_interfaces::msg::MapRobotData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<radar_interfaces::msg::MapRobotData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<radar_interfaces::msg::MapRobotData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      radar_interfaces::msg::MapRobotData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<radar_interfaces::msg::MapRobotData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      radar_interfaces::msg::MapRobotData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<radar_interfaces::msg::MapRobotData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<radar_interfaces::msg::MapRobotData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<radar_interfaces::msg::MapRobotData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__radar_interfaces__msg__MapRobotData
    std::shared_ptr<radar_interfaces::msg::MapRobotData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__radar_interfaces__msg__MapRobotData
    std::shared_ptr<radar_interfaces::msg::MapRobotData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapRobotData_ & other) const
  {
    if (this->opponent_hero_x != other.opponent_hero_x) {
      return false;
    }
    if (this->opponent_hero_y != other.opponent_hero_y) {
      return false;
    }
    if (this->opponent_engineer_x != other.opponent_engineer_x) {
      return false;
    }
    if (this->opponent_engineer_y != other.opponent_engineer_y) {
      return false;
    }
    if (this->opponent_infantry_3_x != other.opponent_infantry_3_x) {
      return false;
    }
    if (this->opponent_infantry_3_y != other.opponent_infantry_3_y) {
      return false;
    }
    if (this->opponent_infantry_4_x != other.opponent_infantry_4_x) {
      return false;
    }
    if (this->opponent_infantry_4_y != other.opponent_infantry_4_y) {
      return false;
    }
    if (this->opponent_aerial_x != other.opponent_aerial_x) {
      return false;
    }
    if (this->opponent_aerial_y != other.opponent_aerial_y) {
      return false;
    }
    if (this->opponent_sentry_x != other.opponent_sentry_x) {
      return false;
    }
    if (this->opponent_sentry_y != other.opponent_sentry_y) {
      return false;
    }
    if (this->ally_hero_x != other.ally_hero_x) {
      return false;
    }
    if (this->ally_hero_y != other.ally_hero_y) {
      return false;
    }
    if (this->ally_engineer_x != other.ally_engineer_x) {
      return false;
    }
    if (this->ally_engineer_y != other.ally_engineer_y) {
      return false;
    }
    if (this->ally_infantry_3_x != other.ally_infantry_3_x) {
      return false;
    }
    if (this->ally_infantry_3_y != other.ally_infantry_3_y) {
      return false;
    }
    if (this->ally_infantry_4_x != other.ally_infantry_4_x) {
      return false;
    }
    if (this->ally_infantry_4_y != other.ally_infantry_4_y) {
      return false;
    }
    if (this->ally_aerial_x != other.ally_aerial_x) {
      return false;
    }
    if (this->ally_aerial_y != other.ally_aerial_y) {
      return false;
    }
    if (this->ally_sentry_x != other.ally_sentry_x) {
      return false;
    }
    if (this->ally_sentry_y != other.ally_sentry_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapRobotData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapRobotData_

// alias to use template instance with default allocator
using MapRobotData =
  radar_interfaces::msg::MapRobotData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace radar_interfaces

#endif  // RADAR_INTERFACES__MSG__DETAIL__MAP_ROBOT_DATA__STRUCT_HPP_
