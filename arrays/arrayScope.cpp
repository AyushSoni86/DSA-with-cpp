#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    cout << endl;
}

void arrayUpdate(int arr[], int size)
{
    cout << "inside update function " << endl;
    arr[0] = 120;
    arr[3] = 34;
    //printArray(arr, size);
}

int main()
{
    cout << "before array updation " << endl;
    int arr[4] = {1, 2, 3, 4};
    printArray(arr, 4);
    cout << "after array updation " << endl;
    arrayUpdate(arr, 4);
    printArray(arr, 4);
}