#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "`1234567890-=QWWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    string s2;
    while (getline(cin, s2))
    {
        for (int i = 0; i < s2.size(); i++)
        {
            for (int j = 0; j < s.size(); j++)
            {
                if (s2[i] == s[j])
                {
                    s2[i] = s[j - 1];
                }
            }
        }
        cout << s2 << endl;
    }
    return 0;
}