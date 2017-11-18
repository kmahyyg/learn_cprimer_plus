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

void swap(int *num_a, int *num_b);

int main(void) {
    int N;
    printf("Input the array length:__\b\b");
    scanf("%d", &N);
    int array101[2][N];    // input the array , define array
    for (int i = 0; i < N; i++) {
        printf("Please input data, one data:\n");
        scanf("%d", array101[0] + i);
    }        // input data and insert into array101[0]
    for (int j = 0, min = 0; j < (N - 1); j++) {
        min = j;
        for (int k = j + 1; k < N; k++) {
            if (array101[0][min] < array101[0][k]) {
                min = k;
            }
            swap(&array101[0][min], &array101[0][k]);
        }     // selection sort
        memcpy(array101[1], array101[0], sizeof(array101[0]));
    }         // memcpy copy an array into another array, located at string.h
    int search_num;
    printf("Enter the num you want to search: ");
    scanf("%d",&search_num);
    // input search data
    // do binary_data
    int result_idx = 0;
    int last = N - 1;
    int midnum;
    if (N % 2 != 0) {
        midnum = (N - 1) / 2;
    }
    else {
        midnum = N/2;
    }
    if (search_num < array101[1][0]) {
        printf("The data you search is Not Existed!");
        result_idx = -1;
        getchar();
        return -1;
    } else if (search_num > array101[1][N - 1]) {
        printf("The data you search is Not Existed!");
        result_idx = -1;
        getchar();
        return -1;
    } else if (search_num == array101[1][midnum]) {
        result_idx = midnum;
        printf("Found! location : %d.", result_idx + 1);
        getchar();
        return 0;
    } else if (search_num < array101[1][midnum]) {
        last = midnum;
        while (search_num < array101[1][last]) {
            last -= 1;
            result_idx = last;
        }
        if (search_num == array101[1][last]) {
            printf("Found ! location : %d.", result_idx + 1);
            getchar();
            return 0;
        } else {
            printf("Data is not existed!");
            getchar();
            return -1;
        }
    } else if (search_num >= array101[1][midnum]) {
        while (search_num >= array101[1][midnum]) {
            midnum += 1;
            result_idx = midnum;
        }
        if (search_num == array101[1][midnum]) {
            printf("Found ! location : %d.", result_idx + 1);
            getchar();
            return 0;
        } else {
            printf("Data is not existed!");
            getchar();
            return -1;
        }
    }
    return 0;
}

void swap(int *num_a, int *num_b) {
    int temp = *num_b;
    *num_b = *num_a;
    *num_a = temp;
}         // Item in array swap succuessful example