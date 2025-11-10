#include <stdio.h>
int main() {
    char name[20];
    int age;
    float marks;
    printf("enter name, age and marks: ");
    if (scanf("%19s %d %f", name, &age, &marks) != 3) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }
    printf("name: %s\nage: %d\nmarks: %.2f\n", name, age, marks);
    return 0;
}