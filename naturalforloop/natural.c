#include <stdio.h>
int main()
{
   int i,n,sum=0;
   printf("enter number:");
   scanf("%d",&n);
   printf("\n natural numbers are:\n",n);
   for(i=1;i<=n;i++)
   {
     printf("%d ",i);
     sum+=i;
   }
   printf("\nSum of natural numbers is: %d \n",sum);

}
