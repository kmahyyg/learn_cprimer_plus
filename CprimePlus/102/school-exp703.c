/*
 *     Copyright (C) <2017>  <Patrick Young (kmahyyg@Github)>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
   *
   */

// Filename: school-exp703.c
// Created by Yyg on 11/15/2017.
// Desc: sort algorithm using bubble sort and selection sort
// REF: https://zh.wikipedia.org/wiki/%E5%86%92%E6%B3%A1%E6%8E%92%E5%BA%8F
// REF: https://zh.wikipedia.org/wiki/%E9%80%89%E6%8B%A9%E6%8E%92%E5%BA%8F

/* Check the array length:

#define GET_ARRAY_LEN(array,len){len = (sizeof(array) / sizeof(array[0]));} */

#include <stdio.h>
#include <stdlib.h>

// Stdlib.h used to generate 10 pseudo int number

void array_selection_sort(int *array1);

int array_bubble_sort(int *array2);

void swap(int *num_a, int *num_b) {
    int temp = *num_b;
    *num_b = *num_a;
    *num_a = temp;
}         // Item in array swap succuessful example

int main(void) {
    int testarr[10];
    for (int i = 0; i < 10; i++) {
        testarr[i] = rand();
    }
    int decision;
    printf("Choose a sort: \n 1.Selection Sort \n 2.Bubble Sort \n");
    printf("Input your choice here:_\b");
    scanf("%d", &decision);
    if (decision == 1) {
        array_selection_sort(testarr);
    } else if (decision == 2) {
        array_bubble_sort(testarr);
    } else if (decision != 1 && decision != 2) {
        printf("Illegal input!");
        scanf("%d", &decision);
    }
    return 0;
}

void array_selection_sort(int *array1) {
//    printf("test func of selection");
    for (int i = 0, min = 0; i < 9; i++) {
        min = i;
        for (int j = i + 1; j < 10; j++) {
            if (array1[min] < array1[j]) {
                min = j;
            }
            swap(&array1[min], &array1[j]);
        }
    }
    for (int k = 0; k < 10; k++) {
        printf("[%d] is %d \n", k + 1, array1[k]);
    }
}

int array_bubble_sort(int *array2) {
//    printf("test func of selection");
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9 - i; ++j) {
            if (array2[j] > array2[j + 1]) {
                swap(&array2[j], &array2[j + 1]);
            }
        }
    }
    for (int k = 0; k <= 9; k++) {
        printf(" [%d]: %d \n", k + 1, array2[k]);
    }
}
