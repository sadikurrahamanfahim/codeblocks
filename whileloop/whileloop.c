#include <stdio.h>
int main()
{
    int i=1,sum=0;
    while(i<=10)
        {
        sum=i+sum;
        i++;
    }
    printf("sum=%d",sum);

}
