#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if ((i + 1) < size)
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size = 7;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    printArray(arr, size);
    swapAlternate(arr, size);
    printArray(arr, size);
}