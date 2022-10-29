#include <stdio.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int security(int num)
{
    int key = 0;
    while (num != 0)
    {
        int digit = num % 10;
        key = max(key, digit);
        num = num / 10;
    }
    return key;
}

int main()
{
    int num;
    // int num;
    scanf("%d", &num);
    printf("%d", security(num));
    return 0;
}