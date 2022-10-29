#include <iostream>
using namespace std;

int main()
{

    int arr[] = {2, 1, 4, 7, 9, 1, 8, 7, 2, 3, 6};
    // cout << arr[3] << " - " << *(arr + 3) << " - " << 3 [arr] << endl;
    int ar[] = {4,5,6,7};
    int*p = (ar+1);
    char b[] = "xyz";
    char*c = &b[0];
    cout << c << endl;
    /*  cout << arr << endl;
    cout << *arr << endl;
    cout << &arr << endl;
    cout << &arr[0] << endl;
    cout << arr+1 << endl;
    cout << *arr+1 << endl;
    cout << *(arr)+1 << endl;
    cout << *(arr+1) << endl;
    */

    // cout << arr << endl;
    // cout << &arr << endl;
    // cout << &arr[0] << endl;
    // // cout << *arr << endl;
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << *arr + i << " - " << *(arr + i) << endl;
    // }

    return 0;
}