#include<iostream>
#include<bits/c++config.h>
#include<stllock.h>
using namespace std;


vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> ans;
	for(int i = 0 ; i < n ; i++){
        
        for(int j = 0; j < m ; j++){
            if(arr1[i]== arr2[j]){
                ans.push_back(arr1[i]);
                arr2[j] = -123;
                break;
            }
        }
    }
}