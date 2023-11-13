//
// Created by Martin on 12.11.2023.
//

#include "FloorCalculator.h"
#include <iostream>

int64_t FloorCalculator::calculate_floor(const std::string &input) {
    int64_t floor_count{0};

    for(const char &ch: input) {
         if(ch=='(') ++floor_count;
         if(ch==')') --floor_count;
    }
    return floor_count;
}

size_t FloorCalculator::calculate_position(const std::string &input, const int64_t floor_break) {
    int64_t floor_count{0};

    for(size_t idx=0; idx < input.length(); ++idx) {
        if(input.at(idx)=='(') ++floor_count;
        if(input.at(idx)==')') --floor_count;
        if(floor_count==floor_break) return idx+1;
    }
    return 0;
}