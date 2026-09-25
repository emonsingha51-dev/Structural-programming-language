#include <stdio.h>

typedef struct {
    char brand[30];
    int year;
} Car;

int main() {
    Car car1 = {"Toyota", 2022};

    printf("Brand: %s\n", car1.brand);
    printf("Year: %d\n", car1.year);

    return 0;
}