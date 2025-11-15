//Using nested loops, print multiplication tables for a user-specified range (L to R)

#include <stdio.h>

int main() {
    int L, R;

    printf("Enter starting number (L): ");
    scanf("%d", &L);

    printf("Enter ending number (R): ");
    scanf("%d", &R);

    for (int i = L; i <= R; i++) {
        printf("\nTable of %d\n", i);   // Table header

        for (int j = 1; j <= 10; j++) {  // Print x1 to x10
            printf("%d x %d = %d\n", i, j, i * j);
        }

        printf("\n");  // blank line between tables
    }

    return 0;
}

