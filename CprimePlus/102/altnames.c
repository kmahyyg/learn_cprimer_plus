// Filename : altnames.c
// Created by Yyg on 10/10/2017.
// Description : Transfer-Platform Integer Type name
// WTF>?


#include <stdio.h>
#include <inttypes.h>

int main(void) {
    int32_t me32;
    me32 = 45933945;
    printf("first , assume that int32_t is int: ");
    printf("me32 = %d \n", me32);
    printf("next , let's not make any assumption. \n");
    printf("instead , use \"macro\" from inttypes.h :");
    printf("me32 = %" PRId32 "\n", me32);
    return 0;
}