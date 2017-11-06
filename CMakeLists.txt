cmake_minimum_required(VERSION 3.9)

project(hap-cpp)
enable_testing()

# The version number.
set(HAP_VERSION_MAJOR 1)
set(HAP_VERSION_MINOR 0)

set(CMAKE_CXX_STANDARD 11)

file(GLOB SOURCES src/**/*.cpp)
file(GLOB INCLUDES src/**/*.hpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -ansi -Wall -pedantic") # -Werror

# configure a header file to pass some of the CMake settings
# to the source code
# configure_file (
#   "${PROJECT_SOURCE_DIR}/TutorialConfig.h.in"
#   "${PROJECT_BINARY_DIR}/TutorialConfig.h"
#   )

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_SOURCE_DIR}/src")

# add the executable
add_library(hap-cpp ${SOURCES} ${INCLUDES})
