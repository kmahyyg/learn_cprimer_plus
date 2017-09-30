cmake_minimum_required(VERSION 3.8)
project(102)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c)

# C Primer Plus
add_executable(exp102 main.c)
add_executable(exp201 main201.c)
add_executable(exp205 fathm_ft.c)
add_executable(exp206 two_func.c)
add_executable(exp207 nogood.c)

# C Primer Plus Practice
add_executable(prac2_1 practice_c2_1.c)
add_executable(prac2_3 practice_c2_3.c)
add_executable(prac2_4 practice_c2_4.c)
add_executable(exp301 platinum.c)

# Geek Union
add_executable(geekl101 geekunion1.c)
add_executable(geekl102 geekunion2.c)
add_executable(geekl103 geekunion3.c)
add_executable(hworld helloworld.c)

# add_executable(exp102 ${SOURCE_FILES})