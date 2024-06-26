#include<stdio.h>
int main()
{
    int i,j,n;
    int space=10;
    printf("Enter the N:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	    for(j=0;j<space;j++)
	    {
		    printf(" ");
	    }
	    for(j=0;j<=i;j++)
	    {
		    printf("* ");
	    }

	    printf("\n");
	    space--;
    }

}
