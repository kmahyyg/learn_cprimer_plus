// Filename :　floaterr.c
// Created by Yyg on 10/13/2017.
// Description : Presentation of float in

#include <stdio.h>

int main(void) {
    double a, b;     // Value of type 'double' may not fit into the receiver type 'float'
    // When defined as double , return 0.000000
    // When defined as float , return 4008175468544.000000
    b = 2.0e20 + 1.0;
    a = b - 2.0e20;
    printf("%f \n", a);
    return 0;
}


// Reason : the computer has a shortage of enough float bit
// The result is according to the IEEE 60559