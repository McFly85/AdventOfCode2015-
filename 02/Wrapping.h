//
// Created by Martin on 12.11.2023.
//

#ifndef WRAPPING_H
#define WRAPPING_H

#include <cstdint>
#include <string>
#include <vector>

namespace Wrapping {
    uint64_t calculate_needed_paper(uint64_t length, uint64_t width, uint64_t height);

    uint64_t calculate_needed_ribbon(uint64_t length, uint64_t width, uint64_t height);

    std::vector<uint64_t> parse_dimensions(const std::string &input_string);

}

#endif //WRAPPING_H
