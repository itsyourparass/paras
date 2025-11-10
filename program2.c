#include <stdio.h>
int main(void) {
    double a, b;
    printf("Enter two numbers separated by space: ");
    if (scanf("%lf %lf", &a, &b) != 2) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }
    printf("Sum: %g\n", a + b);
    return 0;
}