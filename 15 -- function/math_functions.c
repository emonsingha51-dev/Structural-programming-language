#include <stdio.h>
#include <math.h>

int main() {
    double number = 25.7;
    double base = 3;
    double exponent = 4;

    printf("Square Root: %.2f\n", sqrt(number));
    printf("Rounded Up: %.2f\n", ceil(number));
    printf("Rounded Down: %.2f\n", floor(number));
    printf("Power: %.2f\n", pow(base, exponent));

    return 0;
}