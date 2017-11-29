// Filename: school-expx03.c
// Created by Yyg on 11/27/2017.
// Desc: Input a string and then find out the longest one and output its length


#define __USE_MINGW_ANSI_STDIO 1

#include <stdio.h>
#include <string.h>

#define MAXLEN 1025

int twoD_array_length(char *str1) {
    size_t arraylen;
    arraylen = strlen(str1);
    int reallength = 0;
    for (int i = 0; i < arraylen; ++i) {
        if (str1[i] != '\0') {
            ++reallength;
        }
    }
    return reallength;
}

int main(void) {
    char multistr[3][MAXLEN];
    printf("Input a string: ");
    gets(multistr[0]);
    int str1len = 0, str2len = 0;
    char choice[1];
    choice[0] = '1';
    str1len = twoD_array_length(multistr[0]);
    while (choice[0] == '1') {
        printf("Input the next string: ");
        scanf("%s", multistr[1]);
        str2len = twoD_array_length(multistr[1]);
        if (str1len > str2len) {
            strcpy(multistr[2], multistr[0]);
        } else {
            strcpy(multistr[2], multistr[1]);
        }
        printf("Next line? (1.yes/2.no) [NUM SENSITIVE]");
        scanf("%s", choice);
    }
    printf("The longest string is: ");
    puts(multistr[2]);
    int str3len;
    str3len = twoD_array_length(multistr[2]);
    printf("Its length is: %d", str3len);
    return 0;
}