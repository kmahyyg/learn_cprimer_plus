// Filename: school-xi03.c
// Created by kmahyyg on 17-12-18.
// Desc: Chain Table save student data

#include <stdio.h>
#include <stdlib.h>


#define MAXLENGTH 1024
typedef char String[MAXLENGTH + 1];

struct StudentInfo {
    String sid, name;
} allstu[1 + 1];

typedef struct StudentGrade *pNode;

struct StudentGrade {
    float grade;      // data field
    pNode ptrnext;    // chain field
} Node;

int crt_ct(pNode *pNext, int size) {
    pNode headptr = NULL;       // define a header pointer

    *pNext = (pNode) malloc(sizeof(Node));     // pre-allocate memory
    // http://blog.csdn.net/lpp0900320123/article/details/20356143
    // https://www.cnblogs.com/kubixuesheng/p/4057063.html
    // https://stackoverflow.com/questions/20215534/when-assigning-a-string-to-a-pointer-does-it-reserve-space-memory
    if (*pNext == NULL)          // judge whether it is allocated
        return -1;
    (*pNext)->ptrnext = NULL;     // create chain table
    for (int j = size; j > 0; --j) {
        headptr = (pNode) malloc(sizeof(struct StudentGrade));
        if (headptr == NULL)
            return -1;
        headptr->grade = 0.0;     // write data to initialize
        headptr->ptrnext = (*pNext)->ptrnext;   // header pointer reserved
        (*pNext)->ptrnext = headptr;            // then modify
    }
    return 0;
}


int wrt_ct(pNode pNext, int loca, float data) {
    pNode headptr = NULL;     // define a header pointer
    headptr = pNext;          // initialize the header pointer
    int i = 0;

    while (headptr != NULL && i < loca) {
        headptr = headptr->ptrnext;     // move to the loca location
        i++;
    }
    if (headptr == NULL || i > loca)      // allocated failed,return error
        return 2;
    headptr->grade = data;                // pass the element and modify the link
    return 0;
}


int del_ct(pNode pNext, int loca) {
    pNode headptr = NULL;
    headptr = pNext;
    pNode tempptr;
    int j = 0;

    while (headptr->ptrnext && j < loca - 1) {
        headptr = headptr->ptrnext;     // point to the forward-drive node
        j++;
    }
    // judge whether it's legal or not
    if (!(headptr->ptrnext) || j > loca - 1) {
        puts("Passed Value: loca is illegal!");
    } else {
        tempptr = headptr->ptrnext;     // tempptr to the first element
        headptr->ptrnext = tempptr->ptrnext;
        free(tempptr);
        tempptr = NULL;
        puts("DELETED!");
    }
    return 0;
}


int ist_ct(pNode pNext, int loca, float data) {
    pNode ptr2, b2insert;
    ptr2 = NULL;
    int i = 0;

    ptr2 = pNext;
    while (ptr2 != NULL && i < loca - 1) {
        ptr2 = ptr2->ptrnext;
        i++;
    }
    if (ptr2 == NULL || i > loca - 1)
        return 1;
    b2insert = (pNode) malloc(sizeof(Node));
    if (b2insert != NULL) {
        b2insert->grade = data;
        b2insert->ptrnext = ptr2->ptrnext;
        ptr2->ptrnext = b2insert;
        return 0;
    } else {
        return -1;
    }
}

void getstuinfo(struct StudentInfo *stu1) {
    printf("Input your id:");
    gets(stu1->sid);
    printf("Input your name:");
    gets(stu1->name);
}

void getstugrade(pNode pNext, int size) {
    for (int i = 0; i < size; ++i) {
        char buffer[MAXLENGTH] = {"'\0'"};
        float buffloat;
        printf("Input grade:");
        gets(buffer);
        buffloat = strtof(buffer, NULL);
        wrt_ct(pNext, i, buffloat);
    }
}

void prtstuinfo(struct StudentInfo *stud1) {
    printf("Student ID: %s \n", stud1->sid);
    printf("Student Name: %s \n", stud1->name);
}

void prtstugrade(pNode pNext, int size) {

}

int main(void) {
    pNode g1;
    puts("Input the info first, grade later!");
    getstuinfo(&allstu[0]);
    crt_ct(&g1, 3);
    getstugrade(g1, 3);
    return 0;
}
