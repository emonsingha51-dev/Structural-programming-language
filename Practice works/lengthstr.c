#include<stdio.h>
int main () {
  char name [100];
  int i, count =0;
  printf(" enter your name ");
  gets(name );
 
  for ( i=0 ; name[i]!='\0';i++){
    count ++;
  }

  printf("the length of %s = %d ", name , count );
  return 0;

}