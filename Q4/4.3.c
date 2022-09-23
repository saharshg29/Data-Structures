#include <stdio.h>
#include <stdlib.h>
#define size 5

struct queue
{
    int front, rear;
    int data[size];
};

typedef struct queue CQUEUE;

void enqueue(CQUEUE *q, int item)
{
    if (q->front == (q->rear + 1) % size)
        printf("Queue full");
    else
    {
        q->rear = (q->rear + 1) % size;
        q->data[q->rear] = item;
        if (q->front == -1)
        {
            q->front = q->front + 1;
        }
    }
}

void dequeue(CQUEUE *q)
{
    if (q->front == -1)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("\nElement deleted is %i", q->data[q->front]);
        if (q->front == q->rear)
        {
            q->front = -1;
            q->rear = -1;
        }
        else
        {
            q->front = (q->front + 1) % size;
        }
    }
}

void display(CQUEUE q)
{
    int i;
    if (q.front == -1)
    {
        printf("Empty queue");
    }
    else
    {
        printf("Queue contents are \n");
        for (i = q.front; i != q.rear; i = (i + 1) % size)
            printf("%i \t", q.data[i]);
        printf("%i\t", q.data[i]);
    }
}

void main()
{
    int newSize;
    int choice;
    int item;
    scanf("%i", &newSize);
    CQUEUE q;
    q.data[newSize];
    q.front = -1;
    q.rear = -1;

    for (;;)
    {
        printf("\n1) Enqueue \n");
        printf("2) Dequeue \n");
        printf("3) Display \n");
        printf("4) Exit \n");
        printf("Enter choice ");
        scanf("%i", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter new Element");
            scanf("%i", &item);
            enqueue(&q, item);
            break;
        case 2:
            dequeue(&q);
            break;
        case 3:
            display(q);
            break;
        default:
            exit(0);
        }
    }

   
}
