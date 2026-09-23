#include "doctest/doctest.h"
#include "motor_controller.hpp"

TEST_CASE("motor_controller functions are callable without crashing (stub behavior)") {
    MotorController mc{};
    motor_controller_init(&mc);
    motor_controller_start(&mc);
    motor_controller_set_target_speed(&mc, 50.0f);
    motor_controller_on_commutation_tick(&mc);
    motor_controller_on_control_tick(&mc, 0.001f);
    motor_controller_stop(&mc);
    CHECK(true);
}
