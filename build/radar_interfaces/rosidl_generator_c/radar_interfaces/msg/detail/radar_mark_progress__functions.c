// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_interfaces:msg/RadarMarkProgress.idl
// generated code does not contain a copyright notice
#include "radar_interfaces/msg/detail/radar_mark_progress__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
radar_interfaces__msg__RadarMarkProgress__init(radar_interfaces__msg__RadarMarkProgress * msg)
{
  if (!msg) {
    return false;
  }
  // enemy_hero_marked
  // enemy_engineer_marked
  // enemy_infantry_3_marked
  // enemy_infantry_4_marked
  // enemy_aerial_marked
  // enemy_sentry_marked
  // ally_hero_marked
  // ally_engineer_marked
  // ally_infantry_3_marked
  // ally_infantry_4_marked
  // ally_aerial_marked
  // ally_sentry_marked
  return true;
}

void
radar_interfaces__msg__RadarMarkProgress__fini(radar_interfaces__msg__RadarMarkProgress * msg)
{
  if (!msg) {
    return;
  }
  // enemy_hero_marked
  // enemy_engineer_marked
  // enemy_infantry_3_marked
  // enemy_infantry_4_marked
  // enemy_aerial_marked
  // enemy_sentry_marked
  // ally_hero_marked
  // ally_engineer_marked
  // ally_infantry_3_marked
  // ally_infantry_4_marked
  // ally_aerial_marked
  // ally_sentry_marked
}

bool
radar_interfaces__msg__RadarMarkProgress__are_equal(const radar_interfaces__msg__RadarMarkProgress * lhs, const radar_interfaces__msg__RadarMarkProgress * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // enemy_hero_marked
  if (lhs->enemy_hero_marked != rhs->enemy_hero_marked) {
    return false;
  }
  // enemy_engineer_marked
  if (lhs->enemy_engineer_marked != rhs->enemy_engineer_marked) {
    return false;
  }
  // enemy_infantry_3_marked
  if (lhs->enemy_infantry_3_marked != rhs->enemy_infantry_3_marked) {
    return false;
  }
  // enemy_infantry_4_marked
  if (lhs->enemy_infantry_4_marked != rhs->enemy_infantry_4_marked) {
    return false;
  }
  // enemy_aerial_marked
  if (lhs->enemy_aerial_marked != rhs->enemy_aerial_marked) {
    return false;
  }
  // enemy_sentry_marked
  if (lhs->enemy_sentry_marked != rhs->enemy_sentry_marked) {
    return false;
  }
  // ally_hero_marked
  if (lhs->ally_hero_marked != rhs->ally_hero_marked) {
    return false;
  }
  // ally_engineer_marked
  if (lhs->ally_engineer_marked != rhs->ally_engineer_marked) {
    return false;
  }
  // ally_infantry_3_marked
  if (lhs->ally_infantry_3_marked != rhs->ally_infantry_3_marked) {
    return false;
  }
  // ally_infantry_4_marked
  if (lhs->ally_infantry_4_marked != rhs->ally_infantry_4_marked) {
    return false;
  }
  // ally_aerial_marked
  if (lhs->ally_aerial_marked != rhs->ally_aerial_marked) {
    return false;
  }
  // ally_sentry_marked
  if (lhs->ally_sentry_marked != rhs->ally_sentry_marked) {
    return false;
  }
  return true;
}

bool
radar_interfaces__msg__RadarMarkProgress__copy(
  const radar_interfaces__msg__RadarMarkProgress * input,
  radar_interfaces__msg__RadarMarkProgress * output)
{
  if (!input || !output) {
    return false;
  }
  // enemy_hero_marked
  output->enemy_hero_marked = input->enemy_hero_marked;
  // enemy_engineer_marked
  output->enemy_engineer_marked = input->enemy_engineer_marked;
  // enemy_infantry_3_marked
  output->enemy_infantry_3_marked = input->enemy_infantry_3_marked;
  // enemy_infantry_4_marked
  output->enemy_infantry_4_marked = input->enemy_infantry_4_marked;
  // enemy_aerial_marked
  output->enemy_aerial_marked = input->enemy_aerial_marked;
  // enemy_sentry_marked
  output->enemy_sentry_marked = input->enemy_sentry_marked;
  // ally_hero_marked
  output->ally_hero_marked = input->ally_hero_marked;
  // ally_engineer_marked
  output->ally_engineer_marked = input->ally_engineer_marked;
  // ally_infantry_3_marked
  output->ally_infantry_3_marked = input->ally_infantry_3_marked;
  // ally_infantry_4_marked
  output->ally_infantry_4_marked = input->ally_infantry_4_marked;
  // ally_aerial_marked
  output->ally_aerial_marked = input->ally_aerial_marked;
  // ally_sentry_marked
  output->ally_sentry_marked = input->ally_sentry_marked;
  return true;
}

radar_interfaces__msg__RadarMarkProgress *
radar_interfaces__msg__RadarMarkProgress__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_interfaces__msg__RadarMarkProgress * msg = (radar_interfaces__msg__RadarMarkProgress *)allocator.allocate(sizeof(radar_interfaces__msg__RadarMarkProgress), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_interfaces__msg__RadarMarkProgress));
  bool success = radar_interfaces__msg__RadarMarkProgress__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
radar_interfaces__msg__RadarMarkProgress__destroy(radar_interfaces__msg__RadarMarkProgress * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    radar_interfaces__msg__RadarMarkProgress__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
radar_interfaces__msg__RadarMarkProgress__Sequence__init(radar_interfaces__msg__RadarMarkProgress__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_interfaces__msg__RadarMarkProgress * data = NULL;

  if (size) {
    data = (radar_interfaces__msg__RadarMarkProgress *)allocator.zero_allocate(size, sizeof(radar_interfaces__msg__RadarMarkProgress), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_interfaces__msg__RadarMarkProgress__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_interfaces__msg__RadarMarkProgress__fini(&data[i - 1]);
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
radar_interfaces__msg__RadarMarkProgress__Sequence__fini(radar_interfaces__msg__RadarMarkProgress__Sequence * array)
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
      radar_interfaces__msg__RadarMarkProgress__fini(&array->data[i]);
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

radar_interfaces__msg__RadarMarkProgress__Sequence *
radar_interfaces__msg__RadarMarkProgress__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_interfaces__msg__RadarMarkProgress__Sequence * array = (radar_interfaces__msg__RadarMarkProgress__Sequence *)allocator.allocate(sizeof(radar_interfaces__msg__RadarMarkProgress__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = radar_interfaces__msg__RadarMarkProgress__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
radar_interfaces__msg__RadarMarkProgress__Sequence__destroy(radar_interfaces__msg__RadarMarkProgress__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    radar_interfaces__msg__RadarMarkProgress__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
radar_interfaces__msg__RadarMarkProgress__Sequence__are_equal(const radar_interfaces__msg__RadarMarkProgress__Sequence * lhs, const radar_interfaces__msg__RadarMarkProgress__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!radar_interfaces__msg__RadarMarkProgress__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
radar_interfaces__msg__RadarMarkProgress__Sequence__copy(
  const radar_interfaces__msg__RadarMarkProgress__Sequence * input,
  radar_interfaces__msg__RadarMarkProgress__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(radar_interfaces__msg__RadarMarkProgress);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    radar_interfaces__msg__RadarMarkProgress * data =
      (radar_interfaces__msg__RadarMarkProgress *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!radar_interfaces__msg__RadarMarkProgress__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          radar_interfaces__msg__RadarMarkProgress__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!radar_interfaces__msg__RadarMarkProgress__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
