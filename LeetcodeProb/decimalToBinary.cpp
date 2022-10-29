#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int decimal = 13; // 1101
    int binary = 0;
    int i = 0;
    while (decimal > 0)
    {
        int bit = decimal & 1;
        binary = bit * pow(10, i++) + binary;
        decimal = decimal >> 1;
        // i++;
    }
    cout << binary << endl;
}