// Filename : print1.c
// Created by Yyg on 10/1/2017.
// Description : use printf() and its features.

#include <stdio.h>

int main(void){
    int ten =10;
    int two =2;
    printf("doing it right:");
    printf("%d minus %d is %d \n",ten,2,ten-two);
    printf("doing it wrong:");
    printf("%d minus %d is %d \n",ten);       /* Lack of 2 args
According to the <<C Primer Plus>> , when lacks of args , it will show random value in RAM */
    return 0;
}

