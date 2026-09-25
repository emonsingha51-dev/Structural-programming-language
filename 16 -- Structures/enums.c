#include <stdio.h>

typedef enum {
    LOW = 1,
    MEDIUM,
    HIGH
} Level;

int main() {
    Level myVar = MEDIUM;

    switch (myVar) {
        case 1:
            printf("Low Level\n");
            break;
        case 2:
            printf("Medium level\n");
            break;
        case 3:
            printf("High level\n");
            break;
    }

    return 0;
}