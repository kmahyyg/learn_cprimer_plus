// Filename : print2.c
// Created by Yyg on 10/3/2017.
// Description : Show more feature about printf()

#include <stdio.h>

int main(void){
    unsigned int un = 3000000000;
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;
    printf("un = %u and not %d \n",un,un);   // Same storage in the RAM , but overflowed
    printf("end = %hd and %d \n", end ,end);  /* %h is used to show a large int which is cut by the compiler and shown as int
  65537(dec) = 0000-0000-0000-0001-0000-0000-0000-0001 (bin) , however , printf() just show the last 16 characters. */
    printf("big = %ld and not %hd \n", big, big);
    printf("verybig = %lld and not %ld \n", verybig ,verybig); // Same as the last but two line ,it just show the last 32bit.
    return 1;
}