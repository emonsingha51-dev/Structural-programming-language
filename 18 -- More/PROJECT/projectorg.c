
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

    printf("Enter Organisation Name: ");
    scanf("%49s", o.name);

    printf("Enter Location: ");
    scanf("%49s", o.location);

    printf("Enter Total Employees (1-10): ");
    scanf("%d", &o.total);

    if (o.total < 1 || o.total > 10) {
        printf("Invalid number of employees!\n");
        return 0;
    }

    for (i = 0; i < o.total; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &o.e[i].id);

        printf("Enter Name: ");
        scanf("%29s", o.e[i].name);

        printf("Enter Home District: ");
        scanf("%29s", o.e[i].district);
    }

    printf("\n--- Organisation Information ---\n");
    printf("Name: %s\n", o.name);
    printf("Location: %s\n", o.location);
    printf("Total Employees: %d\n", o.total);

    printf("\n--- Employee Information ---\n");

    for (i = 0; i < o.total; i++) {
        printf("\nID: %d\n", o.e[i].id);
        printf("Name: %s\n", o.e[i].name);
        printf("Home District: %s\n", o.e[i].district);
    }

    return 0;
}
