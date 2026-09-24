#include <stdio.h>

inline int multiply(int a, int b) {
    return a * b;
}

int main() {
    int x = 6;
    int y = 7;

    int result = multiply(x, y);

    printf("First Number: %d\n", x);
    printf("Second Number: %d\n", y);
    printf("Multiplication: %d\n", result);

    return 0;
}