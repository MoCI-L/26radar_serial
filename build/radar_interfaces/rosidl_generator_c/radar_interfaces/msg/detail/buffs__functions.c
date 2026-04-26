// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_interfaces:msg/Buffs.idl
// generated code does not contain a copyright notice
#include "radar_interfaces/msg/detail/buffs__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
radar_interfaces__msg__Buffs__init(radar_interfaces__msg__Buffs * msg)
{
  if (!msg) {
    return false;
  }
  // hero_health_regen
  // hero_cooling_boost
  // hero_defense_boost
  // hero_defense_debuff
  // hero_attack_boost
  // engineer_health_regen
  // engineer_cooling_boost
  // engineer_defense_boost
  // engineer_defense_debuff
  // engineer_attack_boost
  // infantry_3_health_regen
  // infantry_3_cooling_boost
  // infantry_3_defense_boost
  // infantry_3_defense_debuff
  // infantry_3_attack_boost
  // infantry_4_health_regen
  // infantry_4_cooling_boost
  // infantry_4_defense_boost
  // infantry_4_defense_debuff
  // infantry_4_attack_boost
  // sentry_health_regen
  // sentry_cooling_boost
  // sentry_defense_boost
  // sentry_defense_debuff
  // sentry_attack_boost
  // sentry_posture
  return true;
}

void
radar_interfaces__msg__Buffs__fini(radar_interfaces__msg__Buffs * msg)
{
  if (!msg) {
    return;
  }
  // hero_health_regen
  // hero_cooling_boost
  // hero_defense_boost
  // hero_defense_debuff
  // hero_attack_boost
  // engineer_health_regen
  // engineer_cooling_boost
  // engineer_defense_boost
  // engineer_defense_debuff
  // engineer_attack_boost
  // infantry_3_health_regen
  // infantry_3_cooling_boost
  // infantry_3_defense_boost
  // infantry_3_defense_debuff
  // infantry_3_attack_boost
  // infantry_4_health_regen
  // infantry_4_cooling_boost
  // infantry_4_defense_boost
  // infantry_4_defense_debuff
  // infantry_4_attack_boost
  // sentry_health_regen
  // sentry_cooling_boost
  // sentry_defense_boost
  // sentry_defense_debuff
  // sentry_attack_boost
  // sentry_posture
}

bool
radar_interfaces__msg__Buffs__are_equal(const radar_interfaces__msg__Buffs * lhs, const radar_interfaces__msg__Buffs * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // hero_health_regen
  if (lhs->hero_health_regen != rhs->hero_health_regen) {
    return false;
  }
  // hero_cooling_boost
  if (lhs->hero_cooling_boost != rhs->hero_cooling_boost) {
    return false;
  }
  // hero_defense_boost
  if (lhs->hero_defense_boost != rhs->hero_defense_boost) {
    return false;
  }
  // hero_defense_debuff
  if (lhs->hero_defense_debuff != rhs->hero_defense_debuff) {
    return false;
  }
  // hero_attack_boost
  if (lhs->hero_attack_boost != rhs->hero_attack_boost) {
    return false;
  }
  // engineer_health_regen
  if (lhs->engineer_health_regen != rhs->engineer_health_regen) {
    return false;
  }
  // engineer_cooling_boost
  if (lhs->engineer_cooling_boost != rhs->engineer_cooling_boost) {
    return false;
  }
  // engineer_defense_boost
  if (lhs->engineer_defense_boost != rhs->engineer_defense_boost) {
    return false;
  }
  // engineer_defense_debuff
  if (lhs->engineer_defense_debuff != rhs->engineer_defense_debuff) {
    return false;
  }
  // engineer_attack_boost
  if (lhs->engineer_attack_boost != rhs->engineer_attack_boost) {
    return false;
  }
  // infantry_3_health_regen
  if (lhs->infantry_3_health_regen != rhs->infantry_3_health_regen) {
    return false;
  }
  // infantry_3_cooling_boost
  if (lhs->infantry_3_cooling_boost != rhs->infantry_3_cooling_boost) {
    return false;
  }
  // infantry_3_defense_boost
  if (lhs->infantry_3_defense_boost != rhs->infantry_3_defense_boost) {
    return false;
  }
  // infantry_3_defense_debuff
  if (lhs->infantry_3_defense_debuff != rhs->infantry_3_defense_debuff) {
    return false;
  }
  // infantry_3_attack_boost
  if (lhs->infantry_3_attack_boost != rhs->infantry_3_attack_boost) {
    return false;
  }
  // infantry_4_health_regen
  if (lhs->infantry_4_health_regen != rhs->infantry_4_health_regen) {
    return false;
  }
  // infantry_4_cooling_boost
  if (lhs->infantry_4_cooling_boost != rhs->infantry_4_cooling_boost) {
    return false;
  }
  // infantry_4_defense_boost
  if (lhs->infantry_4_defense_boost != rhs->infantry_4_defense_boost) {
    return false;
  }
  // infantry_4_defense_debuff
  if (lhs->infantry_4_defense_debuff != rhs->infantry_4_defense_debuff) {
    return false;
  }
  // infantry_4_attack_boost
  if (lhs->infantry_4_attack_boost != rhs->infantry_4_attack_boost) {
    return false;
  }
  // sentry_health_regen
  if (lhs->sentry_health_regen != rhs->sentry_health_regen) {
    return false;
  }
  // sentry_cooling_boost
  if (lhs->sentry_cooling_boost != rhs->sentry_cooling_boost) {
    return false;
  }
  // sentry_defense_boost
  if (lhs->sentry_defense_boost != rhs->sentry_defense_boost) {
    return false;
  }
  // sentry_defense_debuff
  if (lhs->sentry_defense_debuff != rhs->sentry_defense_debuff) {
    return false;
  }
  // sentry_attack_boost
  if (lhs->sentry_attack_boost != rhs->sentry_attack_boost) {
    return false;
  }
  // sentry_posture
  if (lhs->sentry_posture != rhs->sentry_posture) {
    return false;
  }
  return true;
}

bool
radar_interfaces__msg__Buffs__copy(
  const radar_interfaces__msg__Buffs * input,
  radar_interfaces__msg__Buffs * output)
{
  if (!input || !output) {
    return false;
  }
  // hero_health_regen
  output->hero_health_regen = input->hero_health_regen;
  // hero_cooling_boost
  output->hero_cooling_boost = input->hero_cooling_boost;
  // hero_defense_boost
  output->hero_defense_boost = input->hero_defense_boost;
  // hero_defense_debuff
  output->hero_defense_debuff = input->hero_defense_debuff;
  // hero_attack_boost
  output->hero_attack_boost = input->hero_attack_boost;
  // engineer_health_regen
  output->engineer_health_regen = input->engineer_health_regen;
  // engineer_cooling_boost
  output->engineer_cooling_boost = input->engineer_cooling_boost;
  // engineer_defense_boost
  output->engineer_defense_boost = input->engineer_defense_boost;
  // engineer_defense_debuff
  output->engineer_defense_debuff = input->engineer_defense_debuff;
  // engineer_attack_boost
  output->engineer_attack_boost = input->engineer_attack_boost;
  // infantry_3_health_regen
  output->infantry_3_health_regen = input->infantry_3_health_regen;
  // infantry_3_cooling_boost
  output->infantry_3_cooling_boost = input->infantry_3_cooling_boost;
  // infantry_3_defense_boost
  output->infantry_3_defense_boost = input->infantry_3_defense_boost;
  // infantry_3_defense_debuff
  output->infantry_3_defense_debuff = input->infantry_3_defense_debuff;
  // infantry_3_attack_boost
  output->infantry_3_attack_boost = input->infantry_3_attack_boost;
  // infantry_4_health_regen
  output->infantry_4_health_regen = input->infantry_4_health_regen;
  // infantry_4_cooling_boost
  output->infantry_4_cooling_boost = input->infantry_4_cooling_boost;
  // infantry_4_defense_boost
  output->infantry_4_defense_boost = input->infantry_4_defense_boost;
  // infantry_4_defense_debuff
  output->infantry_4_defense_debuff = input->infantry_4_defense_debuff;
  // infantry_4_attack_boost
  output->infantry_4_attack_boost = input->infantry_4_attack_boost;
  // sentry_health_regen
  output->sentry_health_regen = input->sentry_health_regen;
  // sentry_cooling_boost
  output->sentry_cooling_boost = input->sentry_cooling_boost;
  // sentry_defense_boost
  output->sentry_defense_boost = input->sentry_defense_boost;
  // sentry_defense_debuff
  output->sentry_defense_debuff = input->sentry_defense_debuff;
  // sentry_attack_boost
  output->sentry_attack_boost = input->sentry_attack_boost;
  // sentry_posture
  output->sentry_posture = input->sentry_posture;
  return true;
}

radar_interfaces__msg__Buffs *
radar_interfaces__msg__Buffs__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_interfaces__msg__Buffs * msg = (radar_interfaces__msg__Buffs *)allocator.allocate(sizeof(radar_interfaces__msg__Buffs), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_interfaces__msg__Buffs));
  bool success = radar_interfaces__msg__Buffs__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
radar_interfaces__msg__Buffs__destroy(radar_interfaces__msg__Buffs * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    radar_interfaces__msg__Buffs__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
radar_interfaces__msg__Buffs__Sequence__init(radar_interfaces__msg__Buffs__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_interfaces__msg__Buffs * data = NULL;

  if (size) {
    data = (radar_interfaces__msg__Buffs *)allocator.zero_allocate(size, sizeof(radar_interfaces__msg__Buffs), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_interfaces__msg__Buffs__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_interfaces__msg__Buffs__fini(&data[i - 1]);
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
radar_interfaces__msg__Buffs__Sequence__fini(radar_interfaces__msg__Buffs__Sequence * array)
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
      radar_interfaces__msg__Buffs__fini(&array->data[i]);
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

radar_interfaces__msg__Buffs__Sequence *
radar_interfaces__msg__Buffs__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_interfaces__msg__Buffs__Sequence * array = (radar_interfaces__msg__Buffs__Sequence *)allocator.allocate(sizeof(radar_interfaces__msg__Buffs__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = radar_interfaces__msg__Buffs__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
radar_interfaces__msg__Buffs__Sequence__destroy(radar_interfaces__msg__Buffs__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    radar_interfaces__msg__Buffs__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
radar_interfaces__msg__Buffs__Sequence__are_equal(const radar_interfaces__msg__Buffs__Sequence * lhs, const radar_interfaces__msg__Buffs__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!radar_interfaces__msg__Buffs__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
radar_interfaces__msg__Buffs__Sequence__copy(
  const radar_interfaces__msg__Buffs__Sequence * input,
  radar_interfaces__msg__Buffs__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(radar_interfaces__msg__Buffs);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    radar_interfaces__msg__Buffs * data =
      (radar_interfaces__msg__Buffs *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!radar_interfaces__msg__Buffs__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          radar_interfaces__msg__Buffs__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!radar_interfaces__msg__Buffs__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
