// Filename: school-xi03.c
// Created by kmahyyg on 17-12-18.
// Desc: Chain Table save student data

#include <stdio.h>
#include <stdlib.h>


#define MAXLENGTH 1024
typedef char String[MAXLENGTH + 1];

struct StudentInfo {
    String stuid, stuname;
} allstu[5 + 1];

typedef struct StudentGrade *pNode;

struct StudentGrade {
    float grade;
    pNode ptrnext;
} Node, *pointer2;

int crt_ct(pNode *pNext, int size) {
    pNode pointer3 = NULL;

    *pNext = (pNode) malloc(sizeof(Node));
    if (*pNext == NULL)
        return -1;
    (*pNext)->ptrnext = NULL;
    for (int j = size; j > 0; --j) {
        pointer3 = (pNode) malloc(sizeof(struct StudentGrade));
        if (pointer3 == NULL)
            return -1;
        pointer3->grade = 0.0;
        pointer3->ptrnext = (*pNext)->ptrnext;
        (*pNext)->ptrnext = pointer3;
    }
    return 0;
};

int ist_ct(pNode pNext, int loca, float data) {
    pNode pointer3 = NULL;
    pointer3 = pNext;
    int i = 0;

    while (pointer3 != NULL && i < loca) {
        pointer3 = pointer3->ptrnext;
        i++;
    }
    if (pointer3 == NULL || i > loca)
        return 2;
    pointer3->grade = data;
    return 0;
}

int main(void) {
    return 0;
}