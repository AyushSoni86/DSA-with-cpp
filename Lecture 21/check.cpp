#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 12, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr)/sizeof(int);
   bool ans =  check(arr, size);
   return 0;
}

bool check(int arr[], int n)
{
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
            cnt++;
    }
    if (arr[n - 1] > arr[0])
        cnt++;
    return cnt <= 1;
}