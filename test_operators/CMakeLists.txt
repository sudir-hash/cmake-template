


include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(tests STATIC src/tests.cpp)

target_include_directories(tests PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)
