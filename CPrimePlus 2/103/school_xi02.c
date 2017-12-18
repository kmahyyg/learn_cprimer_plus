// Filename: school-xi02.c
// Created by kmahyyg on 17-12-18.
// Desc: Struct array save student data

#include <stdio.h>
#include <stdlib.h>

#define MAXLENGTH 1024
typedef char String[MAXLENGTH + 1];

struct Studentdata {
    String sid, name, grade1, grade2, grade3;
    float gr1, gr2, gr3;
    double avggrade;
} allstu[5 + 1];

void getstudata(struct Studentdata *stu1) {
    printf("Input your id:");
    gets(stu1->sid);
    printf("Input your name:");
    gets(stu1->name);
    printf("3 Grades, one by one.");
    gets(stu1->grade1);
    gets(stu1->grade2);
    gets(stu1->grade3);
    stu1->gr1 = strtof(stu1->grade1, NULL);
    stu1->gr2 = strtof(stu1->grade2, NULL);
    stu1->gr3 = strtof(stu1->grade3, NULL);
    stu1->avggrade = ((stu1->gr1) + (stu1->gr2) + (stu1->gr3)) / 3.00;
}

void prtstudata(struct Studentdata *stu1) {
    printf("Student ID: %s \n", stu1->sid);
    printf("Student Name: %s \n", stu1->name);
    printf("Grade1: %.2f \n", stu1->gr1);
    printf("Grade2: %.2f \n", stu1->gr2);
    printf("Grade3: %.2f \n", stu1->gr3);
    printf("Student Average Grade: %.2lf \n", stu1->avggrade);
}

int main(void) {
    for (int i = 0; i < 5; ++i) {
        getstudata(&allstu[i]);
        prtstudata(&allstu[i]);
    }
    return 0;
}

