#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int *ptr = numbers;

    printf("First value: %d\n", *ptr);

    ptr++;
    printf("After ptr++: %d\n", *ptr);

    ptr++;
    printf("After ptr++: %d\n", *ptr);

    ptr--;
    printf("After ptr--: %d\n", *ptr);

    ptr = ptr + 2;
    printf("After ptr + 2: %d\n", *ptr);

    ptr = ptr - 1;
    printf("After ptr - 1: %d\n", *ptr);

    return 0;
}