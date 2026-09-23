#include "doctest/doctest.h"
#include "commutation.hpp"

TEST_CASE("commutation_update returns current step unchanged (stub behavior)") {
    CommutationState state{};
    state.step = COMMUTATION_STEP_2;
    CommutationStep result = commutation_update(&state, 0);
    CHECK(result == COMMUTATION_STEP_2);
}
