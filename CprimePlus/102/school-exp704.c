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

// Filename : school-exp704.c
// Created by Yyg on 11/17/2017.
// Desc : Use binary search

#include <stdio.h>
#include <string.h>

// Prototype
void swap(int *num_a, int *num_b);

int binary_search(int *array101, int N, int search_num);
// Prototype end

int main(void) {
    int N;
    printf("Input the array length:__\b\b");
    scanf("%d", &N);
    int array101[2][N];    // input the array , define array
    for (int i = 0; i < N; i++) {
        printf("Please input data, one data:\n");
        scanf("%d", array101[0] + i);
    }        // input data
    for (int j = 0, min = 0; j < (N - 1); j++) {
        min = j;
        for (int k = j + 1; k < N; k++) {
            if (array101[0][min] < array101[0][k]) {
                min = k;
            }
            swap(&array101[0][min], &array101[0][k]);
        }
        memcpy(array101[1], array101[0], sizeof(array101[0]));
    }
    for (int l = 0; l < N; l++) {
        printf("[%d] is %d", l + 1, array101[1][l]);
    }
/*    int search_num;
    printf("Enter the num you want to search: ");
    scanf("%d",&search_num);
    int result_idx;*/
}

void swap(int *num_a, int *num_b) {
    int temp = *num_b;
    *num_b = *num_a;
    *num_a = temp;
}         // Item in array swap succuessful example