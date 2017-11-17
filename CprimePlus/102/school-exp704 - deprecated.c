/* BUG FILE  -  BUG FILE - BUG FILE - BUG FILE - BUG FILE */


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

// Filename: school-exp704.c
// Created by Yyg on 11/16/2017.
// Desc: binary search with array

/* the binary search is a divided search , this search need an ordered sequence
 * this algorithm will cost log2(n+1) times and the difficulties are O(log2n)
 * this sequence must not be a chain table.DONNOT try to use this algorithm apply into the frequently data-inserted seq.
 */

//#define GET_ARRAY_LEN(array,len){len = (sizeof(array) / sizeof(array[0]));}
#include <stdio.h>

int *array_selection_sort(int *array1, int N);

int bin_search(int seanum, int *arra1, int arrlen);

void swap(int *num_a, int *num_b) {
    int temp = *num_b;
    *num_b = *num_a;
    *num_a = temp;
}         // Item in array swap succuessful example


int main(void) {
    // decide the array length
    printf("Input the array length:");
    int N;
    scanf("%d", &N);         //use stdin redirect with stdout
    int testarr[N];
    printf("testarr is an array.");
    printf("this array length is %d . \n", N);
    for (int i = 0; i < N; i++) {
        int input2;
        printf("please input each item: \n");
        scanf("%d", &input2);
        testarr[i] = input2;
    }
    // generate a pseudo random array
    int *array2_sorted[N] = array_selection_sort(testarr, N);
    // copied to another array for next step
    int search_num;
    printf("input the num you want to search for:");
    scanf("%d", &search_num);
    int result;
    result = bin_search(search_num, *array2_sorted, N);
    printf("the index is %d ", result);
    return 0;
}

int *array_selection_sort(int *array1, int N) {
//    printf("test func of selection");
    for (int i = 0, min = 0; i < N; i++) {
        min = i;
        for (int j = i + 1; j < (N + 1); j++) {
            if (array1[min] < array1[j]) {
                min = j;
            }
            swap(&array1[min], &array1[j]);
        }
    }
    for (int k = 0; k < N; k++) {
        printf("[%d] is %d \n", k + 1, array1[k]);
    }
    return array1;
}

int bin_search(int seanum, int *arra1, int arrlen) {
    int indEx, i = 0;
    int midnum;
    while (i <= arrlen) {
        midnum = (arrlen - 1) / 2;
        if (seanum < arra1[0] && seanum > arra1[arrlen]) {
            printf("The num you search is not existed in this sequence");
            indEx = -1;
        } else if (seanum == arra1[midnum]) {
            i = midnum;
            indEx = i;
        } else if (seanum < arra1[midnum]) {
            i = midnum - 1;
        } else if (seanum > arra1[midnum]) {
            i = midnum + 1;
        }
    }
    indEx = i;
    return indEx;
}


