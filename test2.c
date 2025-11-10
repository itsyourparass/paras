#include <stdio.h>

int main() {
    int num1, num2;
    
    // Input two values
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Perform basic operations
    printf("\nResults:\n");
    printf("Sum: %d\n", num1 + num2);
    printf("Difference: %d\n", num1 - num2);
    printf("Product: %d\n", num1 * num2);
    
    // Check for division by zero
    if (num2 != 0) {
        printf("Division: %.2f\n", (float)num1 / num2);
    } else {
        printf("Cannot divide by zero\n"); 
    }
    
    return 0;
}