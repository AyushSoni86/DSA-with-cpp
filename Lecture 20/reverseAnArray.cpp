#include<iostream>
#include<vector>
using namespace std;

void reverse(int arr[], int n){
    int i = 0, j = n - 1;
    while(i<j){
        // int temp = arr[i];
        // arr[i] = arr[j];
        // arr[j] = temp;
        // i++;
        // j--;
        swap(arr[i++], arr[j--]);
    }
}


void reverseByRange(int arr[], int n , int m){
    int i = m+1, j = n- 1;
    while(i < j){
        swap(arr[i++], arr[j--]);
    }
}

void printArray(int arr[], int n ){
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    }cout << endl;
}



int main(){
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    printArray(arr,9);
    reverseByRange(arr,9, 3);
    printArray(arr,9);


    return 0;
}