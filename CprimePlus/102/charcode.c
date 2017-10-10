// Filename : charcode.c
// Created by Yyg on 10/10/2017.
// Description : show char in int , which means ascii code.
// printf() decides which method used to show the code instead of how to save it.

#include <stdio.h>

int main(void) {
    char ch;
    printf("Please enter a character:");
    scanf("%c", &ch);     // input to stdout , then transfer to stdin
    printf("The code of %c is %d . ", ch, ch);
    getchar();
}

