#include <iostream>
using namespace std;
int main()
{

    //      1           row 1
    //      23          row 2
    //      345         row 3
    //      4567        row 4
    //      56789       row 5
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int colm = 1;
        while (colm <= row)
        {
            cout << row + colm - 1;
            colm = colm + 1;
        }
        cout << endl;
        row = row + 1;
    }
    // for (int row = 0; row < 5; row++)
    // {
    //     for (int col = row; col <= 2*row; col++)
    //     {
    //         cout << col+1 << " ";
    //     }
    //     cout << endl;
    // }
    // int value ;
    // for (int i = 0; i < n; i++)
    // {
    //     int value = i;
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << value;
    //         value += 1;
    //     }
    //     cout << endl;
    // }
}