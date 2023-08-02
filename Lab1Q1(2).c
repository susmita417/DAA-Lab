//create a text.txt file before running this code in the same directory
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    FILE *file;
    file = fopen("text.txt", "w");
    if (file == NULL)
    {
        printf("Error\n");
        exit(1);
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            printf("Enter the number:");
            scanf("%d", &arr[i]);
            fprintf(file, "%d", arr[i]);
            fprintf(file, " ");
        }
    }
    file = fopen("text.txt", "r");
    int i = 0;
    fscanf(file, "%d", &i);
    while (!feof(file))
    {
        fscanf(file, "%d", &arr[i]);
        i++;
    }
    fclose(file);
    if (n < 2)
    {
        printf("Not enough elements");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        printf("\nSecond smallest: %d\n", arr[1]);
        printf("Second largest: %d", arr[n - 2]);
    }

    return 0;
}
