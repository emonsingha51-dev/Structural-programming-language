#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    char district[30];
};

struct Organisation {
    char name[50];
    char location[50];
    int total;
    struct Employee e[10];
};

int main() {
    struct Organisation o;
    int i;

    printf("Organisation name: ");
    scanf("%s", &o.name);

    printf("Location: ");
    scanf("%s", &o.location);

    printf("Total employees (max 10): ");
    scanf("%d", &o.total);

    for (i = 0; i < o.total; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &o.e[i].id);

        printf("Name: ");
        scanf("%s", o.e[i].name);

        printf("Home district: ");
        scanf("%s", o.e[i].district);
    }

    printf("\n--- Organisation ---\n");
    printf("Name: %s\n", o.name);
    printf("Location: %s\n", o.location);
    printf("Total employees: %d\n", o.total);

    printf("\n--- Employees ---\n");
    for (i = 0; i < o.total; i++) {
        printf("%d  %s  %s\n", o.e[i].id, o.e[i].name, o.e[i].district);
    }

    return 0;
}