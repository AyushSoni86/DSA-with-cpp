#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int search = 9;
    bool found = linearSearch(arr, 10, search);
    if (found)
    {
        cout << "element present";
    }
    else
    {
        cout << "element not present";
    }

    return 0;
}