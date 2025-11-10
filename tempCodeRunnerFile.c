#include <stdio.h>

int main(void) {
    int y;
    printf("Enter year: ");
    if (scanf("%d", &y) != 1) return 1;
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        printf("%d is a leap year\n", y);
    else
        printf("%d is not a leap year\n", y);
    return 0;
}