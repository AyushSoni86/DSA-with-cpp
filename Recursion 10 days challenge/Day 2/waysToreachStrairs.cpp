#include <iostream>
using namespace std;

int countOfStairs(int n)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    return countOfStairs(n - 1) + countOfStairs(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << countOfStairs(n);
}