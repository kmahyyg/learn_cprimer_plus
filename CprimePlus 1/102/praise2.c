// Filename: praise2.c
// Created by Yyg on 11/9/2017.
// Desc: use sizeof() to show all stuff

#include <stdio.h>
#include <string.h>

#define PRAISE "You 2 a fucking damn it."

int main(void) {
    char name[40];
    printf("What's your name?");
    scanf("%s", name);
    printf("Hello,  %s.%s\n", name, PRAISE);
    printf("Your name of %u letters occupies %lu memory cells. \n", strlen(name), sizeof(name));
    printf("The phrase if praise has %u letters.", strlen(PRAISE));
    printf("and occupies %u memory cells. \n", sizeof(PRAISE));
    return 0;
}

