#include<stdio.h>
int main()
{
    int n,j,sum=0;

        printf("enter 1st positive number: ");
        scanf("%d",&n);
         printf("enter 2nd positive number: ");
        scanf("%d",&j);
        if(n%2==0)
        {
            printf("The 1st number is even\n");
        }
        else
        {
            printf("the 1st number is odd\n");

        }
        if(j%2==0)
            {
                printf(" the 2nd number is even\n");
            }
             else
        {
            printf("the 2nd number is odd\n");
        }

    sum=n+j;
    printf("sum is:%d",sum);
    return 0;
}
