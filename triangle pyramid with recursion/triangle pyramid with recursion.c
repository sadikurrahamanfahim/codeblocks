#include <stdio.h>

void triangle(int n)
{
    int i,j;
    if(n==10)return;

    else
    {
    for (i=n;i>1;i--)
      printf(" ");

    for (j=1;j<n;j++)
      printf(" *");

    printf("\n");
    triangle(n+1);
   }
}

int main()
{
  triangle(1);
}
