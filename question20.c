// Use a do-while loop to repeatedly accept integers until the user enters 0.

#include <stdio.h>

int main() {
    int num;
    int count = 0;

    do {
        printf("Enter an integer (0 to stop): ");
        scanf("%d", &num);

        if (num != 0) {
            count++;   // increase count only when num is not zero
        }

    } while (num != 0);

    printf("Total numbers entered (excluding 0) = %d\n", count);

    return 0;
}

