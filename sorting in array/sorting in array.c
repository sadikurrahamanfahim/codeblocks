#include<stdio.h>
int main()
{
    int a[50],i,n,j,temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for (i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
