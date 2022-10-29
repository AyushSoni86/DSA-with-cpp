#include <iostream>
using namespace std;
int main()
{

    int num = 5;
    int *q = &num;
    int *p = &num;

    cout << *p + 1 << endl;
    cout << *(p + 1) << endl;
    cout << *(p) + 1 << endl;
    cout << *p + 2 << endl;
    cout << *(p + 2) << endl;
    cout << *(p) + 2 << endl;
    return 0;
}