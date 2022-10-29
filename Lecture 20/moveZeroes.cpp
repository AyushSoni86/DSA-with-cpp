#include <iostream>
using namespace std;

void moveZeroes(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
            swap(arr[i], arr[j++]);
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
    int arr[] = {0, 1, 0, 3, 12,0,12,0,54,0,10,0,0,99};
    int size = sizeof(arr)/ sizeof(int);
    printArray(arr,size);
    moveZeroes(arr,size);
    printArray(arr,size);
    return 0;
}