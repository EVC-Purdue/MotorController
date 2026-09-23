#pragma once
#include "types.hpp"

typedef struct {
    CommutationStep step;
    Direction direction;
} CommutationState;

CommutationPattern commutation_pattern_for_step(CommutationStep step);
CommutationStep commutation_update(CommutationState* state, uint8_t hall_code);
