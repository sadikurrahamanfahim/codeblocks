#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j=1,k=0;
    float a,sum=1,sum1=0,gavg,aavg;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("\n input error\n");

    }
    else
    {
        for(i=1;i<=n;i++)
        {
            while(k<1)
        {
            printf("element %d:",j++);
            scanf("%f",&a);
            if(a<0)
            {
                printf("\ninput error");
                break;
            }
            sum=sum*a;
            sum1=sum1+a;
            k++;
        }
        k=0;
        }
    }
    gavg=(float)sum/n;
    aavg=(float)sum1/n;
    printf("\n Geometric avg is:%f\n",gavg);
    printf("\n Arithmetic avg is:%f\n",aavg);

    if(gavg>aavg)
    {
        printf("Geometric avg is larger\n");
    }
    else
    {
        printf("\n arithmetic average is larger\n");
    }
    return 0;
}

