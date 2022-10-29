#include <iostream>
using namespace std;

void rotateArray(int arr[], int n, int k)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
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
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printArray(arr, 9);
    rotateArray(arr, 9, 3);
    printArray(arr, 9);
    return 0;
}