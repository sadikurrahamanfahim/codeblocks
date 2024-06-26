#include<stdio.h>
struct customer
{
    int payment;
    char name[50];
    char address[50];
    char paymentstatus[50];

} ;
int queue[100];
int front=-1, rear=-1, size;


/*void display()
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
            printf("%d",queue[i]);
        }
    }
    else
    {
        for(i=front;i<size;i++)
        {
            printf("%d",queue[i]);
        }
        for(i=0;i<=rear;i++)
        {
            printf("%d",queue[i]);
        }
    }
    printf("\n");
}*/

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


void enqueue(int element)
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
        printf("enqueue complete..\n");
    }
    else
    {
        rear = (rear+1)%size;
        queue[rear] = element;
        printf("enqueue complete..\n");
    }
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
        printf("dequeued..\n");
        front = -1;
        rear = -1;
    }
    else
    {
        printf("dequeued..\n");
        front = (front+1)%size;
    }
}


int store()
{
    struct customer s1;

    printf("\nenter name: ");
    scanf("%s",&s1.name);
    printf("enter payment: ");
    scanf("%d",&s1.payment);
    printf("enter address: ");
    scanf("%s",&s1.address);
    printf("enter payment status: ");
    scanf("%s",&s1.paymentstatus);

    show(s1);

}
void show(struct customer s)
{

   printf("\nDisplaying information\n");
   printf(" Name: %s", s.name);
   printf("\n payment: %d\n", s.payment);
   printf(" address: %s", s.address);
   printf("\n payment status is: %s\n", s.paymentstatus);

}

int main()
{
    printf("Enter queue size: ");
    scanf("%d", &size);

    for(int i=0;i<size;i++)
    {
        enqueue(store());
    }

    dequeue();

    return 0;
}

