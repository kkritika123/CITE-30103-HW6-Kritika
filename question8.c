/* Program to show global and local variable scope */

#include <stdio.h>

int globalVar = 10;   // Global variable

int main() {
    int localVar = 20;   // Local variable

    printf("Global variable = %d\n", globalVar);
    printf("Local variable = %d\n", localVar);

    return 0;
}

