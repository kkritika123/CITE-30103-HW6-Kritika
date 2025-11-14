/* Program to check if a number is divisible by 2 and 3 but NOT 7 */

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if ( (n % 2 == 0) && (n % 3 == 0) && (n % 7 != 0) ) {
        printf("%d is divisible by 2 and 3, but NOT by 7.\n", n);
    } else {
        printf("%d does NOT meet the condition.\n", n);
    }

    return 0;
}

