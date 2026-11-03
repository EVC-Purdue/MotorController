#pragma once
#include "types.hpp"

CommutationStatus commutation_status_for_step(CommutationStep step);
CommutationStep commutation_update(CommutationState* state, uint8_t hall_code);
