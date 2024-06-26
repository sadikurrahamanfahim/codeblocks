#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,total,avg;
    printf("Enter mark of 1st subject: ");
    scanf("%d",&s1);
    printf("Enter mark of 2nd subject: ");
    scanf("%d",&s2);
    printf("Enter mark of 3rd subject: ");
    scanf("%d",&s3);
    printf("Enter mark of 4th subject: ");
    scanf("%d",&s4);
    printf("Enter mark of 5th subject: ");
    scanf("%d",&s5);

    total=s1+s2+s3+s4+s5;
    avg=total/5;

    printf("Total mark is: %d\nAverage mark is: %d",total,avg);
    return 0;
}
