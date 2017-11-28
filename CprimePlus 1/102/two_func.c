// Filename : fwo_func.c
// Created by Yyg on 9/27/2017.
// Description : A file contains two funcs. Example of <<C Primer Plus>> 2.6

#include <stdio.h>

void bulter(void);    // tell compiler this func will be used in the future
int main(void)
{
    printf("I will summon the bulter function.\n");
    bulter();          // call this new func
    printf("Yes.Bring me some tea and rewriteable DVDs.\n");
    getchar();         // wait for a new input
    return 0;
}

void bulter(void)    // define a new func
{
    printf("You rang,sir?\n");
}
