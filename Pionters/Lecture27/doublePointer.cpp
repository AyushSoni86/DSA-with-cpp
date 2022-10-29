
#include <iostream>
using namespace std;
int f(int x, int *py, int **ppz)
{
    int y, z;

    cout << endl
         << endl
         << "x -> " << x << endl;
    cout << "**ppz -> " << **ppz << endl;

    **ppz += 1;

    cout << "**ppz -> " << **ppz << endl;
    cout << "x -> " << x << endl;

    z = **ppz;

    cout << "x -> " << x << endl;
    cout << "z -> " << z << endl;
    
    cout << endl;
    cout << "*py -> " << *py << endl;

    *py += 2;

    cout << "x -> " << x << endl;
    cout << "*py -> " << *py << endl;

    y = *py;

    cout << "y -> " << y << endl;
    cout << "x -> " << x << endl;

    x += 3;

    cout << "x -> " << x << endl;

    return x + y + z;
}

int main()
{
    // int c, *b, **a;
    int c = 4;
    int *b = &c;
    int **a = &b;
    cout << f(c, b, a) << endl;
    // cout << a << " " << b << " " << c << " " << endl;
    return 0;
}
// int main()
// {
//     int a = 10;
//     int *p = &a;
//     int **q = &p;
//     int b = 20;
//     *q = &b;
//     (*p)++;
//     cout << a << " " << b << endl;
// }