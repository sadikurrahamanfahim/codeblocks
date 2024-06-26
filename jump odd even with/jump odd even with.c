#include<stdio.h>
int main()
{
    int n,i;
    jump:
        scanf("%d",&n);
        if(n%2==0){
            printf("this is even number\n");
        }
        else
        {
            printf("this is odd numbeer\n");
        }

        goto jump;
}
