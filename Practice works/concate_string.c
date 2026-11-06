#include<stdio.h>
int main () {
    char name1[20];
    char name2[20];
    int i,j;

    printf("enter your first name ");
    gets(name1);
    printf("enter your last name ");
    gets(name2);

    i=0;
    while ( name1[i]!='\0'){
        i++;
    }

    j=0;
    while( name2[j]!='\0'){
        name1[i]=name2[j];
        i++;
        j++;

    }

    name1[i]='\0';

    printf( " the concatenate is %s", name1);
    return 0;
    
}