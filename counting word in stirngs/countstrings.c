#include <stdio.h>
int main()
{
    char str[10000];
    int i=0,n=1;
    printf("Enter string: ");
    gets(str);
    while(str[i] != '\0')
    {
        if(str[i]==' ' || str[i]=='\n' )
        {
            n++;
        }
        i++;
    }
    printf("Total words = %d", n);

    return 0;
}
