#include "fault.hpp"

namespace Fault {

bool init(MotorController *motor_controller, const FaultLimits *config) {
    RETURN_IF_NULL(motor_controller);
    RETURN_IF_NULL(config);

    if (motor_controller->state != MOTOR_STOPPED) {
        return false;
    }

    motor_controller->limitations = *config;

    return true;
}

bool check(const FaultLimits* limits, FaultCode *out) {
    RETURN_IF_NULL(limits);
    RETURN_IF_NULL(out);

    // pull sensors 

    *out = FAULT_NONE;
    return false;
}

}
