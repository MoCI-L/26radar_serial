// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_interfaces:msg/EnemyPosition.idl
// generated code does not contain a copyright notice
#include "radar_interfaces/msg/detail/enemy_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
radar_interfaces__msg__EnemyPosition__init(radar_interfaces__msg__EnemyPosition * msg)
{
  if (!msg) {
    return false;
  }
  // hero_x
  // hero_y
  // engineer_x
  // engineer_y
  // infantry_3_x
  // infantry_3_y
  // infantry_4_x
  // infantry_4_y
  // aerial_x
  // aerial_y
  // sentry_x
  // sentry_y
  return true;
}

void
radar_interfaces__msg__EnemyPosition__fini(radar_interfaces__msg__EnemyPosition * msg)
{
  if (!msg) {
    return;
  }
  // hero_x
  // hero_y
  // engineer_x
  // engineer_y
  // infantry_3_x
  // infantry_3_y
  // infantry_4_x
  // infantry_4_y
  // aerial_x
  // aerial_y
  // sentry_x
  // sentry_y
}

bool
radar_interfaces__msg__EnemyPosition__are_equal(const radar_interfaces__msg__EnemyPosition * lhs, const radar_interfaces__msg__EnemyPosition * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // hero_x
  if (lhs->hero_x != rhs->hero_x) {
    return false;
  }
  // hero_y
  if (lhs->hero_y != rhs->hero_y) {
    return false;
  }
  // engineer_x
  if (lhs->engineer_x != rhs->engineer_x) {
    return false;
  }
  // engineer_y
  if (lhs->engineer_y != rhs->engineer_y) {
    return false;
  }
  // infantry_3_x
  if (lhs->infantry_3_x != rhs->infantry_3_x) {
    return false;
  }
  // infantry_3_y
  if (lhs->infantry_3_y != rhs->infantry_3_y) {
    return false;
  }
  // infantry_4_x
  if (lhs->infantry_4_x != rhs->infantry_4_x) {
    return false;
  }
  // infantry_4_y
  if (lhs->infantry_4_y != rhs->infantry_4_y) {
    return false;
  }
  // aerial_x
  if (lhs->aerial_x != rhs->aerial_x) {
    return false;
  }
  // aerial_y
  if (lhs->aerial_y != rhs->aerial_y) {
    return false;
  }
  // sentry_x
  if (lhs->sentry_x != rhs->sentry_x) {
    return false;
  }
  // sentry_y
  if (lhs->sentry_y != rhs->sentry_y) {
    return false;
  }
  return true;
}

bool
radar_interfaces__msg__EnemyPosition__copy(
  const radar_interfaces__msg__EnemyPosition * input,
  radar_interfaces__msg__EnemyPosition * output)
{
  if (!input || !output) {
    return false;
  }
  // hero_x
  output->hero_x = input->hero_x;
  // hero_y
  output->hero_y = input->hero_y;
  // engineer_x
  output->engineer_x = input->engineer_x;
  // engineer_y
  output->engineer_y = input->engineer_y;
  // infantry_3_x
  output->infantry_3_x = input->infantry_3_x;
  // infantry_3_y
  output->infantry_3_y = input->infantry_3_y;
  // infantry_4_x
  output->infantry_4_x = input->infantry_4_x;
  // infantry_4_y
  output->infantry_4_y = input->infantry_4_y;
  // aerial_x
  output->aerial_x = input->aerial_x;
  // aerial_y
  output->aerial_y = input->aerial_y;
  // sentry_x
  output->sentry_x = input->sentry_x;
  // sentry_y
  output->sentry_y = input->sentry_y;
  return true;
}

radar_interfaces__msg__EnemyPosition *
radar_interfaces__msg__EnemyPosition__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_interfaces__msg__EnemyPosition * msg = (radar_interfaces__msg__EnemyPosition *)allocator.allocate(sizeof(radar_interfaces__msg__EnemyPosition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_interfaces__msg__EnemyPosition));
  bool success = radar_interfaces__msg__EnemyPosition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
radar_interfaces__msg__EnemyPosition__destroy(radar_interfaces__msg__EnemyPosition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    radar_interfaces__msg__EnemyPosition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
radar_interfaces__msg__EnemyPosition__Sequence__init(radar_interfaces__msg__EnemyPosition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_interfaces__msg__EnemyPosition * data = NULL;

  if (size) {
    data = (radar_interfaces__msg__EnemyPosition *)allocator.zero_allocate(size, sizeof(radar_interfaces__msg__EnemyPosition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_interfaces__msg__EnemyPosition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_interfaces__msg__EnemyPosition__fini(&data[i - 1]);
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
radar_interfaces__msg__EnemyPosition__Sequence__fini(radar_interfaces__msg__EnemyPosition__Sequence * array)
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
      radar_interfaces__msg__EnemyPosition__fini(&array->data[i]);
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

radar_interfaces__msg__EnemyPosition__Sequence *
radar_interfaces__msg__EnemyPosition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_interfaces__msg__EnemyPosition__Sequence * array = (radar_interfaces__msg__EnemyPosition__Sequence *)allocator.allocate(sizeof(radar_interfaces__msg__EnemyPosition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = radar_interfaces__msg__EnemyPosition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
radar_interfaces__msg__EnemyPosition__Sequence__destroy(radar_interfaces__msg__EnemyPosition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    radar_interfaces__msg__EnemyPosition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
radar_interfaces__msg__EnemyPosition__Sequence__are_equal(const radar_interfaces__msg__EnemyPosition__Sequence * lhs, const radar_interfaces__msg__EnemyPosition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!radar_interfaces__msg__EnemyPosition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
radar_interfaces__msg__EnemyPosition__Sequence__copy(
  const radar_interfaces__msg__EnemyPosition__Sequence * input,
  radar_interfaces__msg__EnemyPosition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(radar_interfaces__msg__EnemyPosition);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    radar_interfaces__msg__EnemyPosition * data =
      (radar_interfaces__msg__EnemyPosition *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!radar_interfaces__msg__EnemyPosition__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          radar_interfaces__msg__EnemyPosition__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!radar_interfaces__msg__EnemyPosition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
