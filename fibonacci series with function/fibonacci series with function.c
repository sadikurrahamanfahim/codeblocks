#include<stdio.h>
void fibo(int);
void main()
{
   int num;
   printf("Enter a number: ",num);
   scanf("%d",&num);
   fibo(num);
}

void fibo(int num)
{
   int i,a,b,c;
   a=0;
   b=1;
   c=0;
   printf("Fibonacci series for %d: \n",num);
   for(i=0;i<num;i++)
   {
       printf(" %d ",c);
       a=b;
       b=c;
       c=a+b;
   }
}
