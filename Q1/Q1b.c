#include <stdio.h>

void main()
{
    int n = 0, k, found;
    printf("Enter the size of array \t");
    scanf("%i", &n);
    int arr[n];
    printf("Enter the elements of your array \t");
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &arr[i]);
    }

    printf("Enter the range to check \t");
    scanf("%i", &k);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= j + k; j++)
        {
            if (!(j < n))
            {
                // found = 29;
                break;
            }

          
            else
            {
                if (arr[i] == arr[j])
                {
                    found = arr[i];

                    break;
                }
            }
        }
    }

    if (found)
    {
        printf("Duplicate of %i found within the range of %i", found, k);
    }
    else
    {
        printf("No duplicate found within range of %i", k);
    }
}