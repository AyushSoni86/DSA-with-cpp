#include <iostream>
using namespace std;

int setBits(int a, int b)
{
    int count1 = 0;
    int count2 = 0;
    while (a != 0)
    {
        count1++;
        a = a & a - 1;
    }
    while (b != 0)
    {
        count2++;
        b = b & b - 1;
    }

    return count1 + count2;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "There are total " << setBits(a, b) << " set bits in a and b" << endl;
}