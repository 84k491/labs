cmake_minimum_required(VERSION 3.10)

add_library(linked_list STATIC ./list.cpp)
target_include_directories(linked_list PUBLIC .)
