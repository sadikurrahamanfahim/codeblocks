#include<stdio.h>
int findfactorial(int num);
int main(){
  int i,num,factorial;

  printf("Enter a number: ");
  scanf("%d",&num);

  factorial=findfactorial(num);

  printf("Factorial of %d is: %d",num,factorial);
  return 0;
}
int findfactorial(int num)
{
    int i,factorial=1;
    for(i=1;i<=num;i++)
      factorial=factorial*i;
      return factorial;
}
