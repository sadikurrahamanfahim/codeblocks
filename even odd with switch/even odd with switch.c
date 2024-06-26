#include<stdio.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    switch(num%2)
    {
        case 0:
            printf("Number is Even");
            break;
        default:
            printf("Number is Odd");
            break;
    }

    return 0;
}
