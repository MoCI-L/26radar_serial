// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_interfaces:msg/EnemyAmmo.idl
// generated code does not contain a copyright notice
#include "radar_interfaces/msg/detail/enemy_ammo__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
radar_interfaces__msg__EnemyAmmo__init(radar_interfaces__msg__EnemyAmmo * msg)
{
  if (!msg) {
    return false;
  }
  // hero_ammo
  // infantry_3_ammo
  // infantry_4_ammo
  // aerial_ammo
  // sentry_ammo
  return true;
}

void
radar_interfaces__msg__EnemyAmmo__fini(radar_interfaces__msg__EnemyAmmo * msg)
{
  if (!msg) {
    return;
  }
  // hero_ammo
  // infantry_3_ammo
  // infantry_4_ammo
  // aerial_ammo
  // sentry_ammo
}

bool
radar_interfaces__msg__EnemyAmmo__are_equal(const radar_interfaces__msg__EnemyAmmo * lhs, const radar_interfaces__msg__EnemyAmmo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // hero_ammo
  if (lhs->hero_ammo != rhs->hero_ammo) {
    return false;
  }
  // infantry_3_ammo
  if (lhs->infantry_3_ammo != rhs->infantry_3_ammo) {
    return false;
  }
  // infantry_4_ammo
  if (lhs->infantry_4_ammo != rhs->infantry_4_ammo) {
    return false;
  }
  // aerial_ammo
  if (lhs->aerial_ammo != rhs->aerial_ammo) {
    return false;
  }
  // sentry_ammo
  if (lhs->sentry_ammo != rhs->sentry_ammo) {
    return false;
  }
  return true;
}

bool
radar_interfaces__msg__EnemyAmmo__copy(
  const radar_interfaces__msg__EnemyAmmo * input,
  radar_interfaces__msg__EnemyAmmo * output)
{
  if (!input || !output) {
    return false;
  }
  // hero_ammo
  output->hero_ammo = input->hero_ammo;
  // infantry_3_ammo
  output->infantry_3_ammo = input->infantry_3_ammo;
  // infantry_4_ammo
  output->infantry_4_ammo = input->infantry_4_ammo;
  // aerial_ammo
  output->aerial_ammo = input->aerial_ammo;
  // sentry_ammo
  output->sentry_ammo = input->sentry_ammo;
  return true;
}

radar_interfaces__msg__EnemyAmmo *
radar_interfaces__msg__EnemyAmmo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_interfaces__msg__EnemyAmmo * msg = (radar_interfaces__msg__EnemyAmmo *)allocator.allocate(sizeof(radar_interfaces__msg__EnemyAmmo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_interfaces__msg__EnemyAmmo));
  bool success = radar_interfaces__msg__EnemyAmmo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
radar_interfaces__msg__EnemyAmmo__destroy(radar_interfaces__msg__EnemyAmmo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    radar_interfaces__msg__EnemyAmmo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
radar_interfaces__msg__EnemyAmmo__Sequence__init(radar_interfaces__msg__EnemyAmmo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_interfaces__msg__EnemyAmmo * data = NULL;

  if (size) {
    data = (radar_interfaces__msg__EnemyAmmo *)allocator.zero_allocate(size, sizeof(radar_interfaces__msg__EnemyAmmo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_interfaces__msg__EnemyAmmo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_interfaces__msg__EnemyAmmo__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
radar_interfaces__msg__EnemyAmmo__Sequence__fini(radar_interfaces__msg__EnemyAmmo__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      radar_interfaces__msg__EnemyAmmo__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

radar_interfaces__msg__EnemyAmmo__Sequence *
radar_interfaces__msg__EnemyAmmo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_interfaces__msg__EnemyAmmo__Sequence * array = (radar_interfaces__msg__EnemyAmmo__Sequence *)allocator.allocate(sizeof(radar_interfaces__msg__EnemyAmmo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = radar_interfaces__msg__EnemyAmmo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
radar_interfaces__msg__EnemyAmmo__Sequence__destroy(radar_interfaces__msg__EnemyAmmo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    radar_interfaces__msg__EnemyAmmo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
radar_interfaces__msg__EnemyAmmo__Sequence__are_equal(const radar_interfaces__msg__EnemyAmmo__Sequence * lhs, const radar_interfaces__msg__EnemyAmmo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!radar_interfaces__msg__EnemyAmmo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
radar_interfaces__msg__EnemyAmmo__Sequence__copy(
  const radar_interfaces__msg__EnemyAmmo__Sequence * input,
  radar_interfaces__msg__EnemyAmmo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(radar_interfaces__msg__EnemyAmmo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    radar_interfaces__msg__EnemyAmmo * data =
      (radar_interfaces__msg__EnemyAmmo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!radar_interfaces__msg__EnemyAmmo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          radar_interfaces__msg__EnemyAmmo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!radar_interfaces__msg__EnemyAmmo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
