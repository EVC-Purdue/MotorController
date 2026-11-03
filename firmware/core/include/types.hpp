#pragma once

<<<<<<< Updated upstream
typedef enum { 
DIRECTION_FORWARD, 
DIRECTION_REVERSE 
} Direction;

typedef enum {
    COMMUTATION_STEP_0,
    COMMUTATION_STEP_1,
    COMMUTATION_STEP_2,
    COMMUTATION_STEP_3,
    COMMUTATION_STEP_4,
    COMMUTATION_STEP_5,
    COMMUTATION_STEP_COUNT
} CommutationStep;

typedef enum {
    FAULT_NONE,
    FAULT_OVER_CURRENT,
    FAULT_OVER_VOLTAGE,
    FAULT_UNDER_VOLTAGE,
    FAULT_HALL_DESYNC,
    FAULT_STALL
} FaultCode;

typedef enum { 
MOTOR_STATE_STOPPED, 
MOTOR_STATE_RUNNING, 
MOTOR_STATE_FAULTED
} MotorState;

typedef struct {
    bool high_side;
    bool low_side;
} PhaseDrive;

typedef struct {
    PhaseDrive phase_a;
    PhaseDrive phase_b;
    PhaseDrive phase_c;
} CommutationPattern;
=======
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

struct PhaseState {
  PhaseDrive phase_a;
  PhaseDrive phase_b;
  PhaseDrive phase_c;
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

constexpr PhaseState commutation_pattern[COMMUTATION_STEP_COUNT] = {
  { PHASE_HIGH, PHASE_LOW, PHASE_FLOATING},
  { PHASE_HIGH, PHASE_LOW, PHASE_FLOATING},
  { PHASE_HIGH, PHASE_LOW, PHASE_FLOATING},
  { PHASE_HIGH, PHASE_LOW, PHASE_FLOATING},
  { PHASE_HIGH, PHASE_LOW, PHASE_FLOATING},
  { PHASE_HIGH, PHASE_LOW, PHASE_FLOATING},
};
>>>>>>> Stashed changes
