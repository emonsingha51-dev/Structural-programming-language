#include<stdio.h>
int main(){
      int n,a=0;
      printf("enter number ");
      scanf("%d",&n);
     for (int i=2;i<=n-1;i++){
          if (n%i==0){
           a=1;
            break;
          }
        
       }
       if (n==1){
        printf("the number is either prime or composite");
      
       }
       else if(a==0){
        printf("prime number");
       }
       else{
        printf("composite");
       }

    return 0;

}
