#pragma once
#include "types.hpp"

<<<<<<< Updated upstream
struct FaultLimits {
=======
struct CommutationState {
>>>>>>> Stashed changes
    float over_current_amps;
    float over_voltage_volts;
    float under_voltage_volts;
};

FaultCode fault_check(const FaultLimits* limits);
