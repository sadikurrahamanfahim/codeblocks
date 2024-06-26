#include <stdio.h>

void main()
{
    int arr1[6], fr1[6];
    int n,i,j,ctr;

       printf("Input elements in the array: \n",n);
       for(i=0;i<6;i++)
        {
	      printf("element[%d]: ",i);
	      scanf("%d",&arr1[i]);
		  fr1[i]=1;
	    }
    for(i=0;i<6;i++)
    {
        ctr=1;
        for(j=i+1;j<6;j++)
        {
            if(arr1[i]==arr1[j])
            {
                ctr++;
            }
        }
        fr1[j]=0;

        if(fr1[i]!=0)
        {
            fr1[i] = ctr;
        }
    }
    printf("Most arrival element: \n");

    int large=fr1[0];
    for(i=0; i<6; i++)
    {
        if(large<fr1[i])
            large=fr1[i];
    }
    printf("%d",large);
}
