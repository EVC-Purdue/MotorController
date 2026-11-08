#pragma once
#include "types.hpp"

bool init(MotorController *motor_controller, const SpeedController *speed_controller);
bool update(MotorController *motor_controller, const SpeedController *speed_controller);
bool set_speed(MotorController *motor_controller, float speed);
bool send_pwm(MotorController *motor_controller);