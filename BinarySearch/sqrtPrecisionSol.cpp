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
            return mid;
        if (square < num)
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;

        mid = low + (high - low) / 2;
    }

    return ans;
}

double sqrtPrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < precision; i++)
    {
        factor /= 10;
        for (double j = ans; j * j < n; j += factor)
        {
            ans = j;
        }
    }

    return ans;
}
int main()
{
    cout << "Enter the value : ";
    int num;
    cin >> num;
    int tempsol = sqrt(num);
    cout << "Answer is " << sqrtPrecision(num, 4, tempsol) << endl;
    return 0;
}