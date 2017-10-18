// Filename : school-exp004-1.c
// Created by Yyg on 10/17/2017.
// Description : 100 Horses + 100 Buckets
// Part 3
// Use for loop to solve some equality which contains x,y,z

#include <stdio.h>

int main(void) {
    int big_Horse, middle_Horse, small_Horse;
    for (big_Horse = 1; big_Horse <= 33; big_Horse++) {
        for (middle_Horse = 1; middle_Horse <= 50; middle_Horse++) {
            small_Horse = (100 - big_Horse * 3 - middle_Horse * 2) * 2;
            if ((big_Horse + middle_Horse + small_Horse) == 100)
                printf(" Big %d , Middle %d , Small %d \n", big_Horse, middle_Horse, small_Horse);
        }
    }
    getchar();
    return 0;
}