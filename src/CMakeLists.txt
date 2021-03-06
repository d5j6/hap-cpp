cmake_minimum_required(VERSION 3.10.0)

# Download and unpack mDNSResponder at configure time
configure_file(CMakeLists.txt.in ${CMAKE_BINARY_DIR}/mDNSResponder-download/CMakeLists.txt)

execute_process(
  COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
  RESULT_VARIABLE result
  WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/mDNSResponder-download
)
if(result)
  message(FATAL_ERROR "CMake step for mDNSResponder failed: ${result}")
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} --build .
  RESULT_VARIABLE result
  WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/mDNSResponder-download
)
if(result)
  message(FATAL_ERROR "Build step for mDNSResponder failed: ${result}")
endif()

# Find all sources recursively
file(GLOB_RECURSE SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
file(GLOB_RECURSE INCLUDES ${CMAKE_CURRENT_SOURCE_DIR}/*.hpp)

# Create a library called "hap" which includes the source files SOURCES
# The extension is already found. Any number of sources could be listed here.
add_library(hap SHARED ${SOURCES})

set_target_properties(hap PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties(hap PROPERTIES SOVERSION 1)

set_target_properties(hap PROPERTIES PUBLIC_HEADER HomeKitAccessoryProtocol.h)

# Make sure the compiler can find include files for our hap library
# when other libraries or executables link to hap
target_include_directories(
  hap PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/ip-transport
  ${CMAKE_CURRENT_SOURCE_DIR}/ip-transport/mDNS
  ${CMAKE_CURRENT_SOURCE_DIR}/objects
  ${CMAKE_CURRENT_SOURCE_DIR}/objects/accessories
  ${CMAKE_CURRENT_SOURCE_DIR}/objects/characteristics
  ${CMAKE_CURRENT_SOURCE_DIR}/objects/profiles
  ${CMAKE_CURRENT_SOURCE_DIR}/objects/services
  ${CMAKE_CURRENT_SOURCE_DIR}/pairing
)

# Find dns_sd.h in build folder
file(GLOB_RECURSE DNS_SD_HEADER ${CMAKE_BINARY_DIR}/*/dns_sd.h)

# Find libdns_sd.dylib in build folder
find_library(
  DNS_SD_DYLIB
  dns_sd
  ${CMAKE_BINARY_DIR}/bin
)

target_link_libraries(hap ${DNS_SD_DYLIB})
