#include <iostream>
using namespace std;

int peakIndex(int arr[], int n)
{
    int low = 0, high = n - 1;
    int mid = low + (high - low) / 2;
    while (low < high)
    {
        if (arr[mid] < arr[mid + 1])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
        mid = low + (high - low) / 2;
    }

    return low;
}

int main()
{
    int arr[] = {1, 2, 3, 5, 4, 0};
    cout << "Peak Index is " << peakIndex(arr, 6);
    return 0;
}