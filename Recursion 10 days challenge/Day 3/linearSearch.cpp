#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int target)
{
    if (size == 0)
        return false;
    if (arr[0] == target)
        return true;
    else
    {
        linearSearch(arr + 1, size - 1, target);
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,56,7};
    int target = 56;
    if(linearSearch(arr,7, target ))
        cout << "Element present" << endl;
    else{
        cout << "Element  not present" << endl;

    }
}