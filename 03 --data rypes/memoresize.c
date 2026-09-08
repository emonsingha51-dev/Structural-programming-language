#include<stdio.h>
int main() {
    int num1 = 5;
    float num2 = 5.5;
    char grade = 'A';
    double num3 = 10.123459;
    printf("%zu\n", sizeof(num1));
    printf("%zu\n", sizeof(num2));
    printf("%zu\n", sizeof(grade));
    printf("%zu", sizeof(num3));
    return 0;
}