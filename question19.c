/* Program to compute sum of numbers from 1 to n using a while loop */

#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n) {
        sum = sum + i;
        i++;
    }

    printf("Sum = %d\n", sum);

    return 0;
}

