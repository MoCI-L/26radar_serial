// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from radar_interfaces:msg/RadarMarkProgress.idl
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
#include "radar_interfaces/msg/detail/radar_mark_progress__struct.h"
#include "radar_interfaces/msg/detail/radar_mark_progress__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool radar_interfaces__msg__radar_mark_progress__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("radar_interfaces.msg._radar_mark_progress.RadarMarkProgress", full_classname_dest, 59) == 0);
  }
  radar_interfaces__msg__RadarMarkProgress * ros_message = _ros_message;
  {  // enemy_hero_marked
    PyObject * field = PyObject_GetAttrString(_pymsg, "enemy_hero_marked");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enemy_hero_marked = (Py_True == field);
    Py_DECREF(field);
  }
  {  // enemy_engineer_marked
    PyObject * field = PyObject_GetAttrString(_pymsg, "enemy_engineer_marked");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enemy_engineer_marked = (Py_True == field);
    Py_DECREF(field);
  }
  {  // enemy_infantry_3_marked
    PyObject * field = PyObject_GetAttrString(_pymsg, "enemy_infantry_3_marked");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enemy_infantry_3_marked = (Py_True == field);
    Py_DECREF(field);
  }
  {  // enemy_infantry_4_marked
    PyObject * field = PyObject_GetAttrString(_pymsg, "enemy_infantry_4_marked");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enemy_infantry_4_marked = (Py_True == field);
    Py_DECREF(field);
  }
  {  // enemy_aerial_marked
    PyObject * field = PyObject_GetAttrString(_pymsg, "enemy_aerial_marked");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enemy_aerial_marked = (Py_True == field);
    Py_DECREF(field);
  }
  {  // enemy_sentry_marked
    PyObject * field = PyObject_GetAttrString(_pymsg, "enemy_sentry_marked");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->enemy_sentry_marked = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ally_hero_marked
    PyObject * field = PyObject_GetAttrString(_pymsg, "ally_hero_marked");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ally_hero_marked = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ally_engineer_marked
    PyObject * field = PyObject_GetAttrString(_pymsg, "ally_engineer_marked");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ally_engineer_marked = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ally_infantry_3_marked
    PyObject * field = PyObject_GetAttrString(_pymsg, "ally_infantry_3_marked");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ally_infantry_3_marked = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ally_infantry_4_marked
    PyObject * field = PyObject_GetAttrString(_pymsg, "ally_infantry_4_marked");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ally_infantry_4_marked = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ally_aerial_marked
    PyObject * field = PyObject_GetAttrString(_pymsg, "ally_aerial_marked");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ally_aerial_marked = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ally_sentry_marked
    PyObject * field = PyObject_GetAttrString(_pymsg, "ally_sentry_marked");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ally_sentry_marked = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * radar_interfaces__msg__radar_mark_progress__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RadarMarkProgress */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("radar_interfaces.msg._radar_mark_progress");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RadarMarkProgress");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  radar_interfaces__msg__RadarMarkProgress * ros_message = (radar_interfaces__msg__RadarMarkProgress *)raw_ros_message;
  {  // enemy_hero_marked
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enemy_hero_marked ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enemy_hero_marked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enemy_engineer_marked
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enemy_engineer_marked ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enemy_engineer_marked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enemy_infantry_3_marked
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enemy_infantry_3_marked ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enemy_infantry_3_marked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enemy_infantry_4_marked
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enemy_infantry_4_marked ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enemy_infantry_4_marked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enemy_aerial_marked
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enemy_aerial_marked ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enemy_aerial_marked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enemy_sentry_marked
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->enemy_sentry_marked ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enemy_sentry_marked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ally_hero_marked
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ally_hero_marked ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ally_hero_marked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ally_engineer_marked
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ally_engineer_marked ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ally_engineer_marked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ally_infantry_3_marked
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ally_infantry_3_marked ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ally_infantry_3_marked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ally_infantry_4_marked
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ally_infantry_4_marked ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ally_infantry_4_marked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ally_aerial_marked
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ally_aerial_marked ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ally_aerial_marked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ally_sentry_marked
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ally_sentry_marked ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ally_sentry_marked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
