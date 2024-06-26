#include<stdio.h>
int main()
{
    char ch;
    printf("enter character:");
    scanf("%c",&ch);
    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
        printf("this is an alphabet");
    else if(ch>='0'&&ch<='9')
        printf("this is a digit");
    else
        printf("this is a special character");
}
