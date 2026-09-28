#include <stdio.h>

void count() {
    static int x = 0;
    x++;
    printf("%d\n", x);
}

int main() {
    count();
    count();
    count();

    return 0;
}