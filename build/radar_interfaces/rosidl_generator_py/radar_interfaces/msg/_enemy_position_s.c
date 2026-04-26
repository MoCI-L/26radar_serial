// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from radar_interfaces:msg/EnemyPosition.idl
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
#include "radar_interfaces/msg/detail/enemy_position__struct.h"
#include "radar_interfaces/msg/detail/enemy_position__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool radar_interfaces__msg__enemy_position__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("radar_interfaces.msg._enemy_position.EnemyPosition", full_classname_dest, 50) == 0);
  }
  radar_interfaces__msg__EnemyPosition * ros_message = _ros_message;
  {  // hero_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "hero_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hero_x = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hero_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "hero_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hero_y = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // engineer_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "engineer_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->engineer_x = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // engineer_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "engineer_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->engineer_y = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // infantry_3_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "infantry_3_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->infantry_3_x = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // infantry_3_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "infantry_3_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->infantry_3_y = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // infantry_4_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "infantry_4_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->infantry_4_x = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // infantry_4_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "infantry_4_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->infantry_4_y = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aerial_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "aerial_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aerial_x = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aerial_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "aerial_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aerial_y = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sentry_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "sentry_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sentry_x = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sentry_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "sentry_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sentry_y = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * radar_interfaces__msg__enemy_position__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EnemyPosition */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("radar_interfaces.msg._enemy_position");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EnemyPosition");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  radar_interfaces__msg__EnemyPosition * ros_message = (radar_interfaces__msg__EnemyPosition *)raw_ros_message;
  {  // hero_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hero_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hero_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hero_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hero_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hero_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engineer_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->engineer_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engineer_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engineer_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->engineer_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engineer_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // infantry_3_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->infantry_3_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "infantry_3_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // infantry_3_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->infantry_3_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "infantry_3_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // infantry_4_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->infantry_4_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "infantry_4_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // infantry_4_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->infantry_4_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "infantry_4_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aerial_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aerial_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aerial_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aerial_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aerial_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aerial_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sentry_x
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sentry_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sentry_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sentry_y
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sentry_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sentry_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
