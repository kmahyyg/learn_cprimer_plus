// Filename : fathm_ft.c
// Description : Transfer Fathom into Feet
// Author : Patrick Young
// Date : 170925

#include <stdio.h>

int main(void)
{
    int feet, fathoms;
    fathoms = 2;
    feet = 6 * fathoms;
    printf("There are %d feet in %d fathoms!\n", feet, fathoms);
    printf("Yeap, I said %d feet!\n", 6 * fathoms);
    getchar();
    return 1;
}
