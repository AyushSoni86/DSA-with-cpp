#include <iostream>
using namespace std;
int main()
{

    int num = 5;
    int *p = &num;
    cout << p << endl;
    cout << *p << endl;
    // int a = *p;
    // a++;
    // cout << num << endl;
    // cout << a << endl;
    // cout << p << endl;
    // cout << *p << endl;
    (*p)++;
    // *p++;
    cout << num << endl;
    cout << p << endl;
    cout << *p << endl;

    //copy a pointer
    int *q = p;
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;
    return 0;
}