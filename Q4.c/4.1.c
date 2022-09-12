#include <stdio.h>

int queue[100], head, tail, length = -1, n;

void enqueue(int item)
{
    int temp;
    queue[n + 1];
    queue[n] = item;
    length++;
}

int dequeue()
{
    int removed = queue[0];
    for (int i = 0; i < length; i++)
    {
        queue[i] = queue[i + 1];
        if (i == length - 1)
        {
            break;
        }
    }
    queue[n - 1];
    length--;
    printf("%i\n", removed);
    return removed;
}

void main()
{

    int newItem;
    scanf("%i", &n);
    queue[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &queue[i]);
        length++;
    }
    printf("Enter new item for your queue");
    scanf("%i", &newItem);
    enqueue(newItem);
    dequeue();

    for (int i = 0; i <= length; i++)
    {
        printf("%i ", queue[i]);
    }
}