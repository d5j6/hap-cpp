cmake_minimum_required (VERSION 3.9)

project (hap-cpp VERSION 1.0.0 DESCRIPTION "HomeKitAccessory library for C++")

set (CMAKE_CXX_STANDARD 11)

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU" OR
    "${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    set (warnings "-Wall -Wextra -Werror")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
    set (warnings "/W4 /WX /EHsc")
endif()
if (NOT CONFIGURED_ONCE)
    set (CMAKE_CXX_FLAGS "${warnings}" CACHE STRING "Flags used by the compiler during all build types." FORCE)
    set (CMAKE_C_FLAGS "${warnings}" CACHE STRING "Flags used by the compiler during all build types." FORCE)
endif()

# Library subdirectory
add_subdirectory (src)

# Sample executable subdirectory
add_subdirectory (sample)
