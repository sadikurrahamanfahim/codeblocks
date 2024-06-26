#include<stdio.h>
int main()
{
    int i,num,sum=0;
    printf("enter the maximum value:");
    scanf("%d",&num);
    printf("\nodd number between 0 and %d are:",num);
    for(i=1;i<=num;i++)
    {
        if(i%2!=0)
        {
            printf("%d",i);
            sum=sum+i;

        }
    }
    printf("\nsum of the odd number=%d",sum);
}
