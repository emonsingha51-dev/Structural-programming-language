#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100

struct Employee {
    int id;
    char name[50];
    char department[30];
    char designation[30];
    float salary;
};

/* Remove leftover characters (like '\n') from the input buffer */
void clearInput(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

/* Read a full line (with spaces) into buf */
void readLine(const char *prompt, char *buf, int size) {
    printf("%s", prompt);
    if (fgets(buf, size, stdin) != NULL) {
        buf[strcspn(buf, "\n")] = '\0';
    } else {
        buf[0] = '\0';
    }
}

void addEmployee(struct Employee emp[], int *count) {
    if (*count >= MAX_EMPLOYEES) {
        printf("Employee list is full!\n");
        return;
    }

    struct Employee e;

    printf("Enter ID: ");
    if (scanf("%d", &e.id) != 1) {
        printf("Invalid ID.\n");
        clearInput();
        return;
    }
    clearInput();

    for (int i = 0; i < *count; i++) {
        if (emp[i].id == e.id) {
            printf("An employee with ID %d already exists.\n", e.id);
            return;
        }
    }

    readLine("Enter Name: ", e.name, sizeof(e.name));
    readLine("Enter Department: ", e.department, sizeof(e.department));
    readLine("Enter Designation: ", e.designation, sizeof(e.designation));

    printf("Enter Salary: ");
    if (scanf("%f", &e.salary) != 1) {
        printf("Invalid salary.\n");
        clearInput();
        return;
    }
    clearInput();

    emp[*count] = e;
    (*count)++;
    printf("Employee added successfully!\n");
}

void viewAll(const struct Employee emp[], int count) {
    if (count == 0) {
        printf("No employee records found.\n");
        return;
    }

    printf("\n%-6s %-20s %-15s %-15s %10s\n",
           "ID", "Name", "Department", "Designation", "Salary");
    printf("--------------------------------------------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%-6d %-20s %-15s %-15s %10.2f\n",
               emp[i].id, emp[i].name, emp[i].department,
               emp[i].designation, emp[i].salary);
    }
}

void searchById(const struct Employee emp[], int count) {
    int id;
    printf("Enter ID to search: ");
    if (scanf("%d", &id) != 1) {
        printf("Invalid ID.\n");
        clearInput();
        return;
    }
    clearInput();

    for (int i = 0; i < count; i++) {
        if (emp[i].id == id) {
            printf("\nID          : %d\n", emp[i].id);
            printf("Name        : %s\n", emp[i].name);
            printf("Department  : %s\n", emp[i].department);
            printf("Designation : %s\n", emp[i].designation);
            printf("Salary      : %.2f\n", emp[i].salary);
            return;
        }
    }
    printf("No employee found with ID %d.\n", id);
}

int main(void) {
    struct Employee employees[MAX_EMPLOYEES];
    int count = 0;
    int choice;

    do {
        printf("\n===== Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. View All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            clearInput();
            choice = 0;
        } else {
            clearInput();
        }

        switch (choice) {
            case 1: addEmployee(employees, &count); break;
            case 2: viewAll(employees, count);      break;
            case 3: searchById(employees, count);   break;
            case 4: printf("Goodbye!\n");           break;
            default: printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);

    return 0;
}