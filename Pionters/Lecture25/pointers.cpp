#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    float ft = 5.93856;
    float *pt = &ft;
    int *ptr = &num;

    cout << *ptr << endl;
    cout << num << endl;
    cout << "printing the address num " << &num << endl;
    cout << "Printing the address of num " << ptr << endl;
    cout << "Printing the address of ptr " << &ptr << endl;

    cout << *pt << " " << ft << " " << &ft << " " << pt << endl;
    cout << "Size of pointer ptr is " << sizeof(ptr) << endl;
    cout << "Size of pointer pt is " << sizeof(pt) << endl;

    return 0;
}