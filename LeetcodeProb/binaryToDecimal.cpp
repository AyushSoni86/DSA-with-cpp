#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int binary = 1001;
    int i = 0, decimal = 0;
    while (binary > 0)
    {
        int digit = binary % 10;
        decimal = decimal + digit * pow(2, i++);
        binary = binary / 10;
    }
    cout << decimal << endl;
}