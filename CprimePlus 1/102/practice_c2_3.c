#include <stdio.h>

int main(void) {
    int ages;
    int days;
    printf("Please input your age:");
    scanf("%d", &ages);
    days = ages * 365;
    printf("That Your age converted into days is: %d", days);
    getchar();
    return 0;
}