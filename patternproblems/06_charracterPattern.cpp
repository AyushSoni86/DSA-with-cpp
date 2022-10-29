#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char start = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           // char ch = 'A' + i - 1;
            cout << start << " ";
            start++;
        }
        cout << endl;
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         char ch = 'A' + j - 1;
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         char ch = 'A' + j - 1;
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }
}