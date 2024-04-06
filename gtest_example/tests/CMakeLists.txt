cmake_minimum_required(VERSION 3.10)

find_package(GTest REQUIRED)

include_directories(
    ${GTEST_INCLUDE_DIRS}
    ${GMOCK_INCLUDE_DIRS}
)

add_executable(linked_list_test list_test.cpp)
target_link_libraries(linked_list_test ${GTEST_BOTH_LIBRARIES} linked_list)
