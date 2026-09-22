#include <stdio.h>

int main() {
    printf("It\'s C!\n");
    printf("\"Hello C\"\n");
    printf("C:\\Program\n");
    printf("Name\tAge\n");
    printf("Rahim\t20\n");

    char str[] = "Hello\0World";
    printf("%s", str);

    return 0;
}