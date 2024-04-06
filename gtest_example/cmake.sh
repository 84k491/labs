#!/bin/bash

echo "Creating build directory"
mkdir build
cd build

echo "Running CMake"
cmake ..
cmake --build .

echo "Running tests"
tests/linked_list_test
