// Filename : school-exp002.c
// Created by Yyg on 10/9/2017.
// Description : Exp 2 Part 1 printf() , Standard C99

#include <stdio.h>

int main(void) {
    printf("001. %d \n", 3 + 4 * 6);
    printf("002. %d \n", 3 * 4 / 6 + 6);
    printf("003. %d \n", 2 * 3 / 12 * 8 / 4);       /* Computer always treat it as pre-defined int and calculate in order
 so 2 * 3 = 6 , 6 / 12 = 0 , 0 * 8 / 4 = 0 , so the result is 0 instead of 1 */
    printf("004. %d \n", 10 * (1 + 7 * 3));
    printf("005. %d \n", 20 - 2 / 6 + 3);        /* The same treatment as line 10 Because of the same reason */
    printf("006. %d \n", 20 - 2 / (6 + 3));
    printf("007. %d \n", (20 - 2) / 6 + 3);
    printf("008. %d \n", (20 - 2) / (6 + 3));
    printf("----------------------------- \n");
    printf("009. %8.2f \n", 3.0 + 4.0 * 6.0);
    printf("010. %8.2f \n", 3.0 * 4.0 / 6.0 + 6.0);
    printf("011. %8.2f \n", 2.0 * 3.0 / 12.0 * 8.0 / 4.0);
    printf("012. %8.2f \n", 10.0 * (1.0 + 7.0 * 3.0));
    printf("013. %8.2f \n", 20.0 - 2.0 / 6.0 + 3.0);
    printf("014. %8.2f \n", 20.0 - 2.0 / (6.0 + 3.0));
    printf("015. %8.2f \n", (20.0 - 2.0) / 6.0 + 3.0);
    printf("016. %8.2f \n", (20.0 - 2.0) / (6.0 + 3.0));
    printf("----------------------------- \n");
// ASCII CODE: m - 109 , G -  71 , b - 98 , a - 97 , g - 103 , A - 65
    printf("017. %c \n", 'm' - 5);
    printf("018. %c \n", 'm' + 5);
    printf("019. %c \n", 'G' + 6);
    printf("020. %c \n", 'G' - 6);
    printf("----------------------------- \n");
// If allowed , I'll try to use the short int(Dec) [%hd] instead of int(Dec) [%d]
    printf("021. %d \n", 'b' - 'a');
    printf("022. %d \n", 'g' - 'a' + 1);
    printf("023. %d \n", 'G' - 'A' + 1);
    getchar();
}

