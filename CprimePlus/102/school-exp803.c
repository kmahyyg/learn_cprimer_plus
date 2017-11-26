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

// Filename: school-exp803.c
// Created by Yyg on 11/22/2017.
/* Desc: Input multi-line strings,
 * calculate the string length,
 * upper-ordered data length,
 * print the line graph */


#define __USE_MINGW_ANSI_STDIO 1     // To help solve the warning of fucking msvcrt dll

#include <stdio.h>

#define MAXSTRLENGTH 1025

int main(void) {
    int stdloadin, charno, lineno = 0;
    int length[MAXSTRLENGTH];
    int linerecord[MAXSTRLENGTH];
    while ((stdloadin = getchar()) != EOF) {
        ++charno;
        if (stdloadin == '\n') {
            linerecord[lineno] = lineno + 1;
            length[lineno] = charno;
            ++lineno;
            charno = 0;
        }
    }
    int swap_tempvar;

}