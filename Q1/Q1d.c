// #include <stdio.h>

// void main()
// {
//     int n, a, b;
//     int aIndex, bIndex, minDifferrence;
//     printf("Enter the size of array \n");
//     scanf("%i", &n);
//     int arr[n];
//     printf("Enter the elements of array");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%i", &arr[i]);
//     }

//     printf("\nElements inserted by you are \t");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%i \t ", arr[i]);
//     }

//     printf("\nEnter the element a \t");
//     scanf("%i", &a);
//     printf("\nEnter the element b \t");
//     scanf("%i", &b);

//     // for (int i = 0; i < n; i++)
//     // {
//     //     if (arr[i] == a)
//     //     {
//     //         aIndex = i;
//     //         continue;
//     //     }
//     //     else if (arr[i] == b)
//     //     {
//     //         bIndex = i;
//     //         continue;
//     //     }
//     // }

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == a)
//         {
//             aIndex = i;
//             break;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == b)
//         {
//             bIndex = i;
//             break;
//         }
//     }

//     printf("IndexOf a: %i and of b: %i", aIndex, bIndex);

//     if (aIndex > bIndex)
//     {
//         printf("\n min Difference is : %i", aIndex - bIndex);
//     }
//     else
//     {
//         printf("\n min Difference is : %i", bIndex - aIndex);
//     }

//     printf("\n %i", aIndex);

//     printf("\n %i", bIndex);

// }


#include <stdio.h>
#include <limits.h>
#include <math.h>

int min(int x, int y)
{
    return (x < y) ? x : y;
}


int findMinDifference(int arr[], int n, int x, int y)
{
    if (n <= 1)
    {
        return 0;
    }

    int x_index = n, y_index = n;
    int min_diff = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            x_index = i;

            if (y_index != n)
            {
                min_diff = min(min_diff,(x_index - y_index));
            }
        }

        if (arr[i] == y)
        {
            y_index = i;

            if (x_index != n)
            {
                min_diff = min(min_diff,(x_index - y_index));
            }
        }
    }

    return min_diff;
}

int main(void)
{
    int arr[] = {1, 3, 5, 4, 8, 2, 4, 3, 6, 5};
    int x = 3, y = 2;

    int n = sizeof(arr) / sizeof(arr[0]);
    int diff = findMinDifference(arr, n, x, y);

    if (diff != INT_MAX)
    {
        printf("The minimum difference is %d", diff);
    }
    else
    {
        printf("Invalid input");
    }

    return 0;
}