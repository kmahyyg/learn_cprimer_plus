// File name: nogood.c
// Created by Yyg on 9/27/2017.
// Description : This file is used to learn how to debug.
// Description : Example Code of <<C Prime Plus>> 2.7

#include <stdio.h>

int main(void)
{
    int n,n2,n3;
    n = 5;
    n2 = n*n;
    n3 = n2 * n;      // If compiler tell you lack of ; , please check the last line
    printf("n = %d, n squared = %d, n cubed = %d \n", n, n2,
           n3);    // cubed means ^3 , you can only check logical error yourself
    getchar();
    return 0;
}