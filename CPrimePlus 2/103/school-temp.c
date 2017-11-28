// Filename: school-temp.c
// Created by Yyg on 11/27/2017.
// Desc: temp build to test if works

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int twoD_array_length(char *str1){
    size_t arraylen;
    arraylen = strlen(str1);
    int reallength=0;
    for (int i = 0; i < arraylen; ++i) {
        if (str1[i]!= '\0'){
            ++reallength;
        }
    }
    return reallength;
}

int main(void){
    char strm1[2][1025];
    gets(strm1[0]);
    int testlen;
    testlen = twoD_array_length(strm1[0]);
    printf("the length is : %d",testlen);
    return 0;
}


