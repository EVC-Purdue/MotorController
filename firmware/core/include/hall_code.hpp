#pragma once
#include "types.hpp"

#define MAX_NUM_HALL_CODES 8

// Determine experimentally
CommutationStep hall_to_commutation_map[MAX_NUM_HALL_CODES] = {
  COMMUTATION_STEP_COUNT, // invalid hall code
  COMMUTATION_STEP_0,
  COMMUTATION_STEP_3,
  COMMUTATION_STEP_1,
  COMMUTATION_STEP_0,
  COMMUTATION_STEP_2,
  COMMUTATION_STEP_4,
  COMMUTATION_STEP_COUNT, // invalid hall code
};

uint8_t from_sensors(bool hall1, bool hall2, bool hall3);
CommutationStep to_commutation(uint8_t hall_code);