#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void reverse(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    printArray(arr, size);
}

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << endl
         << "Array before reverse " << endl;
    printArray(arr, 10);
    cout << endl
         << "Array after reverse " << endl;
    reverse(arr, 10);
    cout << endl;
}