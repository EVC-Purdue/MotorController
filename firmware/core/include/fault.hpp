#pragma once
#include "types.hpp"

struct CommutationState {
    float over_current_amps;
    float over_voltage_volts;
    float under_voltage_volts;
};

FaultCode fault_check(const FaultLimits* limits);
