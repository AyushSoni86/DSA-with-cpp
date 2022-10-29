#include <stdio.h>

int main()
{
    int arr[] = {8, 0, 7, 1, 3};
    displayArray(arr, 5);
    selectionSort(arr, 5);
    displayArray(arr, 5);
    return 0;
}
void displayArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void selectionSort(int arr[], int n)
{
    int indexOfMin, temp;
    for (int i = 0; i < n; i++)
    {
        indexOfMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[indexOfMin])
            {
                indexOfMin = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[indexOfMin];
        arr[indexOfMin] = temp;
    }
}