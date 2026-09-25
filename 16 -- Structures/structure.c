#include <stdio.h>

struct Student {
    char name[30];
    int id;
    float marks;
};

int main() {
    struct Student student1 = {"Emon", 101, 85.5};

    printf("Student Information\n");
    printf("Name: %s\n", student1.name);
    printf("ID: %d\n", student1.id);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}
