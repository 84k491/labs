cmake_minimum_required(VERSION 3.10)

project(complex_lib_project)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(static_lib)
add_subdirectory(dynamic_lib)
add_subdirectory(runnable)
