#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 34, 6, 345, 32, 14, 5, 22};
    cout << ayushGivesNinjatest(2, 8, arr);
}
bool isPossible(long long int n, long long int m, long long int mid, int time[])
{
    int days = 1;
    long long int chapters = 0;
    for (long long int i = 0; i < m; i++)
    {
        if (time[i] + chapters <= mid)
            chapters = chapters + time[i];
        else
        {
            days++;
            if (days > n || time[i] > mid) // n is no. of given days
                return false;
            chapters = time[i];
        }
    }
    return true;
}

long long ayushGivesNinjatest(int n, int m, int time[])
{
    long long s = 0;
    long long sum = 0; //m is size
    long long ans;
    for (int i = 0; i < m; i++)
    {
        sum = sum + time[i];
    }
    long long e = sum;
    long long mid = (s + (e - s) / 2);
    while (s <= e)
    {
        if (isPossible(n, m, mid, time))
        {
            ans = mid;
            e = mid - 1;
        }
        else
            s = mid + 1;
        mid = (s + (e - s) / 2);
    }
    return ans;
}