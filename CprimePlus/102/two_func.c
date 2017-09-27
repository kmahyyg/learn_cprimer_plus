// Filename : fwo_func.c
// Created by Yyg on 9/27/2017.
// Description : A file contains two funcs. Example of <<C Primer Plus>> 2.6

#include <stdio.h>

void bulter(void);
int main(void)
{
    printf("I will summon the bulter function.\n");
    bulter();
    printf("Yes.Bring me some tea and rewriteable DVDs.\n");
    getchar();
    return 0;
}

void bulter(void)
{
    printf("You rang ,sir?\n");
}
