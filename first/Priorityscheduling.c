#include<stdio.h>
int main()
{
  int p,pro[10],brust[10],wait[]={0,0,0,0,0,0,0,0},tat[20],temp,prio[20];
  float waitavg=0,tatavg=0;

  printf("enter process number: ");
  scanf("%d",&p);

  for(int i=0;i<p;i++)
  {
     pro[i]=i+1;
     printf("enter brust time for process [%d]: ",i+1);
     scanf("%d",&brust[i]);
     printf("enter prioty for process [%d]: ",i+1);
     scanf("%d",&prio[i]);
  }
  printf("\n");

  for(int i=0;i<p;i++)
  {
    for(int j=i+1;j<p;j++)
    {
      if(prio[i]>prio[j])
      {
         temp=prio[i];
         prio[i]=prio[j];
         prio[j]=temp;

         temp=brust[i];
         brust[i]=brust[j];
         brust[j]=temp;

         temp=pro[i];
         pro[i]=pro[j];
         pro[j]=temp;
      }
      else if(prio[i]==prio[j]&&brust[i]>brust[j])
      {
         temp=prio[i];
         prio[i]=prio[j];
         prio[j]=temp;

         temp=brust[i];
         brust[i]=brust[j];
         brust[j]=temp;

         temp=pro[i];
         pro[i]=pro[j];
         pro[j]=temp;
      }
        else if(prio[i]==prio[j]&&brust[i]==brust[j]&&pro[i]>pro[j])
      {
         temp=prio[i];
         prio[i]=prio[j];
         prio[j]=temp;

         temp=brust[i];
         brust[i]=brust[j];
         brust[j]=temp;

         temp=pro[i];
         pro[i]=pro[j];
         pro[j]=temp;
      }
    }
  }

  for(int i=0;i<p;i++)
  {
    printf("%d",pro[i]);
  }
  for(int i=0;i<p;i++)
  {
    printf("%d",brust[i]);
  }

  tat[0]=brust[0];
  for(int i=1;i<p;i++)
  {
    wait[i]=wait[i-1]+brust[i-1];
    tat[i]=brust[i]+wait[i];
    waitavg=waitavg+wait[i];
    tatavg=tatavg+tat[i];
  }

  printf("\n process \tbrust \twaiting \tTat \tPriority");
  for(int i=0; i<p;i++)
  {
  printf("\n%d \t\t%d \t%d \t\t%d \t%d",pro[i],brust[i],wait[i],tat[i],prio[i]);
  }

  waitavg=waitavg/p;
  tatavg=tatavg/p;

  printf("\navg waiting and tat: %d, %d",waitavg,tatavg);
}


