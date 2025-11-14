/* Program to compute area and circumference of a circle
   using both #define and const for PI */

#include <stdio.h>

#define PI_DEFINE 3.14159   

int main() {
    float radius;
    const float PI_CONST = 3.14159;  

    printf("Enter radius: ");
    scanf("%f", &radius);

    float area = PI_DEFINE * radius * radius;
    float circumference = 2 * PI_CONST * radius;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}

