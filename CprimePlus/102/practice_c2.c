// File name : practice_c2.c
// Created by Yyg on 9/29/2017.
// Description : This file contains all of the practice at the end of the chapter 2.
// Thoughts about these file is from the book C Primer Plus V6.

#include <stdio.h>

int main(void)
{
    unsigned char first_name[8] = "Patrick";
    unsigned char last_name[6] = "Young";
    printf("%s \n", first_name);
    printf("%s \n", last_name);
    printf("%s %s \n", first_name, last_name);
    getchar();
    return 1;
}