//Read a positive integer and reverse its digits using a while loop. Show both input and reversed number.

#include <stdio.h>

int main() {
    int num, reversed = 0, remainder, original;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    original = num; // store original number

    while (num != 0) {
        remainder = num % 10;           // get last digit
        reversed = reversed * 10 + remainder;  // build reversed number
        num = num / 10;                 // remove last digit
    }

    printf("Original number: %d\n", original);
    printf("Reversed number: %d\n", reversed);

    return 0;
}

