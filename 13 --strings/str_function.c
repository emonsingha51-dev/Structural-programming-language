#include <stdio.h>
#include <string.h>

int main() {
    char a[30] = "Hello";
    char b[] = " World";
    char c[30];

    printf("Length: %zu\n", strlen(a));

    strcat(a, b);
    printf("Concat: %s\n", a);

    strcpy(c, a);
    printf("Copy: %s\n", c);

    printf("Compare: %d\n", strcmp(a, c));

    return 0;
}