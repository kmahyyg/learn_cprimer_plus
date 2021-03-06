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

// Filename: school-exp802.c
// Created by Yyg on 11/20/2017.
// Description: Stat of multiple-line strings

#include <stdio.h>

#define INSIDE 1
#define OUTSIDE 0

int main(void) {
    int loadin, lineno, wordno, charno, status;
    status = OUTSIDE;
    lineno = wordno = charno = 0;
    while ((loadin = getchar()) != EOF) {
        ++charno;
        if (loadin == '\n') {
            ++lineno;
        }
        if (loadin == ' ' || loadin == '\n' || loadin == '\t') {
            status = OUTSIDE;
        } else if (status == OUTSIDE) {
            status = INSIDE;
            ++wordno;
        }
    }
    printf("Line: %d, Word: %d, Charno: %d .", lineno, wordno, charno);
    getchar();
    return 0;
}