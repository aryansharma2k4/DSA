#include<bits/stdc++.h>
using namespace std;
void reverseArray(vector<int> &arr, int start, int end){
    while(start <= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
vector<int> rotateArray(vector<int>&arr, int k) {
    int n = arr.size();
    k = k%n;
    reverseArray(arr,0,k-1);
    reverseArray(arr,k,n-1);
    reverseArray(arr,0,n-1);
    return arr;
}

int main(){
      vector<int> arr;
      arr = {1,2,3,4,5,6};
      int k = 2;
      rotateArray(arr,k);
      for(int i = 0;i<arr.size();i++){
            cout<<arr[i]<<" ";
      }
      return 0;
}