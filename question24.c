//Use continue to skip multiples of 5, break to stop at 40, and count how many numbers were printed.

#include <stdio.h>

int main() {
    int count = 0;

    for (int i = 1; i <= 50; i++) {

        if (i == 40) {
            break;  // stop at 40 before skipping
        }

        if (i % 5 == 0) {
            continue;   // skip multiples of 5
        }

        printf("%d ", i);
        count++;
    }

    printf("\nTotal numbers displayed: %d\n", count);

    return 0;
}


