
#include<stdio.h>
int main()
{
    int array[]={-3,-10,-1};
    int i,large=array[0];
    for(i=0; i<3; i++)
    {
        if(large<array[i])
            large=array[i];
    }
    printf("%d",large);
}


/*#include<stdio.h>
int main()
{
    int array[5]={1,24,24,35,45};
    int i=0,large=0;

    for(i=0; i<5; i++)
    {
        if(array[i]==array[i+1])
            large=array[i];
    }

    for(i=0;)
    printf("%d",large);
}
*/
