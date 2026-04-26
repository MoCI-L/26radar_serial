// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from radar_interfaces:msg/EnemyAmmo.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__ENEMY_AMMO__FUNCTIONS_H_
#define RADAR_INTERFACES__MSG__DETAIL__ENEMY_AMMO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "radar_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "radar_interfaces/msg/detail/enemy_ammo__struct.h"

/// Initialize msg/EnemyAmmo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * radar_interfaces__msg__EnemyAmmo
 * )) before or use
 * radar_interfaces__msg__EnemyAmmo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_interfaces
bool
radar_interfaces__msg__EnemyAmmo__init(radar_interfaces__msg__EnemyAmmo * msg);

/// Finalize msg/EnemyAmmo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_interfaces
void
radar_interfaces__msg__EnemyAmmo__fini(radar_interfaces__msg__EnemyAmmo * msg);

/// Create msg/EnemyAmmo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * radar_interfaces__msg__EnemyAmmo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_interfaces
radar_interfaces__msg__EnemyAmmo *
radar_interfaces__msg__EnemyAmmo__create();

/// Destroy msg/EnemyAmmo message.
/**
 * It calls
 * radar_interfaces__msg__EnemyAmmo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_interfaces
void
radar_interfaces__msg__EnemyAmmo__destroy(radar_interfaces__msg__EnemyAmmo * msg);

/// Check for msg/EnemyAmmo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_interfaces
bool
radar_interfaces__msg__EnemyAmmo__are_equal(const radar_interfaces__msg__EnemyAmmo * lhs, const radar_interfaces__msg__EnemyAmmo * rhs);

/// Copy a msg/EnemyAmmo message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_interfaces
bool
radar_interfaces__msg__EnemyAmmo__copy(
  const radar_interfaces__msg__EnemyAmmo * input,
  radar_interfaces__msg__EnemyAmmo * output);

/// Initialize array of msg/EnemyAmmo messages.
/**
 * It allocates the memory for the number of elements and calls
 * radar_interfaces__msg__EnemyAmmo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_interfaces
bool
radar_interfaces__msg__EnemyAmmo__Sequence__init(radar_interfaces__msg__EnemyAmmo__Sequence * array, size_t size);

/// Finalize array of msg/EnemyAmmo messages.
/**
 * It calls
 * radar_interfaces__msg__EnemyAmmo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_interfaces
void
radar_interfaces__msg__EnemyAmmo__Sequence__fini(radar_interfaces__msg__EnemyAmmo__Sequence * array);

/// Create array of msg/EnemyAmmo messages.
/**
 * It allocates the memory for the array and calls
 * radar_interfaces__msg__EnemyAmmo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_interfaces
radar_interfaces__msg__EnemyAmmo__Sequence *
radar_interfaces__msg__EnemyAmmo__Sequence__create(size_t size);

/// Destroy array of msg/EnemyAmmo messages.
/**
 * It calls
 * radar_interfaces__msg__EnemyAmmo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_interfaces
void
radar_interfaces__msg__EnemyAmmo__Sequence__destroy(radar_interfaces__msg__EnemyAmmo__Sequence * array);

/// Check for msg/EnemyAmmo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_interfaces
bool
radar_interfaces__msg__EnemyAmmo__Sequence__are_equal(const radar_interfaces__msg__EnemyAmmo__Sequence * lhs, const radar_interfaces__msg__EnemyAmmo__Sequence * rhs);

/// Copy an array of msg/EnemyAmmo messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_radar_interfaces
bool
radar_interfaces__msg__EnemyAmmo__Sequence__copy(
  const radar_interfaces__msg__EnemyAmmo__Sequence * input,
  radar_interfaces__msg__EnemyAmmo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RADAR_INTERFACES__MSG__DETAIL__ENEMY_AMMO__FUNCTIONS_H_
