#pragma once
#include "types.hpp"

bool init(MotorController *motor_controller, FaultLimits config);
bool check(const FaultLimits* limits, FaultCode *out);
