// Filename : badcount.c
// Created by Yyg on 10/23/2017.
// Description : to see if the arguments get some errors
// Always get a lot of errors



#include <stdio.h>

int main(void) {
    int n = 4;
    int m = 5;
    float f = 7.0f;
    float g = 8.0f;
    // printf("%d \n",n,m);      // It should just have one args to be passed.
    // printf("%d %d %d \n",n);      //Too much args passed
    // printf("%d %d \n",f,g);      // Data Type cannot fit the data
    return 0;
}

