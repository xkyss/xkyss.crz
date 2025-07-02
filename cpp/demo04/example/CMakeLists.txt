cmake_minimum_required(VERSION 3.16)
project(demo04_exe
    VERSION 0.1
    LANGUAGES C CXX
)
message(STATUS "PROJECT_NAME is ${PROJECT_NAME}")

##-----------------
## option

# 样例项目是否独立编译
option(DEMO04_EXAMPLE_BUILD_INDEPENDENT "build demo04 examples independent." ON)
message(STATUS "DEMO04_EXAMPLE_BUILD_INDEPENDENT is ${DEMO04_EXAMPLE_BUILD_INDEPENDENT}")

add_executable(${PROJECT_NAME}
    main.cpp
)

# 指定输出目录
set_target_properties(${PROJECT_NAME} PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${LIB_DIR}
    LIBRARY_OUTPUT_DIRECTORY ${LIB_DIR}
    RUNTIME_OUTPUT_DIRECTORY ${BIN_DIR}
)

if (BUILD_INDEPENDENT)
  set(DEMO04_DIR ${CFG_DIR})
  #message("DEMO04_DIR is ${DEMO04_DIR}")
  find_package(demo04 REQUIRED CONFIG HINTS ${DEMO04_DIR})
endif ()

target_link_libraries(${PROJECT_NAME} PRIVATE demo04)