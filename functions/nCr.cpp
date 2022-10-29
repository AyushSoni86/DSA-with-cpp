#include <iostream>
using namespace std;
int factorial(int num)
{
    int result = 1;
    for (int i = 1; i <= num; i++)
    {
        result *= i;
    }
    return result;
}

int nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main() {
    cout << nCr(8,2) << endl;
}