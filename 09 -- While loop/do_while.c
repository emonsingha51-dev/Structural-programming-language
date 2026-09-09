#include <stdio.h>

int main() {
  int age = 10;

  do {
    printf("age  is %d years old \n", age);
    age++;
  } while (age < 5);
  
  return 0;
}