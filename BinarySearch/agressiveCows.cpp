#include <iostream>
using namespace std;

void sortInsert(int arr[], int n)
{
    int j, key;
    for (int i = 1; i < n; i++)
    {
        j = i - 1;
        key = arr[i];
        while (j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
bool isPossible(int stalls[], int k, int mid, int n) {
    
    int cowCount = 1;
    int lastPos = stalls[0];
    
    for(int i=0; i<n; i++ ){
        
        if(stalls[i]-lastPos >= mid){
            cowCount++;
            if(cowCount==k)
            {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(int stalls[],int n, int k)
{
    sortInsert(stalls , n);
   	int s = 0;
    // int n = stalls.size();
    int e=stalls[n-1];
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while(s<=e) {
        if(isPossible(stalls, k, mid, n)) {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main()
{
    // int arr1[] = {0, 4, 3, 7, 10, 9};
    int arr[] = {0, 4, 3, 7, 10, 9};
    int n = sizeof(arr) / sizeof(int);
    int k = 3;
    cout << aggressiveCows(arr, n, k);
    return 0;
}