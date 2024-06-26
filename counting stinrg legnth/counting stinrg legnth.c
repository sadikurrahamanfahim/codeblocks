#include<stdio.h>
int main()
{
    char str[1000];
    int i,length=0;
    printf("enter string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        length++;
    }
    printf("length is: %d",length);
}
