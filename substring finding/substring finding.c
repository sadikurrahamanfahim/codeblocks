#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],substr[100],i,j,len,flag=0;
    printf("enter the main string: ");
    gets(str);

    printf("enter the substring: ");
    gets(substr);

    len=strlen(substr);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==substr[0])
        {
            j=1;
            while(substr[j]!='\0'&&str[j+i]!='\0'&&substr[j]==str[j+i])
            {
                j++;
            }
            if(j==len)
            {
                flag=1;
                printf("found in position %d",i);
                break;
            }
        }
    }
    if(flag==0)
        printf("substring not found");
}
