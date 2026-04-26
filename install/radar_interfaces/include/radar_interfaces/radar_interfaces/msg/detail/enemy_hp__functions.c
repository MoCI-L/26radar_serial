// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_interfaces:msg/EnemyHP.idl
// generated code does not contain a copyright notice
#include "radar_interfaces/msg/detail/enemy_hp__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
radar_interfaces__msg__EnemyHP__init(radar_interfaces__msg__EnemyHP * msg)
{
  if (!msg) {
    return false;
  }
  // hero_hp
  // engineer_hp
  // infantry_3_hp
  // infantry_4_hp
  // reserved
  // sentry_hp
  return true;
}

void
radar_interfaces__msg__EnemyHP__fini(radar_interfaces__msg__EnemyHP * msg)
{
  if (!msg) {
    return;
  }
  // hero_hp
  // engineer_hp
  // infantry_3_hp
  // infantry_4_hp
  // reserved
  // sentry_hp
}

bool
radar_interfaces__msg__EnemyHP__are_equal(const radar_interfaces__msg__EnemyHP * lhs, const radar_interfaces__msg__EnemyHP * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // hero_hp
  if (lhs->hero_hp != rhs->hero_hp) {
    return false;
  }
  // engineer_hp
  if (lhs->engineer_hp != rhs->engineer_hp) {
    return false;
  }
  // infantry_3_hp
  if (lhs->infantry_3_hp != rhs->infantry_3_hp) {
    return false;
  }
  // infantry_4_hp
  if (lhs->infantry_4_hp != rhs->infantry_4_hp) {
    return false;
  }
  // reserved
  if (lhs->reserved != rhs->reserved) {
    return false;
  }
  // sentry_hp
  if (lhs->sentry_hp != rhs->sentry_hp) {
    return false;
  }
  return true;
}

bool
radar_interfaces__msg__EnemyHP__copy(
  const radar_interfaces__msg__EnemyHP * input,
  radar_interfaces__msg__EnemyHP * output)
{
  if (!input || !output) {
    return false;
  }
  // hero_hp
  output->hero_hp = input->hero_hp;
  // engineer_hp
  output->engineer_hp = input->engineer_hp;
  // infantry_3_hp
  output->infantry_3_hp = input->infantry_3_hp;
  // infantry_4_hp
  output->infantry_4_hp = input->infantry_4_hp;
  // reserved
  output->reserved = input->reserved;
  // sentry_hp
  output->sentry_hp = input->sentry_hp;
  return true;
}

radar_interfaces__msg__EnemyHP *
radar_interfaces__msg__EnemyHP__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_interfaces__msg__EnemyHP * msg = (radar_interfaces__msg__EnemyHP *)allocator.allocate(sizeof(radar_interfaces__msg__EnemyHP), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_interfaces__msg__EnemyHP));
  bool success = radar_interfaces__msg__EnemyHP__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
radar_interfaces__msg__EnemyHP__destroy(radar_interfaces__msg__EnemyHP * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    radar_interfaces__msg__EnemyHP__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
radar_interfaces__msg__EnemyHP__Sequence__init(radar_interfaces__msg__EnemyHP__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_interfaces__msg__EnemyHP * data = NULL;

  if (size) {
    data = (radar_interfaces__msg__EnemyHP *)allocator.zero_allocate(size, sizeof(radar_interfaces__msg__EnemyHP), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_interfaces__msg__EnemyHP__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_interfaces__msg__EnemyHP__fini(&data[i - 1]);
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
radar_interfaces__msg__EnemyHP__Sequence__fini(radar_interfaces__msg__EnemyHP__Sequence * array)
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
      radar_interfaces__msg__EnemyHP__fini(&array->data[i]);
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

radar_interfaces__msg__EnemyHP__Sequence *
radar_interfaces__msg__EnemyHP__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_interfaces__msg__EnemyHP__Sequence * array = (radar_interfaces__msg__EnemyHP__Sequence *)allocator.allocate(sizeof(radar_interfaces__msg__EnemyHP__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = radar_interfaces__msg__EnemyHP__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
radar_interfaces__msg__EnemyHP__Sequence__destroy(radar_interfaces__msg__EnemyHP__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    radar_interfaces__msg__EnemyHP__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
radar_interfaces__msg__EnemyHP__Sequence__are_equal(const radar_interfaces__msg__EnemyHP__Sequence * lhs, const radar_interfaces__msg__EnemyHP__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!radar_interfaces__msg__EnemyHP__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
radar_interfaces__msg__EnemyHP__Sequence__copy(
  const radar_interfaces__msg__EnemyHP__Sequence * input,
  radar_interfaces__msg__EnemyHP__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(radar_interfaces__msg__EnemyHP);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    radar_interfaces__msg__EnemyHP * data =
      (radar_interfaces__msg__EnemyHP *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!radar_interfaces__msg__EnemyHP__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          radar_interfaces__msg__EnemyHP__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!radar_interfaces__msg__EnemyHP__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
