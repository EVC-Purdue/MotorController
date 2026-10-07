#pragma once
#include "types.hpp"

typedef struct {
    float over_current_amps;
    float over_voltage_volts;
    float under_voltage_volts;
} FaultLimits;

FaultCode fault_check(const FaultLimits* limits);
