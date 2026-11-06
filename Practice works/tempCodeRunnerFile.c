#include<stdio.h>
int main () {
   char name [100];
   int i ;
   int count = 0;
    printf("enter your name ");
     fgets(name, sizeof(name), stdin);
     for ( i=0;name[i] !='\0';i++){
        count++;
    }

    printf("the length of %s = %d", name , count );
  return 0;

}