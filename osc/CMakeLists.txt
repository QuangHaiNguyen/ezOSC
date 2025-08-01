cmake_minimum_required(VERSION 3.18)

add_subdirectory(utilities/logger)

add_library(lib_osc STATIC
    ez_osc.cpp
)

target_link_libraries(lib_osc
PRIVATE
    lib_ez_logger
)

target_include_directories(lib_osc
PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

