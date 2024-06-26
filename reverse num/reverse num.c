#include<stdio.h>
int main()
{
    int a,b,sum,remainder,rev=0;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);
    sum=a+b;
    printf("summation is: %d",sum);
    while(sum!=0)
    {
        remainder=sum%10;
        rev=rev*10+remainder;
        sum/=10;
    }
    printf("\nreverse number is:%d",rev);

}

