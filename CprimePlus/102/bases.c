// Filename : bases.c
// Created by Yyg on 10/1/2017.
// Description : print all nums in different forms

#include <stdio.h>

int main(void){
    int x = 100;
    printf("dec = %d , octal = %o , hex = %x . \n", x ,x ,x);
    printf("dec = %d , octal = %#o , hex = %#x\n",x ,x,x);
    return 0;
}

