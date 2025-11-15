// Using a do-while loop, read integers until 0 is entered. Count positives, negatives, evens, and odds (excluding 0).

#include <stdio.h>

int main() {
    int num;
    int positive = 0, negative = 0, even = 0, odd = 0;

    do {
        printf("Enter an integer (0 to stop): ");
        scanf("%d", &num);

        if (num != 0) {
            if (num > 0)
                positive++;
            else
                negative++;

            if (num % 2 == 0)
                even++;
            else
                odd++;
        }

    } while (num != 0);

    printf("\nResults:\n");
    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;
}

