cmake_minimum_required(VERSION 3.10)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_library(libleetcodec STATIC
    "../include/utarray.h"
    "../include/uthash.h"
    "../include/utlist.h"
    "../include/utringbuffer.h"
    "../include/utstack.h"
    "../include/utstring.h"
    "atm.h"
    "atm.c"
    "data_structures.h"
    "interview_solution.h"
    "interview_solution.c"
    "recent_counter.h"
    "solution.h"
    "solution.c"
    "utils.h"
    "utils.c"
)

target_include_directories(libleetcodec PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})