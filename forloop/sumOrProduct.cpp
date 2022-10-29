#include <iostream>
using namespace std;
int main()
{
    int number = 234;
    int sum = 0;
    int product = 1;
    int digit = 0;
    while (number > 0)
    {
        digit = number % 10;
        sum += digit;
        product *= digit;
        number = number / 10;
    }
    cout << sum << " " << product << " " << product - sum << endl;
    return 0;
}