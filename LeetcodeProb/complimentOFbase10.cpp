#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    int m = n;

    int mask = 0;
    if (m = 0)
    {
        return 1;
    }
    while (n != 0)
    {
        mask = (mask << 1) | 1;
        n = n >> 1;
    }
    int ans = (~m) & mask;
    cout << ans;
    return 0;
}