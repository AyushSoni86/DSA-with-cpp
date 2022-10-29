#include <iostream>
using namespace std;
int main()
{
    int num = 120000;
    int rev = 0;
    while (num != 0)
    {
        int digit = num % 10;
        if (rev > INT_MAX/10 || rev < INT_MIN/10){
            return 0 ;
        }
        rev = rev * 10 + digit;
        num = num / 10;
    }
    cout << rev << endl;
    return 0;
}