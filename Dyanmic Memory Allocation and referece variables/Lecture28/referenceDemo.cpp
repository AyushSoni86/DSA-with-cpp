#include <iostream>
using namespace std;
void update(int& n){
    n++;
}
int main(){
    int i = 5;
    int &j  = i;
    i++;
    j++;
    cout << i << " " << j << endl;
    update(i);
    cout << i << endl;
    return 0;
}