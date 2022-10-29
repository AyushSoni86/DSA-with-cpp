#include <stdio.h>

int main()
{
    int arr[] = {23, 45, 23, 78, 6, 3, 78, 63, 33, 6, 100, 56, 0};
    printArray(arr, 13);
    bubbleSort(arr, 13);
    printArray(arr, 13);
    return 0;
}

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}