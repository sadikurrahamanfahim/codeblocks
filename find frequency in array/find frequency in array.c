#include<stdio.h>
int main()
{
int a[5]={1,2,2,3,4};

int i,j,temp=0;

for (i=0;i<5;i++)
 {
    for(j=i+1;j<5;j++)
    {
        if(a[i]==a[j])
        {
            temp++;
            printf("%d",a[j]);
        }
    }
    printf("%d",temp);
 }
}
