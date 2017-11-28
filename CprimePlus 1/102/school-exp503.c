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

// Filename : school-exp503.c
// Created by Yyg on 11/13/2017.
// Desc: Monkey ate peaches

#include <stdio.h>

int main(void) {
    int i = 1;
    int firstday = 1;
    for (i = 9; i >= 1; i--) {
        firstday = (firstday + 1) * 2;
    }
    printf("The first day has %d peaches.", firstday);
    return 0;
}
