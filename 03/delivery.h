//
// Created by Martin on 12.11.2023.
//

#ifndef DELIVERY_H
#define DELIVERY_H
#include <cstdint>
#include <map>
#include <string>

namespace Delivery {
    std::map<std::pair<int64_t, int64_t>, uint64_t> deliver_packages(std::string input);

}

#endif //DELIVERY_H
