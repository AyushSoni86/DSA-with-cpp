#include <iostream>
using namespace std;
int main()
{
    char ch[] = "xyz";
    cout << ch[0] << " ";
    cout << ch[1] << " ";
    cout << ch[2] << endl;

    char *b = &ch[0];

    cout << b << endl;

    int arr[] = {1, 2, 3, 3, 4, 5};
    int *p = &arr[0];
    cout << p << endl;

    return 0;
}