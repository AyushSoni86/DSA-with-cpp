#include <iostream>
using namespace std;
int main()
{
    int n = 50;
    long a = 0, b = 1;
    cout << a << " " << b << " ";
    for (int i = 0; i < n; i++)
    {
        long sum = a + b;
        cout << sum << " ";
        a = b,
        b = sum;
    }
}