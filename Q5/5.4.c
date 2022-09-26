// Construct a binary search tree with more than 10 elements and find the maximum Depth and Height of the tree.
// Input format:
// ⦁	No. of nodes
// ⦁	Element to insert into the tree.
// Output format:
// ⦁	Display the tree
// ⦁	Print the depth or height of the constructed tree.

#include <stdio.h>

#include <stdlib.h>

struct node
{

    int data;

    struct node *left;

    struct node *right;
};

int maxDepth(struct node *T)

{

    if (T == NULL)

        return -1;

    else
    {

        int lDepth = maxDepth(T->left);

        int rDepth = maxDepth(T->right);

        if (lDepth > rDepth)

            return (lDepth + 1);

        else

            return (rDepth + 1);
    }
}

struct node *insert(struct node *T, int x)

{

    if (T == NULL)

    {

        T = (struct node *)malloc(sizeof(struct node));

        T->data = x;

        T->left = T->right = NULL;
    }

    else if (x < T->data)

        T->left = insert(T->left, x);

    else

        T->right = insert(T->right, x);

    return T;
}

void display(struct node *T)

{

    if (T != NULL)

    {

        display(T->left);

        printf("%d ", T->data);

        display(T->right);
    }
}

int main()

{

    struct node *T = NULL, *min;

    T = insert(T, 20);

    insert(T, 22);

    insert(T, 14);

    insert(T, 10);

    insert(T, 12);

    insert(T, 4);

    display(T);

    printf("\n");

    printf("Height of tree is %d", maxDepth(T));

    getchar();

    return 0;
}
