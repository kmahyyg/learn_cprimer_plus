// Filename : school-exo004.c
// Created by Yyg on 10/17/2017
// Description : Compare between three numbers and output in order
// Part one
// something like bubble sort

#include <stdio.h>

int main(void){
    double a, b, c, tempvar;    // define a tempvar to make the var cross-equal
    printf("Please input 3 numbers to sort:");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a > b) {
        tempvar = b;
        b = a;
        a = tempvar;
    }
    if (a > c) {
        tempvar = c;
        c = a;
        a = tempvar;
    }
    if (b > c) {
        tempvar = c;
        c = b;
        b = tempvar;
    }
    printf("After sorting all 3 numbers , 3 numbers from the biggest to the smallest is :");
    printf("%.2lf %.2lf %.2lf \n", a, b, c);
    printf("The biggest one is : %.2lf \n", a);
    printf("The smallest one is : %.2lf \n", c);
    getchar();
    return 0;
}