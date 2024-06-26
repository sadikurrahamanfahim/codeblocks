#include<stdio.h>
int main()
{
    int n,i;

    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=0;n>0;n=n/10)
        i=i+(n%10);

    printf("Sum of digits: %d",i);
    return 0;
}
