// FINDING MISSING ELEMENT IN ARRAY WITHOUT USING EXTRA SPACE

#include <stdio.h>

void main()
{
    int n = 0;
    int totalOfArray = 0;
    int total = 0;

    int arr[n];
    printf("Enter the size of array \n");
    scanf("%i", &n);

    printf("Enter the elements of array");
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &arr[i]);
        totalOfArray += arr[i];
    }
    for (int j = 1; j <= n + 1; j++)
    {
        total += j;
    }

    printf("The missing element is \t%i", total - totalOfArray);
}