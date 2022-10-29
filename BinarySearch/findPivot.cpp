#include <iostream>
using namespace std;

int findPivot(int arr[], int n)
{
    if (arr == NULL || n == 0)
        return -1;
    if (arr[0] <= arr[n - 1])
        return 0;
    int low = 0;
    int high = n - 1;
    int mid = low + (high - low) / 2;
    while (low <= high)
    {

        if (arr[mid] > arr[mid + 1])
            return mid + 1;
        else if (arr[low] <= arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
        mid = low + (high - low) / 2;
    }

    return 0;
}

int pivot(int arr[], int n)
{
    int low = 0, high = n - 1;
    int mid = low + (high - low) / 2;
    while (low < high)
    {
        if (arr[mid] >= arr[0])
        {
            low = mid + 1;
        }
        else
            high = mid;
        mid = low + (high - low) / 2;
    }
    return low;
}
int main()
{
    int arr[] = {73, 85, 94, 100, 101, 10002, 10, 21, 27, 34, 47, 54, 66};
    int n = sizeof(arr) / sizeof(int);
    int pivotIndex = findPivot(arr, n);
    cout << pivotIndex << endl;
}