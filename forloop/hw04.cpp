#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            cout << i << " " << j << endl;
        }
    }
}