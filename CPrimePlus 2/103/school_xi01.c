// Filename: school-xi01.c
// Created by kmahyyg on 17-12-18.
// Desc: Struct save student data

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLENGTH 1024

typedef char String[MAXLENGTH + 1];

struct Studentdata {
    String sid, name, grade1, grade2, grade3;
    double gr1, gr2, gr3, avggrade;
};


void getstudata(struct Studentdata *stu1) {
    gets(stu1->sid);
    gets(stu1->name);
    gets(stu1->grade1);
    gets(stu1->grade2);
    gets(stu1->grade3);
}

void prtstudata(struct Studentdata *stu1) {
    printf("Student ID: %s \n", stu1->sid);
    printf("Student Name: %s", stu1->name);
    printf("Grade1: %s", stu1->grade1);
    printf("Grade2: %s", stu1->grade2);
    printf("Grade3: %s", stu1->grade3);
    printf("Student Average Grade: %lf \n", stu1->avggrade);
}

int main(void) {
    struct Studentdata Stu1, Stu2, Stu3, Stu4, Stu5;
    getstudata(&Stu1);
    prtstudata(&Stu1);
    getstudata(&Stu2);
    prtstudata(&Stu2);
    getstudata(&Stu3);
    prtstudata(&Stu3);
    getstudata(&Stu4);
    prtstudata(&Stu4);
    getstudata(&Stu5);
    prtstudata(&Stu5);
    return 0;
}
