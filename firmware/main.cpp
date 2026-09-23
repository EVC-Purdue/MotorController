#include "motor_controller.hpp"

int main() {
    MotorController controller{};
    motor_controller_init(&controller);
    motor_controller_start(&controller);
    motor_controller_set_target_speed(&controller, 100.0f);

    for (int i = 0; i < 10; ++i) {
        motor_controller_on_commutation_tick(&controller);
        motor_controller_on_control_tick(&controller, 0.001f);
    }

    return 0;
}
