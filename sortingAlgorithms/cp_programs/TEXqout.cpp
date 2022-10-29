#include <iostream>
#include <string>

char text[1000000];

int main()
{
    int i, j = 0;
    while (gets(text))
    {
        for (int i = 0; text[i]; i++)
        {
            if (text[i] == '"')
            {
                j++;
                if (j % 2 != 0)
                    printf("``");
                else
                    printf("''");
            }
            else
                printf("%c", text[i]);
        }
        printf("\n");
    }
    return 0;
}