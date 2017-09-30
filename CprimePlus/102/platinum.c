// Filename : platinum.c
// Created by Yyg on 9/29/2017.
// Description : Example Code of 3.1
// Description : Your weight in Platinum

#include <stdio.h>

int main(void)
{
    float weight; // Your Weight
    float value; // Equation to the platinum
    printf("Are you worth your weight?\n");
    printf("Let's check it out. \n");
    printf("Please input your weight in pound:");
    scanf("%f", &weight);
    value = 1700.0 * weight * 14.5833;
    printf("Your weight in platnium is worth $%.2f.\n",value);
    return 0;
};

