#include <iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }
    while (i < n)
        arr3[k++] = arr1[i++];
    while (j < m)
        arr3[k++] = arr2[j++];
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr1[4] = {1, 3, 5, 7};
    int arr2[6] = {0, 1, 2, 4, 6, 8};
    int arr3[10];
    merge(arr1, 4, arr2, 6, arr3);
    printArray(arr1, 4);
    printArray(arr2, 6);
    printArray(arr3, 10);
    return 0;
}