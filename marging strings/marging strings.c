#include<stdio.h>
int main()
{
    int n=0,m=0;
    char pick1[100],pick2[100];
    printf("Input 1st string:");
    gets(pick1);
    printf("Input 2nd string:");
    gets(pick2);
    while (pick1[n]!='\0')
    {
        n++;
    }
    while (pick2[m]!='\0')
    {
        pick1[n]=pick2[m];
        n++;
        m++;
    }
    pick1[n]='\0';
    printf("Merged string:%s",pick1);
}
