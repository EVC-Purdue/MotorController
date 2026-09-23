#pragma once
#include "commutation.hpp"
#include "fault.hpp"
#include "speed_control.hpp"
#include "types.hpp"

struct MotorController {
    MotorState state;
    CommutationState commutation;
    SpeedControllerState speed_controller;
    FaultLimits fault_limits;
    float target_speed;
    float measured_speed;
};

void motor_controller_init(MotorController* mc);
void motor_controller_start(MotorController* mc);
void motor_controller_stop(MotorController* mc);
void motor_controller_set_target_speed(MotorController* mc, float speed);

// Call from the commutation ISR (hall-change interrupt or fast timer tick).
void motor_controller_on_commutation_tick(MotorController* mc);

// Call from the slower control-loop tick (e.g. 1 kHz).
void motor_controller_on_control_tick(MotorController* mc, float dt);
