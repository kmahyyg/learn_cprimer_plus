// Filename : school-exp002-1.c
// Created by Yyg on 10/9/2017.
// Description : Transfer from Celsius to Fahrenheit

#include <stdio.h>

int main(void) {
    float celsius;
    float fahrenheit;
    printf("Please input Celsius Degree:");
    scanf("%f", &celsius);
    fahrenheit = celsius * 9 / 5 + 32;
    printf("The ** %.1f ** Fahrenheit Degree equals to %.1f Celsius Degree.", fahrenheit, celsius);
    getchar();
}