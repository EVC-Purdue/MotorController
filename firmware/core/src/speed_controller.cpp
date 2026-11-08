#include "speed_controller.hpp"

namespace SpeedController {

bool init(MotorController *motor_controller, const SpeedController *speed_controller) {
  RETURN_IF_NULL(motor_controller);
  RETURN_IF_NULL(speed_controller);

  if (motor_controller->state != MOTOR_STOPPED) {
    return false;
  }

  motor_controller->speed_controller = *speed_controller;

  return true;
}

bool update(MotorController *motor_controller, const SpeedController *speed_controller) {
  RETURN_IF_NULL(motor_controller);
  RETURN_IF_NULL(speed_controller);

  if (motor_controller->state != MOTOR_RUNNING) {
    return false;
  }

  motor_controller->speed_controller = *speed_controller;

  return true;
}

bool set_speed(MotorController *motor_controller, float speed) {
  RETURN_IF_NULL(motor_controller);

  if (motor_controller->state != MOTOR_RUNNING) {
    return false;
  }

  //motor_controller->speed_controller->rpm = ;
  // get speed to rpm, then save it

  return true;
}

bool send_pwm(MotorController *motor_controller) {
  RETURN_IF_NULL(motor_controller);

  // calculate & send pwm signals

  return true;
}

}