// Filename : school-exo004.c
// Created by Yyg on 10/17/2017
// Description : Compare between three numbers and output in order
// Something like bubble sort

#include <stdio.h>

int main(void){
    double a, b, c, tempvar;
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
    printf("%.2lf %.2lf %.2lf \n", a, b, c);
    return 0;
}