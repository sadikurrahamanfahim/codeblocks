#include<stdio.h>
int main()
{
    int array[100],i,n,j,k=0;
    printf("enter array size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter element[%d]: ",i);
        scanf("%d",&array[i]);
    }

    printf("value is: %d",array[i]);
}
