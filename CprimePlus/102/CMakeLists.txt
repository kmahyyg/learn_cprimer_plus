cmake_minimum_required(VERSION 3.8)
project(102)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c)
add_executable(exp102 main.c)
add_executable(exp201 main201.c)
add_executable(exp205 fathm_ft.c)
add_executable(exp206 two_func.c)
add_executable(exp207 nogood.c)
add_executable(prac2_1 practice_c2_1.c)

# add_executable(exp102 ${SOURCE_FILES})