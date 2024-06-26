#include <stdio.h>
int main()
{
  int n,i=2,j,c;

  printf("Enter the number:");
  scanf("%d",&n);

  if (n>=1)
    {
    printf("prime numbers are:");

  }

  for (j=2;j<=n;j++)
  {
    for (c=2;c<=i-1;c++)
    {
      if (i%c==0)
        break;
    }
    if (c==i)
    {
      printf("%d,",i);

    }
    i++;
  }

}
