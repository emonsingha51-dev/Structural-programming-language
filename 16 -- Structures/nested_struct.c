#include <stdio.h>

struct Owner {
    char name[20];
};

struct Car {
    char brand[20];
    struct Owner owner;
};
int main() {

    struct Car myCar = {"Toyota", {"John"}};

    printf("Brand: %s\n", myCar.brand);
    printf("Owner: %s\n", myCar.owner.name);

    return 0;
}