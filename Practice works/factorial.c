#include<stdio.h>
int factorial ( int n ) {
    if(n==1) return 1;
    return n* factorial ( n-1);
}

int main (){
    int n ;
    printf(" enter your number ");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("factorial of the number is : %d  ", fact );
    return 0;


}