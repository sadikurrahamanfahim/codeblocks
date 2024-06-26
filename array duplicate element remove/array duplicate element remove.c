#include <stdio.h>
int main()
{
    int n,array1[10],array2[10],count=0,i,j;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        printf("element[%d]: ",i);
        scanf("%d",&array1[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<count; j++)
        {
            if(array1[i]==array2[j])
                break;
        }
        if (j==count)
        {
            array2[count]=array1[i];
            count++;
        }
    }

    printf("Array after removing duplicate elements: ");

    for (i=0; i<count; i++)
        printf("%d",array2[i]);

    return 0;
}
