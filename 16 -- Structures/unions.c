#include <stdio.h>

union MyUnion {
    int myNum;
    char myLetter;
};

int main() {
    union MyUnion u1;

    u1.myNum = 65;
    printf("Number is: %d\n", u1.myNum);

    u1.myLetter = 'A';
    printf("Letter is: %c\n", u1.myLetter);

    printf("Number after setting letter: %d\n", u1.myNum); 

    return 0;
}