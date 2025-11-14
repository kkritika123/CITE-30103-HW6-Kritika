/* Program to correctly calculate the average of two integers */

#include <stdio.h>

int main(void) {
    int a = 5, b = 10;

    /* Correct: use 2.0 or cast to float so division is not integer division */
    float avg = (a + b) / 2.0;

    printf("Average = %.2f\n", avg);

    return 0;
}

