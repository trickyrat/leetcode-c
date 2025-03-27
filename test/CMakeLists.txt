cmake_minimum_required(VERSION 3.20)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(
    leetcodec
    "main.c"
)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET leetcodec PROPERTY C_STANDARD 17)
endif()

target_link_libraries(
    leetcodec
    PRIVATE cmocka-static
    libleetcodec)

add_test(NAME leetcodec_tests COMMAND leetcodec)