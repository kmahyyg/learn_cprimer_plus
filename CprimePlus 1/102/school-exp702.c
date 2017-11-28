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

// Filename: school-exp702.c
// Created by Yyg on 11/14/2017.
// Desc: Fibonacci the last but 12 items total value.

// Fibonacci sequence is : from the third item , the third one is sum of first+second.

#include <stdio.h>

int main(void) {
    int fibon_sequen[12] = {1, 1, 2};
    for (int i = 3; i <= 11; i++) {
        fibon_sequen[i] = fibon_sequen[i - 1] + fibon_sequen[i - 2];
    }
    printf("the first 12 items of the fibonacci sequence is: ");
    for (int j = 0; j <= 11; j++) {
        printf(" %d ", fibon_sequen[j]);
    }
    return 0;
}

