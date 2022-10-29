#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;
    // chalaki formula
    int mid = low + (high - low) / 2;
    while (low <= high)
    {
        if (key == arr[mid])
            return mid;
        if (key > arr[mid])
            low = mid + 1;
        if (key < arr[mid])
            high = mid - 1;
        mid = low + (high - low) / 2;
    }
    return -1;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {12, 23, 45, 46, 57, 67, 88, 89, 99};
    cout << binarySearch(arr1, 10, 9) << endl;
    cout << binarySearch(arr2, 9, 9) << endl;
}