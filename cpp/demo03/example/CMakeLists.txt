cmake_minimum_required(VERSION 3.16)
project(demo03_exe
    VERSION 0.1
    LANGUAGES C CXX
)
message(STATUS "PROJECT_NAME is ${PROJECT_NAME}")

##-----------------
## option

# 样例项目是否独立编译
option(DEMO03_EXAMPLE_BUILD_INDEPENDENT "build demo03 examples independent." ON)
message(STATUS "DEMO03_EXAMPLE_BUILD_INDEPENDENT is ${DEMO03_EXAMPLE_BUILD_INDEPENDENT}")

add_executable(${PROJECT_NAME}
    main.cpp
)

if (BUILD_INDEPENDENT)
  set(DEMO03_DIR ${CFG_DIR})
  #message("DEMO03_DIR is ${DEMO03_DIR}")
  find_package(demo03 REQUIRED CONFIG HINTS ${DEMO03_DIR})
endif ()

target_link_libraries(${PROJECT_NAME} PRIVATE demo03)