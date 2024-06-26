#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[10], str2[10], c[10];
    int i, j, k=0, x, count,compare;

    printf("Enter 1st string: ");
    scanf("%s", &str1[i]);

    printf("Enter 2nd string: ");
    scanf("%s", &str2[i]);

    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            if(str1[i]==str2[j])
            {
                count=0;
                for(x=0; x<10; x++)
                {
                    if(str1[i]==c[x])
                        count++;
                }
                if(count==0)
                {
                    c[k] = str1[i];
                    k++;

                }
            }
        }
    }

    compare = strcmp(str2, c);
    if(compare == 0)
        printf("\nyes");
    else
        printf("\nno");
}
