// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from radar_interfaces:msg/RadarDecisionCommand.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__RADAR_DECISION_COMMAND__STRUCT_HPP_
#define RADAR_INTERFACES__MSG__DETAIL__RADAR_DECISION_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__radar_interfaces__msg__RadarDecisionCommand __attribute__((deprecated))
#else
# define DEPRECATED__radar_interfaces__msg__RadarDecisionCommand __declspec(deprecated)
#endif

namespace radar_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarDecisionCommand_
{
  using Type = RadarDecisionCommand_<ContainerAllocator>;

  explicit RadarDecisionCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sender_id = 0;
      this->receiver_id = 0;
      this->double_vulnerability_request = 0;
      this->password_command_type = 0;
      this->password = "";
    }
  }

  explicit RadarDecisionCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : password(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sender_id = 0;
      this->receiver_id = 0;
      this->double_vulnerability_request = 0;
      this->password_command_type = 0;
      this->password = "";
    }
  }

  // field types and members
  using _sender_id_type =
    uint16_t;
  _sender_id_type sender_id;
  using _receiver_id_type =
    uint16_t;
  _receiver_id_type receiver_id;
  using _double_vulnerability_request_type =
    uint8_t;
  _double_vulnerability_request_type double_vulnerability_request;
  using _password_command_type_type =
    uint8_t;
  _password_command_type_type password_command_type;
  using _password_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _password_type password;

  // setters for named parameter idiom
  Type & set__sender_id(
    const uint16_t & _arg)
  {
    this->sender_id = _arg;
    return *this;
  }
  Type & set__receiver_id(
    const uint16_t & _arg)
  {
    this->receiver_id = _arg;
    return *this;
  }
  Type & set__double_vulnerability_request(
    const uint8_t & _arg)
  {
    this->double_vulnerability_request = _arg;
    return *this;
  }
  Type & set__password_command_type(
    const uint8_t & _arg)
  {
    this->password_command_type = _arg;
    return *this;
  }
  Type & set__password(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->password = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    radar_interfaces::msg::RadarDecisionCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const radar_interfaces::msg::RadarDecisionCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<radar_interfaces::msg::RadarDecisionCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<radar_interfaces::msg::RadarDecisionCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      radar_interfaces::msg::RadarDecisionCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<radar_interfaces::msg::RadarDecisionCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      radar_interfaces::msg::RadarDecisionCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<radar_interfaces::msg::RadarDecisionCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<radar_interfaces::msg::RadarDecisionCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<radar_interfaces::msg::RadarDecisionCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__radar_interfaces__msg__RadarDecisionCommand
    std::shared_ptr<radar_interfaces::msg::RadarDecisionCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__radar_interfaces__msg__RadarDecisionCommand
    std::shared_ptr<radar_interfaces::msg::RadarDecisionCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarDecisionCommand_ & other) const
  {
    if (this->sender_id != other.sender_id) {
      return false;
    }
    if (this->receiver_id != other.receiver_id) {
      return false;
    }
    if (this->double_vulnerability_request != other.double_vulnerability_request) {
      return false;
    }
    if (this->password_command_type != other.password_command_type) {
      return false;
    }
    if (this->password != other.password) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarDecisionCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarDecisionCommand_

// alias to use template instance with default allocator
using RadarDecisionCommand =
  radar_interfaces::msg::RadarDecisionCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace radar_interfaces

#endif  // RADAR_INTERFACES__MSG__DETAIL__RADAR_DECISION_COMMAND__STRUCT_HPP_
