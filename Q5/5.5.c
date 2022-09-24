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

struct node *FindMax(struct node *T)

{

    if (T->right == NULL)

        return T;

    else

        return FindMax(T->right);
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

    struct node *T = NULL, *min, *max;

    T = insert(T, 20);

    insert(T, 8);

    insert(T, 22);

    insert(T, 4);

    insert(T, 12);

    insert(T, 10);

    insert(T, 14);

    display(T);

    min = FindMin(T);

    max = FindMax(T);

    printf("\nMinimum:%d", min->data);

    printf("\nMaximum:%d", max->data);

    printf("\n");

    display(T);

    return 0;
}