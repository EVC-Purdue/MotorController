#include "doctest/doctest.h"
#include "speed_control.hpp"

TEST_CASE("speed_controller_update returns 0.0 (stub behavior)") {
    SpeedControllerState state{};
    float duty = speed_controller_update(&state, 100.0f, 0.0f, 0.001f);
    CHECK(duty == doctest::Approx(0.0f));
}
