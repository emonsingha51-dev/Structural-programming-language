#include<stdio.h>

int main (){
    char str1[50],str2[50];
    int i;
    printf(" enter your name ");
    fgets(str1, sizeof(str1),stdin);
    for ( i=0;str1[i]!='\0';i++){
        str2[i]=str1[i];
    
    }
    str2[i]='\0';
    printf(" length of string is %s", str2 );
    return 0;

}