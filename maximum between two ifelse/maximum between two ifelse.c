#include<stdio.h>
int main()
{
    int j,k;
    printf("Enter 1st number: ");
    scanf("%d",&j);
    printf("Enter 2nd number: ");
    scanf("%d",&k);

    if(j>k)
    {
        printf("%d is greater than %d",j,k);
    }
    else
    {
        printf("%d is greater than %d",k,j);
    }
    return 0;
}
