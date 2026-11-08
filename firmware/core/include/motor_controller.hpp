#pragma once
#include "types.hpp"

bool init(FaultLimits *limits, MotorController *out);
bool start(MotorController* motor_controller);
bool stop(MotorController* motor_controller);
bool on_commutation_tick(MotorController* motor_controller);
bool on_control_tick(MotorController* motor_controller);
