#include <iostream>
using namespace std;

int sqrt(int num)
{
    int low = 0;
    int high = num - 1;
    long long int mid = low + (high - low) / 2;
    long long int ans = -1;
    while (low <= high)
    {
        long long int square = mid * mid;
        if (square == num)
        {
            return mid;
        }
        if (square < num)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        mid = low + (high - low) / 2;
    }

    return ans;
}

int main()
{
    int num = 1000000;
    cout << "square root is " << sqrt(num) << endl;
    return 0;
}