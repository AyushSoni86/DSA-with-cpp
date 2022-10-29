#include <iostream>
using namespace std;
void update(int& n){
    n++;
}

int main(){
    int i = 5;
    update(i);
    cout << i << endl;
}