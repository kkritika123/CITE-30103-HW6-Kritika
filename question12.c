#include <stdio.h>

int main() {
    int a = 5, b = 3, res1, res2;

    // Fix 1: parentheses
    res1 = (a + b) << 1;

    // Fix 2: arithmetic multiplication
    res2 = (a + b) * 2;

    printf("Fix using parentheses (a + b) << 1 = %d\n", res1);
    printf("Fix using arithmetic (a + b) * 2 = %d\n", res2);

    return 0;
}

