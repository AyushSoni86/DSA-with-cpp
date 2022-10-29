#include <iostream>
using namespace std;
int main()
{
    // 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 
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