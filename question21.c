//Print a centered pyramid of stars using nested for loops.

#include <stdio.h>

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        // print spaces
        for (int s = 1; s <= rows - i; s++) {
            printf(" ");
        }
        // print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

