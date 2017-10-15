cmake_minimum_required(VERSION 3.8)
project(cprimeplus)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c)

# C Primer Plus
add_executable(exp102 main.c)
add_executable(exp201 main201.c)
add_executable(exp205 fathm_ft.c)
add_executable(exp206 two_func.c)
add_executable(exp207 nogood.c)
add_executable(exp301 platinum.c)
add_executable(exp302 print1.c)
add_executable(exp303 bases.c)
add_executable(exp342 toobig.c)
add_executable(exp344 print2.c)
add_executable(exp345 charcode.c)
add_executable(exp346 altnames.c)
add_executable(exp347 showf_pt.c)
add_executable(exp348 floaterr.c)

# C Primer Plus Practice
add_executable(prac2_1 practice_c2_1.c)
add_executable(prac2_3 practice_c2_3.c)    # -cert-err34-c
add_executable(prac2_4 practice_c2_4.c)


# Geek Union
add_executable(geekl101 geekunion1.c)
add_executable(geekl102 geekunion2.c)
add_executable(geekl103 geekunion3.c)
add_executable(hworld helloworld.c)
add_executable(testbeep testbeep.c)

# School EXP
add_executable(schoolexp2 school-exp002.c)
add_executable(schoolexp201 school-exp002-1.c)


# add_executable(exp102 ${SOURCE_FILES})