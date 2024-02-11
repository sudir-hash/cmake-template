
add_library(operators STATIC src/add.cpp src/sub.cpp)

target_include_directories(operators PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)
