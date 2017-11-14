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

// Filename: school-exp504.c
// Created by Yyg on 11/14/2017.
// Desc: Tower of Hanoi

#include <stdio.h>

void hanoi(int n, char a, char b, char c)         // From A to C with the help of B
{
    if (n == 1)                                          // 1 Disc? A to C.
    {
        printf("%c-->%c\n", a, c);
    } else {
        hanoi(n - 1, a, c, b);                  // migrate n-1 disc from A to B with the help of C
        printf("%c-->%c\n", a, c);               // migrate last disc from A to C
        hanoi(n - 1, b, a, c);                  // migrate n-1 disc from B to C with the help of A
    }
}

int main() {
    int n;
    printf("Input the number of discs:");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    getchar();
    return 0;
}