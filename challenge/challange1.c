#include <stdio.h>

int main()
{
    int c;
    int n=5;
    
    c=n*2-1;
    for (int i = 1; i <= c; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if ((j==i) || (j==c-i+1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }printf("\n");
    }
    return 0;
}