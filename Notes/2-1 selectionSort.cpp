#include<bits/stdc++.h>
using namespace std;
int main(){
      int n;
      cin>>n;
      int arr[n];
      for(int i = 0 ; i< n; i++){
            cin>>arr[i];
      }
      int miniIndex = 0;
      //selection sort
      //time complexity of selection sort is O(n^2) in all the cases
      for(int i = 0; i< n-1; i++){
            miniIndex = i;
            for(int j = i; j<n; j++ ){
                  if(arr[j] < arr[miniIndex]){
                        miniIndex = j;
                  }
            }
            //swapping the minimum index with the first element of the selected subarray
            int temp = arr[i];
            arr[i] = arr[miniIndex];
            arr[miniIndex] = temp;

      }
      for(int i =0;i<n ;i++){
            cout<<" "<<arr[i];
      }
      return 0;
}