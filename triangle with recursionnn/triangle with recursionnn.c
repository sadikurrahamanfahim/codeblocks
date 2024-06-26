#include<stdio.h>

void triangle(int num)
{
    int i=0;
    if(num==6)return;
    else
    {
        for (i=1;i<num;i++)
        {
            printf("*");
        }
        printf("\n");
    triangle(num+1);
    }

}

int main()
{
    printf("printing triangle\n");
    triangle(1);
}
