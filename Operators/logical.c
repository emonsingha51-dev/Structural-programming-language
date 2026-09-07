#include<stdio.h>
int main() {
  int phone = 1;
  int laptop = 0;
  printf("And : %d\n", phone && !laptop);
  printf("or: %d\n", phone || laptop);
  printf("Not: %d\n", !phone);

  return 0;
}
