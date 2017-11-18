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

// Filename : school-exp501.c
// Created by Yyg on 11/13/2017
// Desc : Dates2day or days2date

#include <stdio.h>

static char monthdays[2][13] = {
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int date2days(int year, int month, int day);     // use leap var to decide leap year , if the leap == True(1)

int days2date(int years, int days);              // then use the monthdays[1] to do a for-loop

int main(void) {
    int decision;
    printf("Choose one option to continue:\n");
    printf("1. You give date , I give you days. \n");
    printf("2. You give days , I give you date. \n");
    scanf("%d", &decision);
    if (decision != 1 && decision != 2) {
        printf("Illegal Input!");
        return -1;
    } else if (decision == 1) {
        int year, month, day;
        printf("Input year now!");
        scanf("%d", &year);
        printf("Input month now!");
        scanf("%d", &month);
        printf("Input day now!");
        scanf("%d", &day);
        date2days(year, month, day);
    } else if (decision == 2) {
        int years, days;
        printf("Please input the years: \n");
        scanf("%d", &years);
        printf("Please input the days: \n");
        scanf("%d", &days);
        days2date(years, days);
    }
}

int date2days(int year, int month, int day) {
    // do a judgement to try can be devided by 4
    // so that we could decide if it's a leap year
    // Priority : && > ||
    int i, leap;
    printf("%d YY - ", year);
    printf("%d MM - ", month);
    printf("%d DD", day);
    leap = (year % 4 == 0) || (year % 100 == 0 && year % 400 == 0);

    for (i = 1; i < month; i++) {
        day += monthdays[leap][i];
    }

    printf("  equals to day: %d DD", day);
    getchar();
    return 0;
}

int days2date(int years, int days) {
    // judgement of month
    int pmonth, pday, leap, i;
    printf("%d DAYS of ", days);
    printf("%d YEARS \n", years);
    leap = (years % 4 == 0) || (years % 100 == 0 && years % 400 == 0);

    for (i = 1; days > monthdays[leap][i]; i++) {
        days -= monthdays[leap][i];
    }

    pmonth = i;
    pday = days;
    printf("The month is %d , ", pmonth);
    printf("The day is %d .", pday);
    getchar();
    return 0;
}
