//
// Created by Martin on 12.11.2023.
//

#ifndef FLOORCALCULATOR_H
#define FLOORCALCULATOR_H

#include <cstdint>
#include <string>

namespace FloorCalculator{

int64_t calculate_floor(const std::string &input);
size_t calculate_position(const std::string &input, int64_t floor_break);


}
#endif //FLOORCALCULATOR_H
