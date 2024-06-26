/*#include<stdio.h>
int main()
{
    int num[]={24,34,12,44,56,17};
    int i;

    for(i=0;i<=5;i++)
    {
        printf("\n element no. %d",i);
        printf("address=%u",&num[i]);
    }
}
#include<stdio.h>
int main()
{
    static int a[]={0,1,2,3,4};
    int *p[]={a,a+1,a+2,a+3,a+4};
    printf("\n%u %u %d",p,&a[0],*(*p));
}
*/


#include<stdio.h>
int main()
{
    int array[]={5,2,0,3,7};
    int i,temp;
    int *j=array;

    for(i=0;i<5;i++)
    {
        if(array[i]==0)
        {
            temp=j[i];
            j[i]=j[i-1];
            j[i-1]=temp;

        }
    }

    printf("array iS: ");
    for(i=0;i<5;i++)
    {
        printf("%d",*j);
        j++;
    }
}

