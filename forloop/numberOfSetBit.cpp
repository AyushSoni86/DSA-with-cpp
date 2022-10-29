#include <iostream>
using namespace std;
int main()
{
    int num = 13;
    // binary of num is 1101
    int count = 0;
    while (num > 0)
    {
        if (num & 1)
        {
            count++;
        }
        num >>= 1;
    }
    cout << "number of set bits are : " << count << endl;
}
