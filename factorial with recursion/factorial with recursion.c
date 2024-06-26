#include<stdio.h>
int ff(int);
int main()
{
   int n, factorial;

   printf("Enter a positive integer:");

   scanf("%d",&n);

   factorial =ff(n);

   printf("\nfactorial is: %d", factorial);

   return 0;
}
int ff(int n)
{
   if(n==0)
      return(1);

   return(n*ff(n-1));
}
