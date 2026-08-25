#include <stdio.h>
int main()
{
   int n;
   int a1 = 0, a2 = 1;
   int next = a1 + a2;
   printf("enter your number");
   scanf("%d", &n);
   printf("fiboncci series is %d, %d,", a1, a2);
   for (int i = 3; i <= n; i++)
   {
      printf("%d,", next);
      a1 = a2;
      a2 = next;
      next = a1 + a2;
   }
   return 0;
}