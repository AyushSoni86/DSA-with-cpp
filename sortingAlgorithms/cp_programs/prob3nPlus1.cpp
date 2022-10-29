#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b) == 2)
    {
        int mx = 0;
        int x = (a > b) ? a : b;
        int y = (a < b) ? a : b;
        for (int i = y; i <= x; i++)
        {
            int n = i, cnt = 1;

            while (n > 1)
            {
                if (n % 2 != 0)
                {
                    n = 3 * n + 1;
                }
                else
                {
                    n = n / 2;
                }
                cnt++;
            }
            if (cnt >= mx)
            {
                mx = cnt;
            }
            cout << a << " " << b << " " << mx << endl;
        }
    }
    return 0;
}