#include <stdio.h>

void main()
{
    int n = 0;
    scanf("%i", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &arr[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                continue;
            }
            else
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%i", arr[i]);
    }
}