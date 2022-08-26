#include <stdio.h>
#include <stdlib.h>

// Represent a node of the doubly linked list

struct Node
{
    int data;
    struct Node *previous;
    struct Node *next;
};

struct Node *present = NULL;
struct Node *head = NULL;
struct Node *tail = NULL;
struct Node *newPointer = NULL;
int length = 0;

void createNodes(int n)
{
    newPointer = (struct Node *)malloc(sizeof(struct Node));
    newPointer->data = n;
    newPointer->next = NULL;
    newPointer->previous = NULL;
    if (length == 0)
    {

        // CREATING FIRST ELEMENT FOR DOUBLY LINKED LIST

        head = newPointer;
        tail = newPointer;
        newPointer->next = newPointer;
        newPointer->previous = newPointer;
        length++;
    }
    // ADDING ELEMENT TO YOUR LINKED LIST
    else
    {
        tail->next = newPointer;
        newPointer->previous = tail;
        tail = newPointer;
        newPointer->next = head;
        tail = newPointer;
        head->previous = tail;

        length++;
        // present->next = newPointer;
        // newPointer->previous = present;
        // newPointer->next = NULL;
        // tail = newPointer;
        // present = tail;
        ;
    }
}

int main()
{
    // Add nodes to the list
    createNodes(1);
    createNodes(2);
    createNodes(3);
    createNodes(4);
    createNodes(5);

    // Displays the last node present in the list

    printf("%i", head->previous->data);

    return 0;
}