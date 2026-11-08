#pragma once
#include <stddef.h>
#include "macros.hpp"

enum Direction { 
  DIRECTION_FORWARD,
  DIRECTION_REVERSE
};

enum FaultCode {
  FAULT_NONE,
  FAULT_OVER_CURRENT,
  FAULT_OVER_VOLTAGE,
  FAULT_UNDER_VOLTAGE,
  FAULT_OVERHEATING,
  FAULT_HALL_DESYNC,
};

enum MotorState {
  MOTOR_STOPPED,
  MOTOR_RUNNING,
  MOTOR_FAULTED
};

enum PhaseDrive {
  PHASE_LOW,
  PHASE_FLOATING,
  PHASE_HIGH,
};

enum CommutationStep {
  COMMUTATION_STEP_0,
  COMMUTATION_STEP_1,
  COMMUTATION_STEP_2,
  COMMUTATION_STEP_3,
  COMMUTATION_STEP_4,
  COMMUTATION_STEP_5,
  COMMUTATION_STEP_COUNT
};

struct PhaseState {
  PhaseDrive phase_a;
  PhaseDrive phase_b;
  PhaseDrive phase_c;
};

constexpr PhaseState commutation_pattern[COMMUTATION_STEP_COUNT] = {
  { PHASE_HIGH, PHASE_LOW, PHASE_FLOATING},
  { PHASE_HIGH, PHASE_LOW, PHASE_FLOATING},
  { PHASE_HIGH, PHASE_LOW, PHASE_FLOATING},
  { PHASE_HIGH, PHASE_LOW, PHASE_FLOATING},
  { PHASE_HIGH, PHASE_LOW, PHASE_FLOATING},
  { PHASE_HIGH, PHASE_LOW, PHASE_FLOATING},
};

struct FaultLimits {
  float over_current_amps;
  float over_voltage_volts;
  float under_voltage_volts;
  float max_temperature;
};

struct SpeedController {
  float target_rpm;
  float target_acceleration;
  float speed_error;
};

struct MotorController {
  MotorState state;
  CommutationStep commutation_step;
  SpeedController speed_controller;
  Direction direction;
  FaultLimits limitations;
};
