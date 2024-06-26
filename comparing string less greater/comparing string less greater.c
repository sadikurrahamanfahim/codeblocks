#include<stdio.h>
int main()
{
    int i,j,flag=0;
    char str1[100],str2[100];

    printf("enter 1st string: ");
    gets(str1);

    printf("enter 2nd string: ");
    gets(str2);

    for(i=0;str1[i]!=NULL;i++);
    for(j=0;str2[j]!=NULL;j++);

    if(i<j)
     printf("\n string 1 is less than string2");
    else if(i>j)
        printf("\n string 1 is gretaer");
    else
    {
        for(i=0; str1[i]!=NULL;i++)
        {
            if(str1[i]!=str2[j])
            {
                flag=1;
                break;
            }
        }
        if(flag=1)
            printf("\n strings are same");
            else
            printf("\n strings are not same");
    }
}
