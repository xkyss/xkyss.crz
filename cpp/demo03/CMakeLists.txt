cmake_minimum_required(VERSION 3.31)
project(demo03)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

add_executable(demo03 main.cpp
    src/Paper.cpp)
