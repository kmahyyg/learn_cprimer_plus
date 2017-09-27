cmake_minimum_required(VERSION 3.8)
project(102)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c main201.c fathm_ft.c two_func.c)
add_executable(example102 main.c)
add_executable(example201 main201.c)
add_executable(example205 fathm_ft.c)
add_executable(example206 two_func.c)

# add_executable(example102 ${SOURCE_FILES})