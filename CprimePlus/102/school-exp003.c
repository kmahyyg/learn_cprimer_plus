// Filename : school-exp002-1.c
// Created by Yyg on 10/9/2017.
// Description : Transfer from Celsius to Fahrenheit
// Description : Advanced Exp wrote , Fit to the exp3

#include <stdio.h>

int main(void) {
    float celsius;
    float fahrenheit;
    int decision;
    
    printf("Please input the way you need to transform: \n");
    printf("1. Celsius to Fahrenheit \n");
    printf("2. Fahrenheit to Celsius \n");
    scanf("%d", &decision);

    switch(decision)
    {
      case 1 :
        // decision 1
        // transfer from celsius to fahrenheit
        scanf("%f", &celsius);
        fahrenheit = celsius * 9.0 / 5.0 + 32.0;
        printf("The ** %.1f ** Fahrenheit Degree equals to %.1f Celsius Degree.", fahrenheit, celsius);
        getchar();
        break;
      case 2 :
        // decision 2
        // transfer from fahrenheit to celsius
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5.0 / 9.0;
        printf("The ** %.1f ** Celsius Degree equals to %.1f Fahrenheit Degree.", celsius, fahrenheit);
        getchar();
        break;
      default :
        printf("Your input is illegal!");
    }
    
    return 0;
}