#pragma once

struct SpeedControllerState {
    float kp;
    float ki;
    float integral;
};

float speed_controller_update(SpeedControllerState* state, float target_speed, float measured_speed, float dt);
