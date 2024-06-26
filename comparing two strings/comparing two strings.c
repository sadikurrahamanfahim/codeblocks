#include<stdio.h>
int main()
{
    char a[500],b[500];
    int i,flag=0;
    printf("enter 1st string: ");
    gets(a);
    printf("enter 2nd string: ");
    gets(b);
    for(i=0;a[i]!='/0';i++)
    {
        if(a[i]!=b[i]) flag=1;
        break;
    }
    if(flag==1)
        printf("strings are not same...");
    else
        printf("strings are same...");
}
