// Filename :school-exp004-4.c
// Created by Yyg on 10/18/2017.
// Description : Exp004 Part 4

#include <stdio.h>

int main(void) {
    double totalWheatNum = 0;         // TMD , why not longlongint or longdouble?
    double currentWheatNum = 1;
    int i = 1;
    int gridNum = 1;
    double cubedMeter = 0;
    printf("Please input the grid number you want to insert wheat into:");
    scanf("%d", &gridNum);
    while (i <= gridNum) {
        totalWheatNum = totalWheatNum + currentWheatNum;
        currentWheatNum = currentWheatNum * 2;
        i++;
    }
    cubedMeter = totalWheatNum / 140000000;
    printf("Total Wheats are: %e items.\n", totalWheatNum);       // use %e to use scientific calculation
    printf("Total Wheats are: %e m3.", cubedMeter);
    getchar();
    return 233;
}