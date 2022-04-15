cmake_minimum_required(VERSION 3.21)

project(leetcodec C)

set(CMAKE_BUILD_TYPE Debug)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

set(CMAKE_C_STANDARD 17)

include_directories(
	${PROJECT_SOURCE_DIR}/include
)

add_executable(test test.c solution.h solution.c data_structure.h)
