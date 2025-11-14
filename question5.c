/* Corrected program for reading an integer */

#include <stdio.h>

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);   // Correct: use &n to pass the address

    printf("You entered %d\n", n);

    return 0;
}

