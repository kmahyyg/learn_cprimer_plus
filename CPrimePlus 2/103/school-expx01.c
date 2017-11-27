// Filename: school-expx01.c
// Created by Yyg on 11/27/2017.
// Desc: Turn around the elements in array

#define __USE_MINGW_ANSI_STDIO 1

#include <string.h>
#include "stdio.h"

#define MAXLENGTH 1025

void swap(char *num_a, char *num_b) {
    char temp = *num_b;
    *num_b = *num_a;
    *num_a = temp;
}         // Item in array swap succuessful example

int main(void) {
    char string1[MAXLENGTH];
    gets(string1);
    size_t length = 0;
    length = strlen(string1);
//    printf("%lld",length);
    for (int i = 0; i < length; i++) {
        length = length - 1;
        swap(&string1[i], &string1[length]);
    }
    puts(string1);
    return 0;
}

