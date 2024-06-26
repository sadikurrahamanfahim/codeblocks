#include<stdio.h>
#include<math.h>
int main()
{
    int b_5,n,i;
    int k=0;
    b_5=3;
    int sum=0;
    printf("Enter the value of N:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(k==5)
            continue;
            sum+=k;
            k++;
    }
    printf("The summation is:%d",sum);
    return 0;
}

