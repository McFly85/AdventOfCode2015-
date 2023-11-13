//
// Created by Martin on 12.11.2023.
//

#include "delivery.h"
#include <iostream>
#include <map>
#include <string>


std::map<std::pair<int64_t, int64_t>, uint64_t> Delivery::deliver_packages(const std::string &input) {
    std::map<std::pair<int64_t, int64_t>, uint64_t> delivery_map{};
    std::pair<int64_t, int64_t> santa_coordinates{0, 0};
    std::pair<int64_t, int64_t> robo_coordinates{0, 0};
    std::pair<int64_t, int64_t> *current_coordinates;
    delivery_map[santa_coordinates] = 2;
    std::cout << input << std::endl;

    for (size_t idx = 0; idx < input.length(); ++idx) {

        if (idx % 2) {
            current_coordinates = &robo_coordinates;
        } else {
            current_coordinates = &santa_coordinates;
        }
        switch (input.at(idx)) {
            case '>':
                current_coordinates->first++;
                break;
            case '<':
                current_coordinates->first--;
                break;
            case '^':
                current_coordinates->second++;
                break;
            case 'v':
                current_coordinates->second--;
                break;
        }
        if (!delivery_map.count(*current_coordinates)) { delivery_map[*current_coordinates] = 0; }
        delivery_map[santa_coordinates] += 1;
    }

    return delivery_map;

}
