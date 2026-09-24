#include <stdio.h>

int number = 50;

void showValue() {
    int number = 20;
    printf("Local value: %d\n", number);
}

int main() {
    showValue();
    printf("Global value: %d\n", number);

    return 0;
}