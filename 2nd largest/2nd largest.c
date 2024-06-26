#include <stdio.h>
int main()
{
    int arr[10000],size,i,k=0;
    int m1,m2;
    printf("Enter array size:");
    scanf("%d",&size);
    for (i=1;i<=size;i++)
    {
        printf("Element[%d]:",i);
        scanf("%d",&arr[i]);
    }
    m1=m2=-999;
    for (i=1;i<=size;i++)
    {
        if (arr[i]>m1)
        {
            m2=m1;
            m1=arr[i];
        }
    }
    for (i=1;i<=size;i++)
    {
        if (arr[i]<m2||arr[i]==m1)
        {

        }
        else
        {
            m2 = arr[i];
            k = i;
        }
    }
    printf("\nSecond largest:%d", m2);
    printf("\nSecond numbers position:%d", k);
    return 0;
}
