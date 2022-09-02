/* Program to insert in a sorted list */
#include <stdio.h>
#include <stdlib.h>

/* Link list node */
struct Node {
	int data;
	struct Node* next;
};

// function to insert a new_node in a list.
void sortedInsert(struct Node** head_ref,
				struct Node* new_node)
{
	struct Node* current;
	/* Special case for the head end */
	if (*head_ref == NULL
		|| (*head_ref)->data
			>= new_node->data) {
		new_node->next = *head_ref;
		*head_ref = new_node;
	}
	else {
		/* Locate the node before
the point of insertion */
		current = *head_ref;
		while (current->next != NULL
			&& current->next->data < new_node->data) {
			current = current->next;
		}
		new_node->next = current->next;
		current->next = new_node;
	}
}

/* BELOW FUNCTIONS ARE JUST UTILITY TO TEST sortedInsert */

/* A utility function to create a new node */
struct Node* newNode(int new_data)
{
	/* allocate node */
	struct Node* new_node
= (struct Node*)malloc(
sizeof(struct Node));

	/* put in the data */
	new_node->data = new_data;
	new_node->next = NULL;

	return new_node;
}

//-----------------------------
/* Given a reference (pointer to pointer) to the head of a
   list and a key, deletes the first occurrence of key in
   linked list */
void deleteNode(struct Node** head_ref, int key)
{
    // Store head node
    struct Node *temp = *head_ref, *prev;

    // If head node itself holds the key to be deleted
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next; // Changed head
        free(temp); // free old head
        return;
    }

    // Search for the key to be deleted, keep track of the
    // previous node as we need to change 'prev->next'
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If key was not present in linked list
    if (temp == NULL)
        return;

    // Unlink the node from linked list
    prev->next = temp->next;

    free(temp); // Free memory
}

/* Function to print linked list */
void printList(struct Node* head)
{
	struct Node* temp = head;
	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
}

/* Driver program to test count function*/
int main()
{
    int i,n,E;
	/* Start with the empty list */
	struct Node* head = NULL;
	printf("No. of elements to add in list:");
	scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("element - %d :",i);
        scanf("%d",&E);
        struct Node* new_node = newNode(E);
        sortedInsert(&head, new_node);
    }
	printf("\nSorted elements in Original List: ");
	printList(head);
	//---------------------------------------------------
	printf("\n\nElement to insert in list:");
	scanf("%d",&E);
	struct Node* new_node = newNode(E);
    sortedInsert(&head, new_node);
    printf("\nElements in list after insertion: ");
	printList(head);
    //---------------------------------------------------
    printf("\n\nElement to Delete from list:");
	scanf("%d",&E);
    deleteNode(&head, E);
    printf("\nElements in list after  deletion: ");
	printList(head);

	return 0;
}