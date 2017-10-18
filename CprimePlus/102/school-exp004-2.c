// Filename : school-exp004-3.c
// Created by Yyg on 10/18/2017.
// Description : Experience 4 Part 3
// Part 2

/* # 0~10   10%
# 10~20  outside 7.5%
# 20~40  outside 5%
# 40~60  outside 3%
# 60~100 outside 1.5%
# >100   outside 1% */

#include <stdio.h>

int main(void) {

    double profitMoney, tempvar, tempsum, prizeMoney_Stage; // input , save processed var , save temporary prize
    printf("Please input your profit of this time period: ( *10000 RMB ) ");
    scanf("%lf", &profitMoney);

    if (profitMoney < 0) {
        printf("Illegal input!");
    } else if (profitMoney >= 100) {
        tempvar = profitMoney - 100;
        prizeMoney_Stage = tempvar * .01;
        tempsum = 10 * .1 + 10 * .075 + 20 * .05 + 20 * .03 + 40 * .015 + prizeMoney_Stage;
        printf("This man should get %.3lf * 10000 RMB", tempsum);

    } else if (60 <= profitMoney < 100) {
        tempvar = profitMoney - 60;
        prizeMoney_Stage = tempvar * .015;
        tempsum = 10 * .1 + 10 * .075 + 20 * .05 + 20 * .03 + prizeMoney_Stage;
        printf("This man should get %.3lf * 10000 RMB", tempsum);
    } else if (40 < profitMoney <= 60) {
        tempvar = profitMoney - 40;
        prizeMoney_Stage = tempvar * .03;
        tempsum = 10 * .1 + 10 * .075 + 20 * .05 + prizeMoney_Stage;
        printf("This man should get %.3lf * 10000 RMB", tempsum);
    } else if (20 < profitMoney <= 40) {
        tempvar = profitMoney - 20;
        prizeMoney_Stage = tempvar * .05;
        tempsum = 10 * .1 + 10 * .075 + prizeMoney_Stage;
        printf("This man should get %.3lf * 10000 RMB", tempsum);
    } else if (0 <= profitMoney <= 20) {
        tempvar = profitMoney * .1;
        printf("This man should get %.3lf * 10000 RMB", tempvar);
    }
    getchar();
    return 0;
}
