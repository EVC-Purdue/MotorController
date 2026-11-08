#include "commutation.hpp"
#include "macros.hpp"
#include "types.hpp"

namespace Commutation {

bool update(MotorController *motor_controller, CommutationStep next_commutation_step) {
    RETURN_IF_NULL(motor_controller);

    if (motor_controller->state != MOTOR_RUNNING) {
        return false;
    }
    
    motor_controller->commutation_step = next_commutation_step;
    
    return true;
}

}