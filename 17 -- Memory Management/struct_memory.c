
#include <stdio.h>

struct Student {
    int id;
    int age;
};

int main() {
    struct Student s = {101, 20};

    printf("ID: %d\n", s.id);
    printf("Age: %d\n", s.age);

    return 0;
}

