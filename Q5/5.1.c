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

struct node *FindMin(struct node *T)

{

    if (T->left == NULL)

        return T;

    else

        return FindMin(T->left);
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

struct node *delet(struct node *T, int x)

{

    struct node *temp;

    if (T == NULL)

        return NULL;

    else if (x < T->data)

        T->left = delet(T->left, x);

    else if (x > T->data)

        T->right = delet(T->right, x);

    else if (T->left == NULL)

        T = T->right;

    else if (T->right == NULL)

        T = T->left;

    else

    {

        temp = FindMin(T->right);

        T->data = temp->data;

        T->right = delet(T->right, T->data);
    }

    return T;
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

    display(T);

    min = FindMin(T);

    printf("\nMinimum:%d", min->data);

    delet(T, 10);

    printf("\nAfter deletion of 10\n");

    display(T);

    return 0;
}