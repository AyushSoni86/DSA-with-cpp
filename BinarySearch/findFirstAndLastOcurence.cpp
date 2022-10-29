#include <iostream>
using namespace std;

int firstOccu(int arr[], int n, int key)
{
    int left = 0, right = n - 1;
    int mid = left + (right - left) / 2;
    int ans = -1;
    while (left <= right)
    {
        if (key == arr[mid])
        {
            ans = mid;
            right = mid - 1;
        }
        else if (key > arr[mid])
            left = mid + 1;
        else
            right = mid - 1;

        mid = left + (right - left) / 2;
    }
    return ans;
}
int lastOccu(int arr[], int n, int key)
{
    int left = 0, right = n - 1;
    int mid = left + (right - left) / 2;
    int ans = -1;
    while (left <= right)
    {
        if (key == arr[mid])
        {
            ans = mid;
            left = mid + 1;
        }
        else if (key > arr[mid])
            left = mid + 1;
        else
            right = mid - 1;

        mid = left + (right - left) / 2;
    }
    return ans;
}

int main()
{
    int arr1[] = {1, 5, 6, 7, 9, 9, 9, 9, 9};
    int arr2[] = {12, 23, 45, 45, 45, 45, 45, 67, 88, 89, 99};
    cout << "first occurence of 9 is at index " << firstOccu(arr1, 9, 9) << endl;
    cout << "last occurence of 9 is at index " << lastOccu(arr1, 9, 9) << endl;
    cout << "first occurence of 45 is at index " << firstOccu(arr2, 11, 45) << endl;
    cout << "last occurence of 45 is at index " << lastOccu(arr2, 11, 45) << endl;
}