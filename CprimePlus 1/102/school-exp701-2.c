// Filename: shcool-exp701-2.c
// Created by kmahyyg on 17-12-31.
// Desc: Another Solution to YH Triangle

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,a[17][17]={'\0'};
    long n1=0;
    char *n=malloc(4);
    printf("Input the lines:");
    fgets(n,3,stdin);
    n1 = strtol(n,NULL,10);
    for (i = 0; i < n1; i++) {
        a[i][0]=1;
    }
    for (i = 1; i < n1; i++) {
        for (j= 0; j <=i ; j++){
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    for (i = 0; i < n1; i++) {
        for (j = 0; j <= i ; j++) {
            printf("%5d",a[i][j]);
            printf("\n");
        }
    }
    return 0;
}

