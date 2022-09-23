#include <stdio.h>
#include <stdlib.h>
#define size 5

struct queue
{
    int front, rear;
    int data[size];
};

typedef struct queue QUEUE;

void enqueue(QUEUE *q, int item)
{
    if (q->rear == size - 1)
        printf("Queue is full \n");
    else
    {
        q->rear += 1;
        q->data[q->rear] = item;
        if (q->front == -1)
        {
            q->front++;
        }
    }
}

void dequeue(QUEUE *q)
{
    int del;
    if (q->front == -1)
    {
        printf("Empty Queue \n");
    }
    else
    {
        del = q->data[q->front];
        printf("Deleted Element %i \n", del);
        if (q->front == q->rear)
        {
            q->front = -1;
            q->rear = -1;
        }
        q->front++;
    }
}

void display(QUEUE q)
{
    if (q.front == -1)
    {
        printf("Empty Queue \n");
    }
    else
    {
        printf("Queue elements are \t");
        for (int i = q.front; i <= q.rear; i++)
        {
            printf("%i \n", q.data[i]);
        }
    }
}

void main()
{
    int newSize;
    int choice;
    int item;
    scanf("%i", &newSize);
    QUEUE q;
    q.data[newSize];
    q.front = -1;
    q.rear = -1;

    for (;;)
    {
        printf("1) Enqueue \n");
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
