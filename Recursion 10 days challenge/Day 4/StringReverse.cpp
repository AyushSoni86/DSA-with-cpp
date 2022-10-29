#include <iostream>
#include <string.h>
using namespace std;

void reverse(string &str,  int i, int j)
{
    if (i > j)
        return;

    swap(str[i], str[j]);
    //i++;
    //j--;
    reverse(str, ++i, --j);
}

int main()
{
    string name = "AyushSoni";
    cout << name << endl;
    reverse(name, 0, name.length() - 1);
    cout << name << endl;
    return 0;
}