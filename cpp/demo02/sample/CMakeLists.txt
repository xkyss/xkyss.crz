cmake_minimum_required(VERSION 3.31)
project(demo02-sample)

set(CMAKE_CXX_STANDARD 11)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(demo02-sample demo02)
