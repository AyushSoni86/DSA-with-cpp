#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool isPrime = true;
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if(isPrime) cout << " prime ";
    else cout << "not prime";
    // cout<<(isPrime)?"Prime":"Not prime ";
    return 0;
}