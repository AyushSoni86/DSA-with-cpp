#include <iostream>
using namespace std;
int main()
{
    //bool isPower = true ;
    int num;
    cin >> num;
    int count = 0;
    while (num != 0)
    {
        if (num & 1 != 0)
        {
            count++;
        }
        num >>= 1;
    }
    if (count == 1)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}