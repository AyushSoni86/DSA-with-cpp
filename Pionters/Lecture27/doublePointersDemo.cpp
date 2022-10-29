#include <iostream>
using namespace std;

int main()
{
    int c = 5;
    int *b = &c;
    int **a = &b;

    cout << "value of c -> c -> " << c << endl;
    cout << "value of c ->    *b  ->" << *b << endl;
    cout << "value of c ->    **a ->" << **a << endl;
    cout << "address of a ->  &a ->" << &a << endl;
    cout << "address of b ->  &b ->" << &b << endl;
    cout << "address of b ->  a  ->" << a << endl;
    cout << "address of c ->  &c ->" << &c << endl;
    cout << "address of c ->  b ->" << b << endl;
    cout << "address of c ->  *a ->" << *a << endl;

    return 0;
}