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
 */

// Filename : school-exp502.c
// Created by Yyg on 11/13/2017.
// Desc : n! is ? This experiment is going to help us see the difference between iteration and recursion
// recursion : tail-recursion will help to prevent stack overflow , just call the func agn and agn
// iteration : use loop to travel through all available data.

#include <stdio.h>

long fact_iter(int N);
long fact_recu(int N);

int main(void){
    int N,decision;
    long result;
    printf("input N to do fact(N): ______\b\b\b\b\b\b");
    scanf("%d",&N);
    printf("Recursion? input 1. \n");
    printf("Iteration? input 2. \n");
    scanf("%d",&decision);
    if (decision == 1){
        result = fact_recu(N);
        printf("Result is : %ld",result);
    }
    else if (decision ==2){
        result = fact_iter(N);
        printf("Result is : %ld",result);
    }
    return 0;
}

long fact_iter(int N){
    int i;
    long result = 1;
    for(i=1;i<=N;i++){
        result *=i;
    }
    return result;
}

long fact_recu(int N){
    long result;
    if(N <= 0 || N ==1){
        result = 1;
        return result;
    }
    else{
        return N * fact_recu(N-1);
    }
}