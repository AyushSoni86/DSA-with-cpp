#include <iostream>
using namespace std;

int fibonacci(int num)
{
    //1 2 3 4 5 6 7  8  9 10 11 12  13  14  15
    //0 1 1 2 3 5 8 13 21 34 55 89 144 233 377
    int a = 0;
    int b = 1;
    if (num == 0)
        return 0;
    // if (num == 3 || num == 2)
    //     return 1;
    int sum;
    for (int i = 2; i < num ; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    return sum;
}

int main()
{
    int num;

    cin >> num;

    cout << num << "th fibonacci is " << fibonacci(num) << endl;
}