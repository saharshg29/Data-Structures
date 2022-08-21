//INSERTING ELEMENTS IN SORTED ARRARY

#include <stdio.h>

void main()
{
    int n, m;
    printf("Enter the size of array 1 \n");
    scanf("%i", &n);
    int arr[n];

    // CREATING YOUR ARRAY
    printf("Enter the elements to array in assescending order \t");
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &arr[i]);
    }

    // PRINTING THE ORIGINAL ARRAY
    printf("Elements inserted by you are \t");
    for (int i = 0; i < n; i++)
    {
        printf("%i ", arr[i]);
    }

    printf("\nEnter new element to be inserted \n");
    scanf("%i", &m);

    // INSERTING ELEMENT IN ITS POSITION IN ASSECNDING ORDER
    n += 1;
    arr[n + 1];
    for (int i = n - 2; i > -1; i -= 1)
    {
        if (m < arr[i])
        {
            arr[i + 1] = arr[i];
            if (i == 0)
            {
                arr[i] = m;
            }
        }
        else
        {
            arr[i + 1] = m;
            break;
        }
    }
    // PRINTING THE NEW ARRAY
    printf("Your final array is \t");
    for (int i = 0; i < n; i++)
    {
        printf("%i \t", arr[i]);
    }
}