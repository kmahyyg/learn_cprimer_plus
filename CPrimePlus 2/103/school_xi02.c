// Filename: school-xi02.c
// Created by kmahyyg on 17-12-18.
// Desc: Struct array save student data

#include <stdio.h>
#include <string.h>

#define MAXLENGTH 1024

struct studentdata {
    int studentid;
    char name[MAXLENGTH + 1];
    double grade1, grade2, grade3, avggrade;
} allstu[5 + 1];


int main(void) {

}

