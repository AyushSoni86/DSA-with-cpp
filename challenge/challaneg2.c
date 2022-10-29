#include <stdio.h>

int main()
{
    int a, b, c, d, n;

    a = b = 1;
    printf("Enter the number : ");
    scanf("%d", &n);
    c = d = n;
    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        for (int j = 1; j <= (2 * n) - 1; j++)
        {
            if (i == j)
            {
                if (a <= n)
                    printf("%d", a++);
                else

                    printf("%d", --c);
            }
            else if (i + j == 2 * n)
            {
                if (a <= n)
                    printf("%d", b++);
                else
                    printf("%d", --d);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}