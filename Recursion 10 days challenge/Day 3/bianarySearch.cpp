#include <iostream>
using namespace std;

int binarySearch(int arr[], int key, int low, int high)
{
    if (low > high)
        return -1;
    int mid = low + (high - low) / 2;

    if (arr[mid] == key)
        return mid;

    if (arr[mid] > key)
        return binarySearch(arr, key, low, mid - 1);
    else
        return binarySearch(arr, key, mid + 1, high);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(int);
    int target = 10;
    int answer = binarySearch(arr, target, 0, n - 1);
    cout << answer;
}