#include <stdio.h>

struct Student {
    char name[20];
    int id;
};

int main() {
    struct Student s = {"Emon", 61};

    printf("Name: %s\n", s.name);
    printf("ID: %d\n", s.id);

    return 0;
}