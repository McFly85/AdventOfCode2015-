cmake_minimum_required(VERSION 3.26)
project(AdventOfCode2015__)

set(CMAKE_CXX_STANDARD 20)

add_library(FloorCalculator
        01/FloorCalculator.h
        01/FloorCalculator.cpp
)

add_library(AdventHelper
        00_General/advent_helper.cpp
        00_General/advent_helper.h
)

add_library(Wrapping
        02/Wrapping.cpp
        02/Wrapping.h
)

add_library(Delivery
        03/delivery.h
        03/delivery.cpp
)

add_executable(AdventOfCode2015__ main.cpp)

target_link_libraries(AdventOfCode2015__ FloorCalculator AdventHelper Wrapping Delivery)




