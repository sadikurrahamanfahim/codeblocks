#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top = -1;
char stack[10];

void push(char);
void pop();
void find_top();

void main()
{
	int i;
	char a[10];
	printf("enter string: ");
	scanf("%s",&a);
	for (i=0;a[i]!='\0';i++)
	{
		if (a[i] == '(')
		{
			push(a[i]);
		}
		else if (a[i] == ')')
		{
			pop();
		}
	}
	find_top();
}

void push(char a)
{
        stack[top] = a;
        top++;
}

void pop()
{
	if (top == -1)
	{
		printf("no\n");
		exit(0);
	}
	else
	{
		top--;
	}
}

void find_top()
{
	if (top == -1)
		printf("\nyes");
	else
		printf("\nno");
}

