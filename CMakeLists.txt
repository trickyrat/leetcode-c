cmake_minimum_required(VERSION 3.21)

project(leetcodec C)

set(CMAKE_C_STANDARD 17)

add_executable(test test.c solution.h solution.c data_structure.h)
