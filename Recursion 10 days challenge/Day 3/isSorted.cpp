#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
        return true;
    if (arr[0] > arr[1])
        return false;

    return isSorted(arr + 1, size - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 7, 4, 5, 5, 7};
    int size = sizeof(arr) / sizeof(int);
    if (isSorted(arr, size))
    {
        cout << "Array is Sorted";
    }
    else
    {
        cout << "Array is not sorted";
    }
    return 0;
}