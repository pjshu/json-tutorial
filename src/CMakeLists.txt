cmake_minimum_required(VERSION 3.17)
project(json_tutorial C)

set(CMAKE_C_STANDARD 11)

add_library(leptjson leptjson.c)
add_executable(leptjson_test test.c)
target_link_libraries(leptjson_test leptjson)
