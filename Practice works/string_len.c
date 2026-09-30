#include<stdio.h>
int main(){
     int i, count =0;
     char str[100];
     char str1[100];

     printf("enter your string ");
     gets(str);

     for ( i=0;str[i] != '\0';i++){
         str1[i]=str[i];
        
     }

     str1[i]='\0';
    printf("%s", str1);


    return 0;
}