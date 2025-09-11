cmake_minimum_required(VERSION 3.31)
project(backpack)

set(CMAKE_CXX_STANDARD 20)

add_executable(backpack main.cpp
        inventory.cpp
        inventory.h)
