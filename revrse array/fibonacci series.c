#include<stdio.h>
int main()
{
    int a[50],i,max,n,min;

    printf("enter the size of array: ");
    scanf("%d",&n);

    printf("enter elements: \n");

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=n-1;i>=0;i--)
    {
        printf("\n%d",a[i]);
    }
}
