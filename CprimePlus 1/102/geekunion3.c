// Filename : geekunion3.c
// Created by Yyg on 9/30/2017.
// Description : sizeof() all data types.

#include <stdio.h>

int main(void){
    printf("The length of int i3s : %I64d bytes. \n", sizeof(int));
    printf("The length of char i4s : %I64d bytes. \n", sizeof(char));
    printf("The length of double i5s : %I64d bytes. \n", sizeof(double));
    printf("The length of long i4s : %I64d bytes. \n", sizeof(long));
    printf("The length of short i5s : %I64d bytes. \n", sizeof(short));
    printf("The length of float i5s : %I64d bytes. \n", sizeof(float));
    printf("The length of longlong i9s : %I64d bytes. \n", sizeof(long long));
    printf("The length of longdouble i11s : %I64d bytes. \n", sizeof(long double));
    printf("The length of short int i9s : %I64d bytes. \n", sizeof(short int));
    return 0;
}

