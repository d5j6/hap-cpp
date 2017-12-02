cmake_minimum_required(VERSION 3.9.4)

# Add executable called "sample" that is built from the source files
# "main.cpp". The extensions are automatically found.
add_executable(sample main.cpp)

# Link the executable to the hap library. Since the hap library has
# public include directories we will use those link directories when building
# sample
target_link_libraries(sample PUBLIC hap)
