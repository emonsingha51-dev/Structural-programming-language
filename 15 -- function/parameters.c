#include <stdio.h>

// Function to calculate rectangle area
float calculateArea(float length, float width) {
    return length * width;
}

int main() {
    
    float length = 12.5;
    float width = 8.0;

    float area = calculateArea(length, width);


    printf("Length: %.2f\n", length);
    printf("Width: %.2f\n", width);

    printf("Rectangle Area: %.2f\n", area);

    return 0;
}