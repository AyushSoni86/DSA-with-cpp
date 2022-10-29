#include<iostream>
using namespace std;
int main(){
int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j<=n-i+1;j++){
            cout<<j;
        }
        for (int k = 1; k <i*2-1; k++)
        {
            cout<<"*";
        }
        for(int m = 1; m<=n-i+1;m++){
            cout<<n-m+2-i;
        }
        



        cout<<endl;
    }
    


}