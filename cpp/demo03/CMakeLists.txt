cmake_minimum_required(VERSION 3.16)
project(demo03
  VERSION 0.1.1
)

##-----------------
## option



##-----------------
## set

set(CMAKE_CXX_STANDARD 11)

include(GNUInstallDirs)

set(INC_DIR ${PROJECT_SOURCE_DIR}/include CACHE PATH "demo03 inc")
set(LIB_DIR ${CMAKE_BINARY_DIR}/local/lib CACHE PATH "demo03 lib")
set(BIN_DIR ${CMAKE_BINARY_DIR}/local/bin CACHE PATH "demo03 bin")
set(CFG_DIR ${CMAKE_BINARY_DIR}/local/cmake CACHE PATH "demo03 config")
set(CMAKE_CONFIG_INSTALL_DIR ${CMAKE_INSTALL_LIBDIR}/${PROJECT_NAME})
set(CMAKE_CONFIG_INSTALL_FILE ${PROJECT_BINARY_DIR}/config.toinstall.cmake)


##-----------------
## install

# -config.cmake

include(CMakePackageConfigHelpers)
set(CONFIG_INC_DIR ${INC_DIR})
set(CONFIG_LIB_DIR ${LIB_DIR})
set(CONFIG_BIN_DIR ${BIN_DIR})
configure_package_config_file(
    ${PROJECT_NAME}-config.cmake.in
    ${CFG_DIR}/${PROJECT_NAME}-config.cmake
    INSTALL_DESTINATION ${CMAKE_CONFIG_INSTALL_DIR}
    PATH_VARS CONFIG_INC_DIR CONFIG_LIB_DIR CONFIG_BIN_DIR
)

set(CONFIG_INC_DIR ${CMAKE_INSTALL_INCLUDEDIR})
set(CONFIG_LIB_DIR ${CMAKE_INSTALL_LIBDIR})
set(CONFIG_BIN_DIR ${CMAKE_INSTALL_BINDIR})
configure_package_config_file(
    ${PROJECT_NAME}-config.cmake.in
    ${CMAKE_CONFIG_INSTALL_FILE}
    INSTALL_DESTINATION ${CMAKE_CONFIG_INSTALL_DIR}
    PATH_VARS CONFIG_INC_DIR CONFIG_LIB_DIR CONFIG_BIN_DIR
)

install(
    FILES ${CMAKE_CONFIG_INSTALL_FILE}
    DESTINATION ${CMAKE_CONFIG_INSTALL_DIR}
    COMPONENT devel
    RENAME ${PROJECT_NAME}-config.cmake
)


# -config-version.cmake
write_basic_package_version_file(
    ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}-config-version.cmake
    VERSION ${PROJECT_VERSION}
    COMPATIBILITY AnyNewerVersion
)

install(
    FILES ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}-config-version.cmake
    DESTINATION ${CMAKE_CONFIG_INSTALL_DIR}
    COMPONENT devel
)


##-----------------
## subdirectory

add_subdirectory(sourcec)
add_subdirectory(example)