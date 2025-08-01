cmake_minimum_required(VERSION 3.18)
project(osc)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(osc)

add_executable(app app/main.cpp)

target_link_libraries(app PRIVATE lib_osc)
