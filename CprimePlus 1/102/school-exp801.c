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

// Filename: school-exp801.c
// Created by Yyg on 11/20/2017.
// Desc: Data convert: dec int to bin

#define __USE_MINGW_ANSI_STDIO 1     // To help solve the warning of fucking msvcrt dll

#include <stdio.h>

long decimalToBinary(long n);

int main(void) {
    long inputInt = 0;
    printf("Input an decimal integer convert to binary:___\b\b\b");
    scanf("%ld", &inputInt);
    long converted;
    converted = decimalToBinary(inputInt);
    printf("\n %ld (dec) = %ld (bin).", inputInt, converted);
    return 0;
}

long decimalToBinary(long n) {
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

