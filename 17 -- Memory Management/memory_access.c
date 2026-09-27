
#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;

    printf("Value of x: %d\n", x);
    printf("Value using pointer: %d\n", *ptr);

    return 0;
}

