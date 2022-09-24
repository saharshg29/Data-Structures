#include <stdio.h>

#include <stdlib.h>

struct node
{

    int data;

    struct node *left;

    struct node *right;
};

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

void printInorder(struct node *T)

{

    if (T == NULL)

        return;

    printInorder(T->left);

    printf("%d ", T->data);

    printInorder(T->right);
}

void printPreorder(struct node *T)

{

    if (T == NULL)

        return;

    printf("%d ", T->data);

    printPreorder(T->left);

    printPreorder(T->right);
}

void printPostorder(struct node *T)

{

    if (T == NULL)

        return;

    printPostorder(T->left);

    printPostorder(T->right);

    printf("%d ", T->data);
}

int main()

{

    struct node *T = NULL, *min;

    T = insert(T, 10);

    insert(T, 20);

    insert(T, 15);

    insert(T, 8);

    insert(T, 9);

    insert(T, 30);

    printf("\nInorder traversal of binary tree is \n");

    printInorder(T);

    printf("\nPreorder traversal of binary tree is \n");

    printPreorder(T);

    printf("\nPostorder traversal of binary tree is \n");

    printPostorder(T);

    getchar();

    return 0;
}
