cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)
include_directories(operators/include)
include_directories(test_operators/include)
include_directories(utilities/include)



# Add the executable target
add_executable(main src/Main.cpp)

add_subdirectory(operators)
add_subdirectory(test_operators)
add_subdirectory(utilities)

# Link the executable target with the operators library
target_link_libraries(main operators tests helpers)
