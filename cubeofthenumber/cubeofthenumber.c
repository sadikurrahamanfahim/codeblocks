#include <stdio.h>
int main()
 {
    int i,n;
    printf("Input the number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
	 printf("Cube of %d is :%d \n",i,(i*i*i));
    }
 }
