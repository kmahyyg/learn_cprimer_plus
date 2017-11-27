// Filename: school-expx03.c
// Created by Yyg on 11/27/2017.
// Desc: Input a string and then find out the longest one and output its length

#define __USE_MINGW_ANSI_STDIO 1

#include <stdio.h>
#include <string.h>

int main(void) {
    char strmulti[3][1025];
    int inputfin = -1;
    size_t str1len, str2len, str3len;
    printf("Input a string:");
    gets(strmulti[0]);
    printf("Input another string:");
    gets(strmulti[1]);
    str1len = strlen(strmulti[0]);
    str2len = strlen(strmulti[1]);
    printf("Finished inputting? 1. Yes 2. No  _\b");
    scanf("%d", &inputfin);
    if (str1len > str2len) {
        memcpy(strmulti[2], strmulti[0], sizeof(strmulti[0]));
    } else {
        memcpy(strmulti[2], strmulti[1], sizeof(strmulti[1]));
    }
    str3len = strlen(strmulti[2]);
    if (inputfin == 1) {
        printf("Longest string:");
        puts(strmulti[2]);
        printf("%lld", sizeof(strmulti[2]));
    }
    while (inputfin == 2) {
        printf("Input next string:");
        gets(strmulti[0]);
        str1len = strlen(strmulti[0]);
        if (str1len > str3len) {
            memcpy(strmulti[2], strmulti[0], sizeof(strmulti[0]));
        }
        printf("Finished inputting? 1. Yes 2. No   _\b");
        scanf("%d", &inputfin);
    }
    return 0;
}