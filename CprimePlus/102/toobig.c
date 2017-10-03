// Filename : toobig.c
// Created by Yyg on 10/3/2017.
// Description : Overflow of the biggest int

#include <stdio.h>
int main(void){
    int i = 2147483647;
    unsigned int j = 4294967295;
    printf("%d %d %d \n", i ,i+1,i+2);
    printf("%u %u %u \n", j , j+1,j+2);
    return 0;
}

