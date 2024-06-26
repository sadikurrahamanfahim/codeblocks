#include<stdio.h>
int main()
{
    int num;
    printf("enter number: ");
    scanf("%d",&num);
    if(num%2==0)
        printf("this is an even number");
    else
        printf("this is an odd number");
    return 0;
}
