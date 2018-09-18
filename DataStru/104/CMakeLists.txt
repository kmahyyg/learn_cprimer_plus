cmake_minimum_required(VERSION 3.12)

project(104 C)

set(CMAKE_C_STANDARD 99)

add_executable(104 main.c)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra")
