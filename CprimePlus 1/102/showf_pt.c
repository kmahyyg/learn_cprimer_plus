// Filename : showf_pt.c
// Created by Yyg on 10/13/2017.
// Description : show a float in two different ways

#include <stdio.h>

int main(void){
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;
    printf("%f can be written %e \n .", aboat , aboat);
    printf("And it's %a in hex, powers of 2 notation \n", aboat);
    printf("%f can be written %e \n" , abet ,abet);
    printf("%Lf can be written %Le \n", dip, dip);
    getchar();
    return 0;
}

