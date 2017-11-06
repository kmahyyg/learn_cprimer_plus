// Filename : school-exp004-5.c
// Created by Yyg on 10/26/2017
// Description : print a diamond

#include <stdio.h>

int main() {
    int Longest;     // Longest = largest rows = largest cols
    int i, j;        // Position to make sure print in place , i equals to the LineNumber , j equals to the position
    printf("Please input the longest num:");
    scanf("%d", &Longest);
    if (Longest < 0) {                   // In order to print them in order , only mod 2 = 0 and unsigned int
        printf("Unsigned INT PLZ！");    // must > 0 , verify the data validity
        scanf("%d", &Longest);
    } else if (Longest % 2 == 0) {
        printf("U NEED A NUM which mod 2 !=0 ");
        scanf("%d", &Longest);
    }

    Longest = (Longest + 1) / 2;     // Judge the middle line number


    for (i = 0; i < Longest; i++) {                          // Print the front-space
        for (j = 0; j < Longest - i - 1; j++) {
            printf("!");
        }
        for (j = 0; j < i * 2 + 1; j++) {
            printf("*");                                     // Print the first **triangle** (upper part)
        }
        printf("\n");
    }

    Longest -= 1;                                            // Merge the longest line into the last part above

    for (i = 0; i < Longest; i++) {                          // Start to print the **trans-triangle**
        for (j = 0; j < i + 1; j++) {                        // Transform to print the space
            printf("!");
        }
        for (j = 0; j < (Longest - (i + 1)) * 2 + 1; j++) {  // Use [Star]=f(Space)
            printf("*");
        }
        printf("\n");
    }
    return 0;
}



/* Python V3
 *
 *

// This Python version use the method of print the rectangular
// Firstly , print every line.
// Secondly , merge each_line string as a element of a list
// Then , use 'for'  to print every element in the buffer list

#!/usr/bin/env python3
# -*- coding : utf-8 -*-

def one_line(max1length, starNum):
    spaceNum = int((max1length - starNum) / 2)

    line_string = ''
    for i in range(spaceNum):
        line_string += ' '

    for i in range(starNum):
        line_string += '*'

    for i in range(spaceNum):
        line_string += ' '

    return line_string


def lines(max1length):
    buffer = []

    for star in range(1, max1length, 2):
        buffer.append(one_line(max1length, star))

    for star in range(max1length, 0, -2):
        buffer.append(one_line(max1length, star))

    return buffer


if __name__ == '__main__':
    longest = int(input("Please input the longest length:"))
    buffer = lines(longest)

    for line in buffer:
        print(line)

 *
 *
 */