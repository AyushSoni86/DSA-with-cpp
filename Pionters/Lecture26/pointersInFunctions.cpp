#include <iostream>
using namespace std;

void swap1(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a  = 523;
    int b = 6;
    cout << a << " " << b << endl;
    swap1(&a,&b);
    cout << a << " " << b << endl;
    



    return 0;
}