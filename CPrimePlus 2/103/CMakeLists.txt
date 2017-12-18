cmake_minimum_required(VERSION 3.8)
project(103)

set(CMAKE_C_FLAGS "-Wall -Wextra")
set(CMAKE_C_STANDARD 99)

add_executable(schx01 school_expx01.c)
add_executable(schx03 school_expx03.c)
add_executable(sch901 school_exp901.c)
add_executable(schxi1 school_xi01.c)
add_executable(schxi2 school_xi02.c)
add_executable(schxi3 school_xi03.c)
add_executable(TEMPBUILD school_temp.c)

# set(SOURCE_FILES main.c school-expx01.c)
# add_executable(103 ${SOURCE_FILES})