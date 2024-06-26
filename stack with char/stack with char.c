#include<stdio.h>
char stack[10],top=-1,size=6;

void push(char x)
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
    char val=stack[top];
    top--;
}

int main()
{
    int i;
    push('A');
    push('B');
    push('C');
    push('D');
    push('E');
    push('F');

    printf("After push\n");

    for(i=top;i>=0;i--)
    {
        printf("%c ",stack[i]);
    }
    pop();
    printf("\nBefore pop\n");
    for(i=top;i>=0;i--)
    {
        printf("%c ",stack[i]);
    }
    return 0;
}


