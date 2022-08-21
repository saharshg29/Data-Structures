#include <stdio.h>
// FINDING DUPLICATE BETWEEN TWO ARRAY

void main()
{
    int n, m;
    //Declaring arrays
    printf("Enter the size of array 1 \n");
    scanf("%i", &n);

    printf("Enter the size of array 2 \n");
    scanf("%i", &m);

    int arr1[n];
    int arr2[m];

    // Getting elements of array
    printf("Enter the elements of array 1");
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &arr1[i]);
    }
    printf("Enter the elements of array 2");
    for (int i = 0; i < m; i++)
    {
        scanf("%i", &arr2[i]);
    }


    // Printing the array
    printf("Array 1: \t");
    for (int i = 0; i < n; i++)
    {
        printf("%i \t", arr1[i]);
    }

    printf("\nArray 2: \t");
    for (int i = 0; i < m; i++)
    {
        printf("%i \t", arr2[i]);
    }

    //PRINTING DUPLICATE ELEMENT OF ARRAY
    printf("\nPrinting dupplicate elements \t");
    for (int i=0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%i \t", arr1[i]);
            }
        }
    }
}