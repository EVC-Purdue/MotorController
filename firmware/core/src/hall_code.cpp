#include "hall_code.hpp"

#define HALL_3_POS 2
#define HALL_2_POS 1
#define HALL_1_POS 0

namespace Hall {

uint8_t from_sensors(bool hall1, bool hall2, bool hall3) {
 return ((hall3 << HALL_3_POS) | (hall2 << HALL_2_POS) | (hall1 << HALL_1_POS));
}

CommutationStep to_commutation(uint8_t hall_code) {
    return hall_to_commutation_map[hall_code];
}

}