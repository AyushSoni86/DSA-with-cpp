#include <iostream>
using namespace std;
int main()
{
    char a;
    cin >> a;
    if (a >= 'a' && a <= 'z')
    {
        cout << a << " is lowercase" << endl;
    }
    else if (a >= 'A' && a <= 'Z')
    {
        cout << a << " is uppercase" << endl;
    }
    else if (a >= '0' && a <= '9')
    {
        cout << a << " is numeric" << endl;
    }
}