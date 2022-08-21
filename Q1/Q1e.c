//RIGHT ROTATION

#include <stdio.h>

void main()
{
    int n = 0, k = 0;
    int i, j, temp;
    int arr[n];
    printf("Enter the size of array \n");
    scanf("%i", &n);
    printf("Enter the elements of your array \t");
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &arr[i]);
    }

    // PRINTING ELEMENTS IN ARRAY
    printf("the elements of your array \t");
    for (int i = 0; i < n; i++)
    {
        printf("%i \t", arr[i]);
    }

    printf("\n Enter the round of rotation you want \n");
    scanf("%i", &k);

    for (int j = 0; j<k; j++) {
        i = n-1;
        temp = arr[i];
        for (i = n-1; i>0; i = i-1) {
            arr[i] = arr[i-1];
        }
        arr[0] = temp;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%i \t", arr[i]);
    }
}