#include <iostream>
using namespace std;
int main()
{
    // int n;
    // cin >> n;

    for (int row = 1; row <= 4; row++)
    {
        for (int col = 1; col <= 4; col++)
        {
            char ch = 'A' + row + col - 2;
            cout << ch;
        }
        cout << endl;
    }
}