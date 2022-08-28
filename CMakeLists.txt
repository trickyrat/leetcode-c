cmake_minimum_required(VERSION 3.21)

project(leetcodec C)

set(CMAKE_BUILD_TYPE Debug)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/lib)

set(CMAKE_C_STANDARD 17)

include_directories(
	${PROJECT_SOURCE_DIR}/include
)

add_library(leetcode_library
		src/solution.c
		include/assertions.h
		include/utarray.h
		include/uthash.h
		include/utlist.h
		include/utringbuffer.h
		include/utstack.h
		include/utstring.h
		include/datastructures.h
		include/hashtable.h
		include/recentcounter.h
		include/testutils.h
		include/solutionutils.h
		)
add_executable(leetcode_binary src/test.c )
target_link_libraries(leetcode_binary leetcode_library)