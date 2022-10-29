#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // creating 2d array using dynamic memory allocation
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
        arr[i] = new int[n];

    // taking user input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }

    // finallly printing the array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    return 0;
}