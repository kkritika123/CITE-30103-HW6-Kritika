/* Program to check if a number is positive, negative, or zero using if-else-if-else */

#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("Positive\n");
    }
    else if (n < 0) {
        printf("Negative\n");
    }
    else {
        printf("Zero\n");
    }

    return 0;
}

