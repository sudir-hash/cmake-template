


include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(helpers STATIC src/helpers.cpp)

target_include_directories(helpers PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)
