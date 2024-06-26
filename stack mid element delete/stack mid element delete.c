#include<stdio.h>
int stack[10],top=-1,size=6;

void push(int x)
{
    if(top==size-1)
    {
        printf("stack is full\n",x);
    }
    else
    {
        top=top+1;
        stack[top]=x;
    }
}
int pop()
{
    int val=stack[top];
    top--;
}
int delmidelement()
{
    int ele,i,temp=0;
    printf("enter element: ");
    scanf("%d",&ele);

    for(i=0;i<top;i++)
    {
       if(stack[i]==ele)
        temp=stack[i];
        stack[i]=stack[i+1];
    }

    printf("after deleting:%d\n",ele);
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
}
int main()
{
    int i;
    push(17);
    push(5);
    push(123);
    push(25);
    push(12);
    push(83);

    printf("After push 83:\n");

    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
    pop();
    printf("Before push 83:\n");
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }

    delmidelement();
}
