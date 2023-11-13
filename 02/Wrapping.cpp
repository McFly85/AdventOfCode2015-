//
// Created by Martin on 12.11.2023.
//

#include "Wrapping.h"

#include <algorithm>

uint64_t Wrapping::calculate_needed_paper(uint64_t length, uint64_t width, uint64_t height) {
    return 3 * length * width + 2 * width * height + 2 * height * length;
}

uint64_t Wrapping::calculate_needed_ribbon(uint64_t length, uint64_t width, uint64_t height) {
    return 2 * length + 2 * width + height * length * width;
}

std::vector<uint64_t> Wrapping::parse_dimensions(const std::string &input_string) {
    std::vector<uint64_t> result;

    std::string tmp_string{};

    for (char t: input_string) {
        if (t == 'x' || t == '\0') {
            result.push_back(stoi(tmp_string));
            tmp_string = "";
        } else {
            tmp_string.push_back(t);
        }
    }
    result.push_back(stoi(tmp_string));

    std::ranges::sort(result);

    return result;


}