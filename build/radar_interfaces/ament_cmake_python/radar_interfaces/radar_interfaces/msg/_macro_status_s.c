// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from radar_interfaces:msg/MacroStatus.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "radar_interfaces/msg/detail/macro_status__struct.h"
#include "radar_interfaces/msg/detail/macro_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool radar_interfaces__msg__macro_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("radar_interfaces.msg._macro_status.MacroStatus", full_classname_dest, 46) == 0);
  }
  radar_interfaces__msg__MacroStatus * ros_message = _ros_message;
  {  // remaining_gold
    PyObject * field = PyObject_GetAttrString(_pymsg, "remaining_gold");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->remaining_gold = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // total_gold
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_gold");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->total_gold = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // enemy_supply_area_occupied
    PyObject * field = PyObject_GetAttrString(_pymsg, "enemy_supply_area_occupied");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enemy_supply_area_occupied = (Py_True == field);
    Py_DECREF(field);
  }
  {  // enemy_central_highland_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "enemy_central_highland_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->enemy_central_highland_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // enemy_trapezoid_highland_occupied
    PyObject * field = PyObject_GetAttrString(_pymsg, "enemy_trapezoid_highland_occupied");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enemy_trapezoid_highland_occupied = (Py_True == field);
    Py_DECREF(field);
  }
  {  // enemy_fort_buff_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "enemy_fort_buff_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->enemy_fort_buff_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // enemy_outpost_buff_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "enemy_outpost_buff_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->enemy_outpost_buff_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // enemy_base_buff_occupied
    PyObject * field = PyObject_GetAttrString(_pymsg, "enemy_base_buff_occupied");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enemy_base_buff_occupied = (Py_True == field);
    Py_DECREF(field);
  }
  {  // enemy_tunnel_pre_jump_occupied
    PyObject * field = PyObject_GetAttrString(_pymsg, "enemy_tunnel_pre_jump_occupied");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enemy_tunnel_pre_jump_occupied = (Py_True == field);
    Py_DECREF(field);
  }
  {  // enemy_tunnel_post_jump_occupied
    PyObject * field = PyObject_GetAttrString(_pymsg, "enemy_tunnel_post_jump_occupied");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enemy_tunnel_post_jump_occupied = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ally_side_tunnel_pre_jump_occupied
    PyObject * field = PyObject_GetAttrString(_pymsg, "ally_side_tunnel_pre_jump_occupied");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ally_side_tunnel_pre_jump_occupied = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ally_side_tunnel_post_jump_occupied
    PyObject * field = PyObject_GetAttrString(_pymsg, "ally_side_tunnel_post_jump_occupied");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ally_side_tunnel_post_jump_occupied = (Py_True == field);
    Py_DECREF(field);
  }
  {  // enemy_highland_upper_occupied
    PyObject * field = PyObject_GetAttrString(_pymsg, "enemy_highland_upper_occupied");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enemy_highland_upper_occupied = (Py_True == field);
    Py_DECREF(field);
  }
  {  // enemy_jump_upper_occupied
    PyObject * field = PyObject_GetAttrString(_pymsg, "enemy_jump_upper_occupied");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enemy_jump_upper_occupied = (Py_True == field);
    Py_DECREF(field);
  }
  {  // enemy_road_upper_occupied
    PyObject * field = PyObject_GetAttrString(_pymsg, "enemy_road_upper_occupied");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enemy_road_upper_occupied = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * radar_interfaces__msg__macro_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MacroStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("radar_interfaces.msg._macro_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MacroStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  radar_interfaces__msg__MacroStatus * ros_message = (radar_interfaces__msg__MacroStatus *)raw_ros_message;
  {  // remaining_gold
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->remaining_gold);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remaining_gold", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_gold
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->total_gold);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_gold", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enemy_supply_area_occupied
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enemy_supply_area_occupied ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enemy_supply_area_occupied", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enemy_central_highland_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->enemy_central_highland_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enemy_central_highland_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enemy_trapezoid_highland_occupied
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enemy_trapezoid_highland_occupied ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enemy_trapezoid_highland_occupied", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enemy_fort_buff_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->enemy_fort_buff_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enemy_fort_buff_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enemy_outpost_buff_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->enemy_outpost_buff_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enemy_outpost_buff_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enemy_base_buff_occupied
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enemy_base_buff_occupied ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enemy_base_buff_occupied", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enemy_tunnel_pre_jump_occupied
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enemy_tunnel_pre_jump_occupied ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enemy_tunnel_pre_jump_occupied", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enemy_tunnel_post_jump_occupied
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enemy_tunnel_post_jump_occupied ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enemy_tunnel_post_jump_occupied", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ally_side_tunnel_pre_jump_occupied
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ally_side_tunnel_pre_jump_occupied ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ally_side_tunnel_pre_jump_occupied", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ally_side_tunnel_post_jump_occupied
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ally_side_tunnel_post_jump_occupied ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ally_side_tunnel_post_jump_occupied", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enemy_highland_upper_occupied
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enemy_highland_upper_occupied ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enemy_highland_upper_occupied", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enemy_jump_upper_occupied
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enemy_jump_upper_occupied ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enemy_jump_upper_occupied", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enemy_road_upper_occupied
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enemy_road_upper_occupied ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enemy_road_upper_occupied", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
