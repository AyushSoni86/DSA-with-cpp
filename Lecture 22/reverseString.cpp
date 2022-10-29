#include<iostream>
using namespace std;


void reverse(char ch[], int n){
    int s = 0, e = n - 1;
    while (s<e)
    {
        swap(ch[s++], ch[e--]);
    }
 }


int main(){
    char ch[] = "Ayush";
    // int size = sizeof(ch)/sizeof(char);

    reverse(ch, 5); 
    cout << ch;

    return 0;

}   