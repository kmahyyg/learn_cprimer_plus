// Filename: praise1.c
// Created by Yyg on 11/9/2017.
// Desc: use different strings

#include <stdio.h>

#define PRAISE "Your are an extraordinary being."

int main(void) {
    char name[40];
    printf("what's my name? \n");
    scanf("%s", name);       // scanf() when met space/tab/enter will stop reading input.
    printf("Hello,  %s. %s\n", name, PRAISE);
    return 0;
}

