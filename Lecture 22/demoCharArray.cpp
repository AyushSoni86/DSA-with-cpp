#include<iostream>
using namespace std;

int main(){
    char ch[20];
    cin >> ch;

    int i = 0;
    while(ch[i] != '\0'){
       i++;
    }

    cout << i;



    return 0;
}