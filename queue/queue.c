#include <stdio.h>

char queue[100];
int front=-1, rear=-1, size;

void display()
{
    printf("Printing queue..\n");
    int i;
    if(isEmpty()==1)
    {
        printf("Queue is empty..");
        return;
    }
    if(front<=rear)
    {
        for(i=front;i<=rear;i++)
        {
            printf("%c",queue[i]);
        }
    }
    else
    {
        for(i=front;i<size;i++)
        {
            printf("%c",queue[i]);
        }
        for(i=0;i<=rear;i++)
        {
            printf("%c",queue[i]);
        }
    }
    printf("\n");
}

int isFull()
{
    if((rear+1)%size == front)
        return 1;
    else
        return 0;
}

int isEmpty()
{
    if(front==-1 && rear==-1)
        return 1;
    else
        return 0;
}


void enqueue(char element)
{
    if(isFull())
    {
        printf("Queue is full..\n");
    }
    else if(isEmpty())
    {
        front=0;
        rear=0;
        queue[rear] = element;
        printf("%c is enqueued..", queue[rear]);
    }
    else
    {
        rear = (rear+1)%size;
        queue[rear] = element;
        printf("%c is enqueued..", queue[rear]);
    }
    printf("Current front: %c, rear: %c\n",queue[front],queue[rear]);
}

void dequeue()
{
    printf("\n");
    if(isEmpty())
    {
        printf("Queue is empty!\n");
    }
    else if(front == rear)
    {
        printf("%c is dequeued..\n", queue[front]);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("%c is dequeued..\n", queue[front]);
        front = (front+1)%size;
    }
    printf("Current front: %c, rear: %c\n",queue[front],queue[rear]);
}

int main()
{
    printf("Enter queue size: ");
    scanf("%d", &size);
    enqueue('A');
    enqueue('B');
    enqueue('C');
    enqueue('D');

    dequeue();

    return 0;
}
