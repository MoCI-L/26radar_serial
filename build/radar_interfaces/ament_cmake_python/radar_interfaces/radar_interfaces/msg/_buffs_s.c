// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from radar_interfaces:msg/Buffs.idl
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
#include "radar_interfaces/msg/detail/buffs__struct.h"
#include "radar_interfaces/msg/detail/buffs__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool radar_interfaces__msg__buffs__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[34];
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
    assert(strncmp("radar_interfaces.msg._buffs.Buffs", full_classname_dest, 33) == 0);
  }
  radar_interfaces__msg__Buffs * ros_message = _ros_message;
  {  // hero_health_regen
    PyObject * field = PyObject_GetAttrString(_pymsg, "hero_health_regen");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hero_health_regen = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hero_cooling_boost
    PyObject * field = PyObject_GetAttrString(_pymsg, "hero_cooling_boost");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hero_cooling_boost = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hero_defense_boost
    PyObject * field = PyObject_GetAttrString(_pymsg, "hero_defense_boost");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hero_defense_boost = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hero_defense_debuff
    PyObject * field = PyObject_GetAttrString(_pymsg, "hero_defense_debuff");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hero_defense_debuff = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hero_attack_boost
    PyObject * field = PyObject_GetAttrString(_pymsg, "hero_attack_boost");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hero_attack_boost = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // engineer_health_regen
    PyObject * field = PyObject_GetAttrString(_pymsg, "engineer_health_regen");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->engineer_health_regen = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // engineer_cooling_boost
    PyObject * field = PyObject_GetAttrString(_pymsg, "engineer_cooling_boost");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->engineer_cooling_boost = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // engineer_defense_boost
    PyObject * field = PyObject_GetAttrString(_pymsg, "engineer_defense_boost");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->engineer_defense_boost = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // engineer_defense_debuff
    PyObject * field = PyObject_GetAttrString(_pymsg, "engineer_defense_debuff");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->engineer_defense_debuff = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // engineer_attack_boost
    PyObject * field = PyObject_GetAttrString(_pymsg, "engineer_attack_boost");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->engineer_attack_boost = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // infantry_3_health_regen
    PyObject * field = PyObject_GetAttrString(_pymsg, "infantry_3_health_regen");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->infantry_3_health_regen = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // infantry_3_cooling_boost
    PyObject * field = PyObject_GetAttrString(_pymsg, "infantry_3_cooling_boost");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->infantry_3_cooling_boost = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // infantry_3_defense_boost
    PyObject * field = PyObject_GetAttrString(_pymsg, "infantry_3_defense_boost");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->infantry_3_defense_boost = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // infantry_3_defense_debuff
    PyObject * field = PyObject_GetAttrString(_pymsg, "infantry_3_defense_debuff");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->infantry_3_defense_debuff = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // infantry_3_attack_boost
    PyObject * field = PyObject_GetAttrString(_pymsg, "infantry_3_attack_boost");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->infantry_3_attack_boost = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // infantry_4_health_regen
    PyObject * field = PyObject_GetAttrString(_pymsg, "infantry_4_health_regen");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->infantry_4_health_regen = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // infantry_4_cooling_boost
    PyObject * field = PyObject_GetAttrString(_pymsg, "infantry_4_cooling_boost");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->infantry_4_cooling_boost = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // infantry_4_defense_boost
    PyObject * field = PyObject_GetAttrString(_pymsg, "infantry_4_defense_boost");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->infantry_4_defense_boost = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // infantry_4_defense_debuff
    PyObject * field = PyObject_GetAttrString(_pymsg, "infantry_4_defense_debuff");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->infantry_4_defense_debuff = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // infantry_4_attack_boost
    PyObject * field = PyObject_GetAttrString(_pymsg, "infantry_4_attack_boost");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->infantry_4_attack_boost = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sentry_health_regen
    PyObject * field = PyObject_GetAttrString(_pymsg, "sentry_health_regen");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sentry_health_regen = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sentry_cooling_boost
    PyObject * field = PyObject_GetAttrString(_pymsg, "sentry_cooling_boost");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sentry_cooling_boost = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sentry_defense_boost
    PyObject * field = PyObject_GetAttrString(_pymsg, "sentry_defense_boost");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sentry_defense_boost = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sentry_defense_debuff
    PyObject * field = PyObject_GetAttrString(_pymsg, "sentry_defense_debuff");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sentry_defense_debuff = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sentry_attack_boost
    PyObject * field = PyObject_GetAttrString(_pymsg, "sentry_attack_boost");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sentry_attack_boost = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sentry_posture
    PyObject * field = PyObject_GetAttrString(_pymsg, "sentry_posture");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sentry_posture = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * radar_interfaces__msg__buffs__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Buffs */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("radar_interfaces.msg._buffs");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Buffs");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  radar_interfaces__msg__Buffs * ros_message = (radar_interfaces__msg__Buffs *)raw_ros_message;
  {  // hero_health_regen
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hero_health_regen);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hero_health_regen", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hero_cooling_boost
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hero_cooling_boost);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hero_cooling_boost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hero_defense_boost
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hero_defense_boost);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hero_defense_boost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hero_defense_debuff
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hero_defense_debuff);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hero_defense_debuff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hero_attack_boost
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hero_attack_boost);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hero_attack_boost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engineer_health_regen
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->engineer_health_regen);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engineer_health_regen", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engineer_cooling_boost
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->engineer_cooling_boost);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engineer_cooling_boost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engineer_defense_boost
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->engineer_defense_boost);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engineer_defense_boost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engineer_defense_debuff
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->engineer_defense_debuff);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engineer_defense_debuff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engineer_attack_boost
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->engineer_attack_boost);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engineer_attack_boost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // infantry_3_health_regen
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->infantry_3_health_regen);
    {
      int rc = PyObject_SetAttrString(_pymessage, "infantry_3_health_regen", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // infantry_3_cooling_boost
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->infantry_3_cooling_boost);
    {
      int rc = PyObject_SetAttrString(_pymessage, "infantry_3_cooling_boost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // infantry_3_defense_boost
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->infantry_3_defense_boost);
    {
      int rc = PyObject_SetAttrString(_pymessage, "infantry_3_defense_boost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // infantry_3_defense_debuff
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->infantry_3_defense_debuff);
    {
      int rc = PyObject_SetAttrString(_pymessage, "infantry_3_defense_debuff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // infantry_3_attack_boost
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->infantry_3_attack_boost);
    {
      int rc = PyObject_SetAttrString(_pymessage, "infantry_3_attack_boost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // infantry_4_health_regen
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->infantry_4_health_regen);
    {
      int rc = PyObject_SetAttrString(_pymessage, "infantry_4_health_regen", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // infantry_4_cooling_boost
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->infantry_4_cooling_boost);
    {
      int rc = PyObject_SetAttrString(_pymessage, "infantry_4_cooling_boost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // infantry_4_defense_boost
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->infantry_4_defense_boost);
    {
      int rc = PyObject_SetAttrString(_pymessage, "infantry_4_defense_boost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // infantry_4_defense_debuff
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->infantry_4_defense_debuff);
    {
      int rc = PyObject_SetAttrString(_pymessage, "infantry_4_defense_debuff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // infantry_4_attack_boost
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->infantry_4_attack_boost);
    {
      int rc = PyObject_SetAttrString(_pymessage, "infantry_4_attack_boost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sentry_health_regen
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sentry_health_regen);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sentry_health_regen", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sentry_cooling_boost
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sentry_cooling_boost);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sentry_cooling_boost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sentry_defense_boost
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sentry_defense_boost);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sentry_defense_boost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sentry_defense_debuff
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sentry_defense_debuff);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sentry_defense_debuff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sentry_attack_boost
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sentry_attack_boost);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sentry_attack_boost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sentry_posture
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sentry_posture);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sentry_posture", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
