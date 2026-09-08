#include <stdio.h>

int main() {
  int myAge = 20;
  int votingAge = 18;

  if (myAge >= votingAge) {
    printf("you are old enough to vote.");
  } else {
    printf("you are not old enough to vote.");
  }
  
  return 0;
}