#include <iostream>
using namespace std;

#define AREA(l,b) (l*b)
int main(){
    int l = 10, b = 12;
    int ans = AREA(l,b);
    cout << ans << endl;
    cout << AREA(13,45) << endl;

    return 0;
}