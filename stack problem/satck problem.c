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
    return 0;
}

