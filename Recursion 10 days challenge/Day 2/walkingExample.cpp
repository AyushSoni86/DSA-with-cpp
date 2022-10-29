#include <iostream>
using namespace std;

void reachHome(int src , int dest){
    cout << "source = " << src << "  destination = " << dest << endl;
    if(src == dest){
        cout << "reached home" << endl;
        return;
    }
    src++;
    reachHome(src, dest);

    
}

int main(){
    reachHome(1,10);

}