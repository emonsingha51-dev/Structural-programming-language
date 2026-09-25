#include <stdio.h>

struct Car {
    char brand[20];
    int year;
};

int main() {
    struct Car myCar = {"Toyota", 2022};


    struct Car *ptr = &myCar;

    printf("Brand: %s\n", ptr->brand);
    printf("Year: %d\n", ptr->year);

    return 0;
}