/* Program to show integer and floating-point division using casting */

#include <stdio.h>

int main() {
    int a = 7, b = 2;

    // Integer division
    int intResult = a / b;

    // Implicit casting (one value is float)
    float floatImplicit = a / (float)b;

    // Explicit casting (cast the whole expression)
    float floatExplicit = (float)a / b;

    printf("Integer division (7 / 2) = %d\n", intResult);
    printf("Floating division (implicit) = %.2f\n", floatImplicit);
    printf("Floating division (explicit) = %.2f\n", floatExplicit);

    return 0;
}

