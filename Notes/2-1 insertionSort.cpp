#include<bits/stdc++.h>
using namespace std;
//!In insertion sort we will increase the size of the subarray and check the position of the last element in the subarray if it is correct or not and move it accordingly 
//*Time complexity of insertion sort in worst and average case is O(n^2) and in the best case the time is O(n)
int main(){
      int n;
      cin>>n;
      int arr[n];
      for(int i = 0 ; i< n; i++){
            cin>>arr[i];
      }
      for(int i =0; i<n; i++){
            int j = i;
            while(j>0 && arr[j-1] > arr[j]){
                  int temp = arr[j];
                  arr[j] = arr[j-1];
                  arr[j-1] = temp;
                  j--;
            }
      }
      for(int i =0; i<n ;i++){
            cout<<arr[i]<<" ";
      }
      return 0;
}