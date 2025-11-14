/* Program to check if a number is positive, negative, or zero using ?: */

#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Nested conditional operator
    (n > 0) ? printf("Positive\n") :
    (n < 0) ? printf("Negative\n") :
              printf("Zero\n");

    return 0;
}

