cmake_minimum_required(VERSION 3.10)
project(linked_list_bin VERSION 1.0)

enable_testing()
set(CMAKE_EXPORT_COMPILE_COMMANDS ON) # to enable clangd completion

add_executable(linked_list_bin main.cpp)
set_target_properties(linked_list_bin PROPERTIES CXX_STANDARD 17)
target_link_libraries(linked_list_bin PRIVATE linked_list)


add_subdirectory(linked_list)
add_subdirectory(tests)
