#include <stdio.h>

int main()
{
     int a[] = {2, 45, 67, 32, 4, 98};
    int max = a[0];
    int min = a[0];
    for (int i = 0; i < 6; i++)
    {
        if ((max < a[i]))
        {
            max = a[i];
            // min = a[i];
        }
        else if (min > a[i])
        {
            min = a[i];
        }
    }
    printf("max is %d and min is %d", max, min);
    return 0;
}