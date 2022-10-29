#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOnes(int arr[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        while (arr[i] == 0 && i < j)
        {
            i++;
        }
        while (arr[j] == 1 && i < j)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
}

int main()
{
    int arr[] = {0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    cout << "before sort" << endl;
    printArray(arr, 12);
    sortOnes(arr, 12);
    cout << "after sort" << endl;
    printArray(arr, 12);
}