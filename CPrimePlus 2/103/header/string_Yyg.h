// Personal useful code
// Created by Yyg on 11/27/2017.


#ifndef __SWAP_CHAR
#define __SWAP_CHAR
void SWAP_CHAR(char *num_a, char *num_b) {
    char temp = *num_b;
    *num_b = *num_a;
    *num_a = temp;
}
#endif //SWAP_CHAR

#ifndef __SWAP_INT
#define __SWAP_INT
void SWAP_INT(int *num_a, int *num_b) {
    int temp = *num_b;
    *num_b = *num_a;
    *num_a = temp;
}
#endif //SWAP_INT

#ifndef __decimalToBinary
#define __decimalToBinary
long __decimalToBinary(long n) {
    int remainder;
    long binary = 0, i = 1;
    while (n != 0) {
        remainder = n % 2;
        n = n / 2;
        binary = binary + (remainder * i);
        i = i * 10;
    }
    return binary;
}
#endif //decimalToBinary

#ifndef __HANOI_T
#define __HANOI_T
#include <stdio.h>
void __HANOI_T(int n, char a, char b, char c) {         // From A to C with the help of B
    if (n == 1)                                          // 1 Disc? A to C.
    {
        printf("%c-->%c\n", a, c);
    } else {
        hanoi(n - 1, a, c, b);                  // migrate n-1 disc from A to B with the help of C
        printf("%c-->%c\n", a, c);               // migrate last disc from A to C
        hanoi(n - 1, b, a, c);                  // migrate n-1 disc from B to C with the help of A
    }
}
#endif //HANOI_T

#ifndef __fact_recu
#define __fact_recu
long long fact_recu(int N){
    long result;
    if(N <= 0 || N ==1){
        result = 1;
        return result;
    }
    else{
        return N * fact_recu(N-1);
    }
}
#endif //fact_recu

#ifndef __fact_iter
#define __fact_iter
long long fact_iter(int N){
    int i;
    long result = 1;
    for(i=1;i<=N;i++){
        result *=i;
    }
    return result;
}
#endif //fact_iter

#ifndef __combination
#define __combination
long long __combination(int K, int R) {               //C(k,r)= r! / ((r-k)! * k!)
    long long combined;
    combined = (fact(R)) / (fact(R - K) * fact(K));
    return combined;
}
#endif //combination

#ifndef __array_bubble_sort
#define __array_bubble_sort
#include <stdio.h>
void swap(int *num_a, int *num_b) {
    int temp = *num_b;
    *num_b = *num_a;
    *num_a = temp;
}
int __array_bubble_sort(int *array2) {
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9 - i; j++) {
            if (array2[j] > array2[j + 1]) {
                swap(&array2[j], &array2[j + 1]);
            }
        }
    }
    for (int k = 0; k <= 9; k++) {
        printf(" [%d]: %d \n", k + 1, array2[k]);
    }
    getchar();
    return 0;
}
#endif //array_bubble_sort

#ifndef __array_selection_sort
#define __array_selection_sort
#include <stdio.h>
void swap(int *num_a, int *num_b) {
    int temp = *num_b;
    *num_b = *num_a;
    *num_a = temp;
}
int __array_selection_sort(int *array1) {
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
    return 0;
}
#endif  //array_selection_sort


#ifndef __twoD_array_length
#define __twoD_array_length
int __twoD_array_length(char *str1){
    size_t arraylen;
    arraylen = strlen(str1);
    int reallength=0;
    for (int i = 0; i < arraylen; ++i) {
        if (str1[i]!= '\0'){
            ++reallength;
        }
    }
    return reallength;
}
#endif //twoD_array_length
