#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter the value of a : " << endl;
    cin >> a;
    cout << "enter the value of b : " << endl;
    cin >> b;
    cout << "enter the operation you want to perform " << endl;
    char ch;
    cin >> ch;
    switch (ch)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    case '%':
        cout << a % b << endl;
        break;
    default:
        cout << "Invalid Operation ";
        break;
    }
    return 0;
}