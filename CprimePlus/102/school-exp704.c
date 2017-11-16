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
// #define GET_ARRAY_LEN(array,len){len = (sizeof(array) / sizeof(array[0]));}
// Filename : school-exp704.c
// Created by Yyg on 11/17/2017.
// Desc : Use binary search
/* the binary search is a divided search , this search need an ordered sequence
 * this algorithm will cost log2(n+1) times and the difficulties are O(log2n)
 * this sequence must not be a chain table. DON'T try to use this algorithm apply into the frequently data-inserted seq.
 */

#include <stdio.h>

void swap(int *num_a, int *num_b);

int *generate_array(int N);
int *array_selection_sort(int *array1, int N);

int main(void) {
    // Need an input of predefined array length and get data also predefined a new array //
    int N;
    printf("input the array length:");
    scanf("%d", &N);
    int *array101 = generate_array(N);
    // Need an input of predefined array length and get data also predefined a new array//
    // Now , use array101 to input to another func to sort. Prepare for binary search //
    int *array102 = array_selection_sort(array101, N);
    return 0;
}

void swap(int *num_a, int *num_b) {
    int temp = *num_b;
    *num_b = *num_a;
    *num_a = temp;
}         // Item in array swap succuessful example

int *generate_array(int N) {
    int *array1[N];
    for (int i = 0; i < (N - 1); i++) {
        int input_data;
        printf("Please input data, one data each time: \n");
        scanf("%d", &input_data);
        array1[i] = &input_data;
    }
    return *array1;
}

int *array_selection_sort(int *array1, int N) {      // N is the predefined array length
    for (int i = 0, min = 0; i < (N - 1); i++) {
        min = i;
        for (int j = i + 1; j < N; j++) {
            if (array1[min] < array1[j]) {
                min = j;
            }
            swap(&array1[min], &array1[j]);
        }
    }
    for (int k = 0; k < N; k++) {
        printf("[%d] is %d \n", k + 1, array1[k]);
    }
    return array1;   //Selection Sort
}

