#include <stdio.h>
void main()
{
    int num,i,sum,n;

    printf("Enter a number: ");
    scanf("%d",&num);

    for(n=num;num!=0;num=num/10)
    {
         i=num%10;
         sum=sum*10+i;
    }
printf("Reverse order is: %d\n",sum);
}

