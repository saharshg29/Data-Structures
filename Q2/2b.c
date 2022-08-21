//     Problem 2b:
// You are given a group of elements to make a list get reversed in from the given order using doubly linked list data structure. 
// Input Format:
// ⦁	Number of elements to get added in list
// ⦁	Elements to be entered and added in list one by one.
// Output Format:
// Reversed elements in List
// Sample Input:
// 5
// 2 3 4 5 6
// Sample Input:
// 6 5 4 3 2



#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next, *previous;
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
        tail = newPointer;
        head = newPointer;
        present = head;
        present->next = NULL;
        present->previous = NULL;
        length++;
    }
    // ADDING ELEMENT TO YOUR LINKED LIST
    else
    {
        present->next = newPointer;
        newPointer->previous = present;
        newPointer->next = NULL;
        tail = newPointer;
        present = tail;
        ;
    }
}

//FUNCTION TO DISPLAY THE ELEMENTS IN REVERSED ORDER;
// n IS THE SIZE OF LIST
void display(int n, struct Node *t)
{
    struct Node *current = t;
    for (int i = 0; i < n; i++)
    {
        printf("%i \t", current->data);
        current = current->previous;
    }
}

void main()
{
    int i = 0, n, a, ch;
    struct Node *pointer = head;
    scanf("%i", &n);
    int m = n;
    while (n--)
    {
        scanf("%i", &a);
        createNodes(a);
        printf("node created for %i \n", a);
    };
    display(m, tail);
   free(present);
   free(head);
   free(tail);
   free(newPointer);
}