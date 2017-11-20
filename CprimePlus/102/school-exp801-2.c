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

// Filename: school-exp801-2.c
// Created by Yyg on 11/20/2017.
// Desc : convert strings to binary int.

#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argv[1] == NULL) return 1;    // NULL STRING INPUT
//    BASIC ASCII CODE MAX = 127(DEC) WHICH EQUALS TO 1111111(BIN)
//   PRIORITY : << (Left shift , left to right) > & (Bitwise and , left to right)

    char *ptr = argv[1];
    for (; *ptr != 0; ++ptr) {
//        printf("%c => ", *ptr);
        // perform bitwise AND for every bit of the character */
        for (int i = 7; i >= 0; --i) {
            (*ptr & 1 << i) ? putchar('1') : putchar('0');    // 1(bin)
        }
        putchar(' ');
    }
    return 0;
}