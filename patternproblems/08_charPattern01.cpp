#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A' + n - i;
        for (int j = 0; j < i; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         char ch = 'A' + i + j - 1;
    //         cout << ch;
    //     }
    //     cout << endl;
    // }

    // char start = 'A';
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << start;
    //         start++;
    //     }
    //     cout << endl;
    // }
    // char ch = 'A';
    // for(int i = 1; i <= n; i++)
    // {
    //     // char ch = 'A' + i - 1;
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << ch;
    //     }
    //     ch = ch + 1;
    //     cout << endl;
    // }
}