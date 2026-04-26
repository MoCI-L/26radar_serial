// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from radar_interfaces:msg/EnemyAmmo.idl
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
#include "radar_interfaces/msg/detail/enemy_ammo__struct.h"
#include "radar_interfaces/msg/detail/enemy_ammo__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool radar_interfaces__msg__enemy_ammo__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("radar_interfaces.msg._enemy_ammo.EnemyAmmo", full_classname_dest, 42) == 0);
  }
  radar_interfaces__msg__EnemyAmmo * ros_message = _ros_message;
  {  // hero_ammo
    PyObject * field = PyObject_GetAttrString(_pymsg, "hero_ammo");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hero_ammo = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // infantry_3_ammo
    PyObject * field = PyObject_GetAttrString(_pymsg, "infantry_3_ammo");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->infantry_3_ammo = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // infantry_4_ammo
    PyObject * field = PyObject_GetAttrString(_pymsg, "infantry_4_ammo");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->infantry_4_ammo = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aerial_ammo
    PyObject * field = PyObject_GetAttrString(_pymsg, "aerial_ammo");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aerial_ammo = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sentry_ammo
    PyObject * field = PyObject_GetAttrString(_pymsg, "sentry_ammo");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sentry_ammo = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * radar_interfaces__msg__enemy_ammo__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EnemyAmmo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("radar_interfaces.msg._enemy_ammo");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EnemyAmmo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  radar_interfaces__msg__EnemyAmmo * ros_message = (radar_interfaces__msg__EnemyAmmo *)raw_ros_message;
  {  // hero_ammo
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hero_ammo);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hero_ammo", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // infantry_3_ammo
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->infantry_3_ammo);
    {
      int rc = PyObject_SetAttrString(_pymessage, "infantry_3_ammo", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // infantry_4_ammo
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->infantry_4_ammo);
    {
      int rc = PyObject_SetAttrString(_pymessage, "infantry_4_ammo", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aerial_ammo
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aerial_ammo);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aerial_ammo", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sentry_ammo
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sentry_ammo);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sentry_ammo", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
