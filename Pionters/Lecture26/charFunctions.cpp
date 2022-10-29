#include <iostream>
using namespace std;

void swap(char *x, char *y)
{
    char *temp = x;
    x = y;
    y = temp;
}

int main()
{
    char *x = "ayush";
    char *y = "khushi";
    //swap(x, y);
    char *t = x;
    x = y;
    y = t;
    cout << x << " " << y << endl;
    return 0;
}