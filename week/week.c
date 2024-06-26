#include<stdio.h>
int main()
{
    int num;
    printf("enter the number of day:");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
            {
                printf("Saturday");
                break;
            }

        case 2:
            {
                printf("Sunday");
                break;
            }
        case 3:
            {
                printf("Monday");
                break;
            }
        case 4:
            {
                printf("Tuesday");
                break;
            }
        case 5:
            {
                printf("Wednesday");
                break;
            }
        case 6:
            {
                printf("Thursday");
                break;
            }
        default:
            {
                printf("Friday");
                break;
            }
    }
}
