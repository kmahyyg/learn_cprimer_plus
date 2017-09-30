// Filename : practice_c2_4.c
// Created by Yyg on 9/29/2017.
// Description : Printf with function

#include <stdio.h>

void jolly(void);
void deny(void);

int main(void)
{
    jolly();
    jolly();
    deny();
}

void jolly(void)
{
    printf("For his jolly!\n");
}

void deny(void)
{
    printf("Nobody can deny~\n");
}