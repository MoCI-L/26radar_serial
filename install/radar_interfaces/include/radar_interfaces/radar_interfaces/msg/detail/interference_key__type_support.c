// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from radar_interfaces:msg/InterferenceKey.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "radar_interfaces/msg/detail/interference_key__rosidl_typesupport_introspection_c.h"
#include "radar_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "radar_interfaces/msg/detail/interference_key__functions.h"
#include "radar_interfaces/msg/detail/interference_key__struct.h"


// Include directives for member types
// Member `key`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void radar_interfaces__msg__InterferenceKey__rosidl_typesupport_introspection_c__InterferenceKey_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  radar_interfaces__msg__InterferenceKey__init(message_memory);
}

void radar_interfaces__msg__InterferenceKey__rosidl_typesupport_introspection_c__InterferenceKey_fini_function(void * message_memory)
{
  radar_interfaces__msg__InterferenceKey__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember radar_interfaces__msg__InterferenceKey__rosidl_typesupport_introspection_c__InterferenceKey_message_member_array[1] = {
  {
    "key",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(radar_interfaces__msg__InterferenceKey, key),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers radar_interfaces__msg__InterferenceKey__rosidl_typesupport_introspection_c__InterferenceKey_message_members = {
  "radar_interfaces__msg",  // message namespace
  "InterferenceKey",  // message name
  1,  // number of fields
  sizeof(radar_interfaces__msg__InterferenceKey),
  radar_interfaces__msg__InterferenceKey__rosidl_typesupport_introspection_c__InterferenceKey_message_member_array,  // message members
  radar_interfaces__msg__InterferenceKey__rosidl_typesupport_introspection_c__InterferenceKey_init_function,  // function to initialize message memory (memory has to be allocated)
  radar_interfaces__msg__InterferenceKey__rosidl_typesupport_introspection_c__InterferenceKey_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t radar_interfaces__msg__InterferenceKey__rosidl_typesupport_introspection_c__InterferenceKey_message_type_support_handle = {
  0,
  &radar_interfaces__msg__InterferenceKey__rosidl_typesupport_introspection_c__InterferenceKey_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_radar_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, radar_interfaces, msg, InterferenceKey)() {
  if (!radar_interfaces__msg__InterferenceKey__rosidl_typesupport_introspection_c__InterferenceKey_message_type_support_handle.typesupport_identifier) {
    radar_interfaces__msg__InterferenceKey__rosidl_typesupport_introspection_c__InterferenceKey_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &radar_interfaces__msg__InterferenceKey__rosidl_typesupport_introspection_c__InterferenceKey_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
