#include <stdio.h>
int main()
{
   int m,n,c,d,sum[10][10];
   int first[2][2]={{1,2},{2,2}};
   int second[2][2]={{2,4},{3,2}};

   printf("Sum of entered matrices:-\n");

   for (c=0;c<2;c++)
    {
      for (d=0;d<2;d++)
      {
         sum[c][d]=first[c][d]+second[c][d];
         printf("%d\t",sum[c][d]);
      }
      printf("\n");
    }

   return 0;
}
