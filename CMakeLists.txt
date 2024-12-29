cmake_minimum_required(VERSION 3.28)
project(LiteRTC C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

include_directories(include)
file(GLOB_RECURSE SRC src/*.c)
add_library(lrc ${SRC})
