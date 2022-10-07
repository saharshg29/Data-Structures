#include <stdio.h>
#include <stdlib.h>
int arr[10], n;
int num;
int count = 0;

void hashing(int sizeOfHashTable, int totalInputs)
{
    for (int i = 0; i < sizeOfHashTable; i++)
    {
        arr[i] = -1;
    }

    for (int i = 0; i < totalInputs; i++)
    {
        printf("Enter the value to be hashed\n");
        scanf("%i", &num);

        for (int j = 0; j < sizeOfHashTable; j++)
        {
            if ((arr[j] != -1) && ((num % sizeOfHashTable) == j))
            {
                printf("Collision occured\n");
                int count = 0;
                for (int k = j + 1; count < sizeOfHashTable - 1; count++)
                {
                    
                    if (arr[k] == -1)
                    {
                        arr[k] = num;
                        break;
                    }if (k == sizeOfHashTable - 1)
                    {
                        k = 0;
                    }
                }
            }
            else (j == (num % sizeOfHashTable))
            {
                arr[j] = num;
                break;
            }
        }
    }
}

void display(int sizeOfHashTable)
{
    printf("The hash table is\t");
    for (int i = 0; i < sizeOfHashTable; i++)
    {
        if (arr[i] == -1)
        {
            printf("_\t");
        }
        else
        {
            printf("%i\t", arr[i]);
        }
    }
}
void main()
{
    int sizeOfhashTable, totalInputs;
    printf("Enter the size of hash table");
    scanf("%i", &sizeOfhashTable);
    arr[sizeOfhashTable];
    printf("Enter the total number of inputs");
    scanf("%i", &totalInputs);
    hashing(sizeOfhashTable, totalInputs);
    display(sizeOfhashTable);
}