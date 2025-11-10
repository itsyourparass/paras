#include <stdio.h>

int main() {
    float p,r,t;
    printf("Enter p r t: ");
    scanf("%f%f%f",&p,&r,&t);
    printf("Simple Interest = %.2f",(p*r*t)/100);
    return 0;
}
