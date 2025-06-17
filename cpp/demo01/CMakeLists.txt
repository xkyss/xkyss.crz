cmake_minimum_required(VERSION 3.31)
project(demo01)

set(CMAKE_CXX_STANDARD 11)

add_executable(demo01 main.cpp)

find_package(fmt CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE fmt::fmt)