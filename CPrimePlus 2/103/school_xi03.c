// Filename: school-xi03.c
// Created by kmahyyg on 17-12-18.
// Desc: Chain Table save student data

#include <stdio.h>
#include <string.h>

#define MAXLENGTH 1024

struct studentdata {
    int studentid;
    char name[MAXLENGTH + 1];
    double grade1, grade2, grade3, avggrade;
};

