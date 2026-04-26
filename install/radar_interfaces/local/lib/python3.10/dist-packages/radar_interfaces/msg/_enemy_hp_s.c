// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from radar_interfaces:msg/EnemyHP.idl
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
#include "radar_interfaces/msg/detail/enemy_hp__struct.h"
#include "radar_interfaces/msg/detail/enemy_hp__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool radar_interfaces__msg__enemy_hp__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("radar_interfaces.msg._enemy_hp.EnemyHP", full_classname_dest, 38) == 0);
  }
  radar_interfaces__msg__EnemyHP * ros_message = _ros_message;
  {  // hero_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "hero_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hero_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // engineer_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "engineer_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->engineer_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // infantry_3_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "infantry_3_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->infantry_3_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // infantry_4_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "infantry_4_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->infantry_4_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reserved
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserved = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sentry_hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "sentry_hp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sentry_hp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * radar_interfaces__msg__enemy_hp__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EnemyHP */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("radar_interfaces.msg._enemy_hp");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EnemyHP");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  radar_interfaces__msg__EnemyHP * ros_message = (radar_interfaces__msg__EnemyHP *)raw_ros_message;
  {  // hero_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hero_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hero_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engineer_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->engineer_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engineer_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // infantry_3_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->infantry_3_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "infantry_3_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // infantry_4_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->infantry_4_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "infantry_4_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserved
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reserved);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserved", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sentry_hp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sentry_hp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sentry_hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
