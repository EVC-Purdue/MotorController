#include "doctest/doctest.h"
#include "fault.hpp"

TEST_CASE("fault_check returns FAULT_NONE (stub behavior)") {
    FaultLimits limits{};
    FaultCode code = fault_check(&limits);
    CHECK(code == FAULT_NONE);
}
