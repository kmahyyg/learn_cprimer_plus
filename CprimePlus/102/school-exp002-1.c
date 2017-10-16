// Filename : school-exp002-1.c
// Created by Yyg on 10/9/2017.
// Description : Transfer from Celsius to Fahrenheit
// Description : Advanced Exp wrote , Fit to the exp3

#include <stdio.h>

int main(void) {
    float celsius;
    float fahrenheit;
    printf("Please input Celsius Degree:");
    scanf("%f", &celsius);
    fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    printf("The ** %.1f ** Fahrenheit Degree equals to %.1f Celsius Degree.", fahrenheit, celsius);
    getchar();
    return 0;
}