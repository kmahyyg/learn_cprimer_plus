// Filename: escape.c
// Created by Yyg on 11/7/2017.
// Description : use escape sequence to deal with the condition

#include <stdio.h>

int main(void) {
    float salary;
    printf("\a enter your desired salary monthly:");
    printf("$__________________ \b\b\b\b\b\b\b");            // \b to take a place of the char
    scanf("%f", &salary);
    printf("\n\t $%.2f a month is $%.2f a year.", salary,
           salary * 12.0);    // \n to enter the next line , \t to the next sheet line
    printf("\r Gee! \n");             // Return back to the line beginning
    return 0;
}

/* About the screen refresh when using scanf()
 * send the buffer to the screen while (which means refresh the buffer):
 * 1. full buffer 2.enter \n 3.need an input  */

// Just use \n to refresh the buffer force