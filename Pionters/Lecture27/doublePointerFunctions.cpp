#include <iostream>
using namespace std;

void change(int *ptr)
{
    *ptr += 1;
}
int main()
{
    int x = 5;
    int *ptr = &x;
    change(ptr);
    cout << x << endl;
    return 0;
}