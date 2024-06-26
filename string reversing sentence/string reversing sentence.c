#include <stdio.h>
void reversesentence();

int main()
{
    printf("Enter a sentence: ");
    reversesentence();
}

void reversesentence()
{
    char cha;
    scanf("%c",&cha);
    if (cha!='\n')
    {
        reversesentence();
        printf("%c",cha);
    }
}
