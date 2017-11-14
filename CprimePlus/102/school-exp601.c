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

// Filename : school-exp601.c
// Created by Yyg on 11/14/2017.
// Desc: Array EXP: print 10 lines of YangHui triangle

#include <stdio.h>

long fact(int N);              // lead the factorial(N) in to help calculate the combination
long combination(int K, int R);


long fact(int N) {
    int i;
    long result = 1;
    for (i = 1; i <= N; i++) {
        result *= i;
    }
    return result;
}

long combination(int K, int R) {               //C(k,r)= r! / ((r-k)! * k!)
    long combined;
    combined = (fact(R)) / (fact(R - K) * fact(K));
    return combined;
}

int main(void) {
    int Linenum, Longest;
    printf("input the last line's line number:____\b\b\b\b");
    scanf("%d", &Longest);                                                // Longest must < 13
    for (Linenum = 0; Linenum <= Longest; Linenum++) {
        for (int j = 0; j <= Linenum; j++) {
            long combined;
            combined = combination(j, Linenum);
            printf(" %ld ", combined);
        }
        printf("\n");
    }
    return 0;
}