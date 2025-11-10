
#include <stdio.h>
int main(void) {
    int a, b;
    printf("Enter two integers separated by space: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input\n");
        return 1;
    }

    if (a > b)
        printf("%d is the larger number\n", a);
    else if (b > a)
        printf("%d is the larger number\n", b);
    else
        printf("Both numbers are equal: %d\n", a);

    return 0;
}