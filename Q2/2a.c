// Problem 2a:
// You are given a group of elements to make a list get arranged in ascending order. New elements shall be added in any position of the list based on the sorted rule with linked data structure.
// Input Format:
// ⦁	Number of elements to get added in list
// ⦁	Elements to be entered and added in list one by one.
// ⦁	Element to insert in list
// ⦁	Element to Delete from list
// Output Format:
// ⦁	Sorted elements in Original List
// ⦁	Elements in list after insertion
// ⦁	Elements in list after deletion
// Sample Input:
// 4
// 42 32 53
// 23
// 15

// Sample Output:
// 32 42 53
// 23 32 42 53
// NOT FOUND IN LIST

// Sample Input:
// 4
// 4 3 5
// 2
// 5
// Sample Output:
// 3 4 5
// 2 3 4 5
// 2 3 4

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *currentNode = NULL;
struct Node *head = NULL;
struct Node *tail = NULL;
struct Node *newNode = NULL;
struct Node *pointer = NULL;
struct Node *shift = NULL;

int length = -1;
void sort();
void getTail(int length);

// CREATING LIST OF SIZE N
void createNode(int n)
{
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = n;
    newNode->next = NULL;
    if (length == -1)
    {
        head = newNode;
        tail = newNode;
        newNode->next = NULL;
        pointer = head;
        length++;
    }
    else
    {
        pointer->next = newNode;
        newNode->next = NULL;
        pointer = newNode;
        length++;
    }
    sort();
    getTail(length);
}

// GETTING TAIL
void getTail(int length)
{
    pointer = head;
    for (int i = 0; i <= length; i++)
    {
        if (pointer->next == NULL)
        {
            tail = pointer;
            break;
        }
        pointer = pointer->next;
    }
}

// SORTING A LIST
void sort()
{
    int temp;
    pointer = head;
    while (pointer->next != NULL)
    {
        currentNode = pointer->next;
        while (currentNode != NULL)
        {
            if (pointer->data > currentNode->data)
            {
                temp = pointer->data;
                pointer->data = currentNode->data;
                currentNode->data = temp;
            }
            currentNode = currentNode->next;
        }
        pointer = pointer->next;
    }

    getTail(length);
}

// PRINTING THE ENTIRE LIST
void display(int n)
{
    pointer = head;
    for (int i = 0; i <= n; i++)
    {
        printf("%i \t", pointer->data);
        pointer = pointer->next;
    }
}

// ADDING A SINGLE ELEMENT IN LIST
void addNode(int n)
{
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = n;
    newNode->next = NULL;
    tail->next = newNode;
    length++;
    sort();
}

// DELETING A NODE 
// void delete(int n) {
//     pointer = head;
//     currentNode = pointer->next;
//     for (int i=0; i<=length; i++) {
//         if (head->data == n ) {
//             head = head->next;
//         } 
//     }
// }

// DRIVER CODE
void main()
{
    int n, data, newData, deleteData;
    printf("Enter the number of nodes you want to create \t");
    scanf("%i", &n);
    int m = n;
    printf("Enter  %i terms for your list \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &data);
        createNode(data);
    }
    printf("Your sorted list is: \t");
    display(length);
    printf("\n Enter the new element you want to add");
    scanf("%i", &newData);
    addNode(newData);
    printf("Your sorted list is: \t");
    display(length);
    printf("Enter the element you want to delete: \t");
    scanf("%i", &deleteData);
};