#include <stdio.h>
int checkprimenumber(int i);
int main()
{
    int min,max,i,j,flag;
    printf("Enter first number: ");
    scanf("%d", &min);

    printf("Enter second number: ");
    scanf("%d", &max);

    for(i=min;i<=max;i++)
    {
        flag=checkprimenumber(i);
    if(flag==1)
        printf("%d\t",i);
    }
}
int checkprimenumber(int i)
{
        int j,flag=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        return flag;
}
