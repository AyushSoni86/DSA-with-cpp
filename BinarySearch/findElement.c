#include <stdio.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}
int min(int a, int b)
{
    return (a > b) ? b : a;
}
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    

    int maxi = arr[0];
    int mini = arr[0];
    for (int i = 0; i < 6; i++)
    {
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }
    int ans = maxi + mini;
    printf("%d", ans);
    return 0;
}