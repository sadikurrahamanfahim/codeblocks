#include<stdio.h>
int main()
{
    int day;
    printf("Enter week number: ");
    scanf("%d",&day);

    switch(day)
    {
        case 1:
        printf(" Monday");
        break;
        case 2:
        printf(" Tuesday");
        break;
        case 3:
        printf(" Wednesday");
        break;
        case 4:
        printf(" Thurseday");
        break;
        case 5:
        printf(" Friday");
        break;
        case 6:
        printf(" Saturday");
        break;
        case 7:
        printf(" Sunday");
        break;
        default:
        printf(" Sorry! can't print %dth day of the week for you",day);
    }
}
