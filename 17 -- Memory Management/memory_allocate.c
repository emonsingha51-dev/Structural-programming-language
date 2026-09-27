#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    ptr = malloc(5 * sizeof(int));

    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    ptr[3] = 40;
    ptr[4] = 50;

    printf("%d\n", ptr[0]);
    printf("%d\n", ptr[1]);
    printf("%d\n", ptr[2]);
    printf("%d\n", ptr[3]);
    printf("%d\n", ptr[4]);

    free(ptr);

    return 0;
}

