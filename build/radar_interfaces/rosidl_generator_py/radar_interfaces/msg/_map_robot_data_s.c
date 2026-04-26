// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from radar_interfaces:msg/MapRobotData.idl
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
#include "radar_interfaces/msg/detail/map_robot_data__struct.h"
#include "radar_interfaces/msg/detail/map_robot_data__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool radar_interfaces__msg__map_robot_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("radar_interfaces.msg._map_robot_data.MapRobotData", full_classname_dest, 49) == 0);
  }
  radar_interfaces__msg__MapRobotData * ros_message = _ros_message;
  {  // opponent_hero_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "opponent_hero_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->opponent_hero_x = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // opponent_hero_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "opponent_hero_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->opponent_hero_y = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // opponent_engineer_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "opponent_engineer_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->opponent_engineer_x = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // opponent_engineer_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "opponent_engineer_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->opponent_engineer_y = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // opponent_infantry_3_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "opponent_infantry_3_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->opponent_infantry_3_x = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // opponent_infantry_3_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "opponent_infantry_3_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->opponent_infantry_3_y = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // opponent_infantry_4_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "opponent_infantry_4_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->opponent_infantry_4_x = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // opponent_infantry_4_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "opponent_infantry_4_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->opponent_infantry_4_y = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // opponent_aerial_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "opponent_aerial_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->opponent_aerial_x = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // opponent_aerial_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "opponent_aerial_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->opponent_aerial_y = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // opponent_sentry_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "opponent_sentry_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->opponent_sentry_x = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // opponent_sentry_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "opponent_sentry_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->opponent_sentry_y = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ally_hero_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "ally_hero_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ally_hero_x = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ally_hero_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "ally_hero_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ally_hero_y = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ally_engineer_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "ally_engineer_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ally_engineer_x = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ally_engineer_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "ally_engineer_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ally_engineer_y = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ally_infantry_3_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "ally_infantry_3_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ally_infantry_3_x = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ally_infantry_3_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "ally_infantry_3_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ally_infantry_3_y = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ally_infantry_4_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "ally_infantry_4_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ally_infantry_4_x = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ally_infantry_4_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "ally_infantry_4_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ally_infantry_4_y = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ally_aerial_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "ally_aerial_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ally_aerial_x = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ally_aerial_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "ally_aerial_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ally_aerial_y = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ally_sentry_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "ally_sentry_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ally_sentry_x = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ally_sentry_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "ally_sentry_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ally_sentry_y = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * radar_interfaces__msg__map_robot_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MapRobotData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("radar_interfaces.msg._map_robot_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MapRobotData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  radar_interfaces__msg__MapRobotData * ros_message = (radar_interfaces__msg__MapRobotData *)raw_ros_message;
  {  // opponent_hero_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->opponent_hero_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "opponent_hero_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // opponent_hero_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->opponent_hero_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "opponent_hero_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // opponent_engineer_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->opponent_engineer_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "opponent_engineer_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // opponent_engineer_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->opponent_engineer_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "opponent_engineer_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // opponent_infantry_3_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->opponent_infantry_3_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "opponent_infantry_3_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // opponent_infantry_3_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->opponent_infantry_3_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "opponent_infantry_3_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // opponent_infantry_4_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->opponent_infantry_4_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "opponent_infantry_4_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // opponent_infantry_4_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->opponent_infantry_4_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "opponent_infantry_4_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // opponent_aerial_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->opponent_aerial_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "opponent_aerial_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // opponent_aerial_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->opponent_aerial_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "opponent_aerial_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // opponent_sentry_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->opponent_sentry_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "opponent_sentry_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // opponent_sentry_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->opponent_sentry_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "opponent_sentry_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ally_hero_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ally_hero_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ally_hero_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ally_hero_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ally_hero_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ally_hero_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ally_engineer_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ally_engineer_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ally_engineer_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ally_engineer_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ally_engineer_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ally_engineer_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ally_infantry_3_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ally_infantry_3_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ally_infantry_3_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ally_infantry_3_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ally_infantry_3_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ally_infantry_3_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ally_infantry_4_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ally_infantry_4_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ally_infantry_4_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ally_infantry_4_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ally_infantry_4_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ally_infantry_4_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ally_aerial_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ally_aerial_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ally_aerial_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ally_aerial_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ally_aerial_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ally_aerial_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ally_sentry_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ally_sentry_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ally_sentry_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ally_sentry_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ally_sentry_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ally_sentry_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
