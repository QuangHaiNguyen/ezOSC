cmake_minimum_required(VERSION 3.18)

add_library(lib_ez_logger STATIC
    ez_logger.cpp
)
target_include_directories(lib_ez_logger PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

