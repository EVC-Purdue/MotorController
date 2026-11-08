#include "motor_controller.hpp"

namespace Controller {

bool init(FaultLimits *limits, MotorController *mc_out) {
    RETURN_IF_NULL(limits);
    RETURN_IF_NULL(mc_out);
    
    mc_out->state = MOTOR_STOPPED;
    // read the sensors & calculate commutation step we are in
    mc_out->limitations = *limits;
    mc_out->direction = DIRECTION_FORWARD;

    return true;
}

bool start(MotorController* motor_controller) {
    RETURN_IF_NULL(motor_controller);

    // startup actions

    return true;
}

bool stop(MotorController* motor_controller) {
    RETURN_IF_NULL(motor_controller);

    //stop actions

    return true;
}

bool on_commutation_tick(MotorController* motor_controller) {
    RETURN_IF_NULL(motor_controller);

    return true;
}

bool on_control_tick(MotorController* motor_controller) {
    RETURN_IF_NULL(motor_controller);

    return true;
}

}