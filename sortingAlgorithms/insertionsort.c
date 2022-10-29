#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[] = {7, 12, 3, 4, 1};
    printArray(arr, 5);
    insertionSort(arr, 5);
    printArray(arr, 5);
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

void insertionSort(int *arr, int n)
{
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}