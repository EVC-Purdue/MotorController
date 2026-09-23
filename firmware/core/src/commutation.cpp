#include "commutation.hpp"

CommutationPattern commutation_pattern_for_step(CommutationStep step) {
    (void)step;
    // TODO
    return {};
}

CommutationStep commutation_update(CommutationState* state, uint8_t hall_code) {
    (void)hall_code;
    // TODO
    return state->step;
}
