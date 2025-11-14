/* Program to perform basic arithmetic on two integers */

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);

    if (b != 0) {
        printf("Division = %d\n", a / b);
        printf("Remainder = %d\n", a % b);
    } else {
        printf("Division and remainder not possible (division by zero)\n");
    }

    return 0;
}

