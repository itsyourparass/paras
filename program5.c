 
#include <stdio.h>
int main(void) {
    double length, width;
    printf("Enter length and width separated by space: ");
    if (scanf("%lf %lf", &length, &width) != 2 || length < 0 || width < 0) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }

    double area = length * width;
    double perimeter = 2.0 * (length + width);

    printf("Area: %.2f\nPerimeter: %.2f\n", area, perimeter);
    return 0;
} 