//
// Created by Martin on 12.11.2023.
//

#include "advent_helper.h"
#include <iostream>
#include <fstream>
#include <memory>
#include <vector>
#include <string>
#include <sstream>

std::vector<std::string> AdventHelper::get_input_vector(const std::string& filename) {
    //TODO: Get the size of the array, ergo read the file
    std::vector<std::string> buffer;
    std::ifstream ifs(filename, std::ios::in);
    if (!ifs.is_open())
        std::cout << "failed to open " << filename << '\n';

    std::string line;
    while(std::getline(ifs, line)) {
        buffer.push_back(line);
    }
    ifs.close();

    //std::unique_ptr<std::vector<std::string>> empty_vec = std::make_unique<std::vector<std::string>>(buffer);
    return buffer;
}