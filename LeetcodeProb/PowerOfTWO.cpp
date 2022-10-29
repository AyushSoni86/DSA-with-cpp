#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    bool isPow = false;
    int answer = 1;
    for (int i = 0; i < 30; i++)
    {
        if (answer == num){
            isPow = true;
        }
        answer *= 2 ;
    }
    if (isPow == true)
        cout << "true";
    else
        cout << "false";
}