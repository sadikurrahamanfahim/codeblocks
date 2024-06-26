#include <stdio.h>
int main()
{
  int i, n, factorial = 1;

  printf("Enter positive integer:");

  scanf("%d", &n);

  for (i = 1; i <= n; i++)

    factorial = factorial * i;

  printf("\nFactorial is: %d", factorial);

  return 0;
}
