#include<iostream>
using namespace std;
int main(){
      int size;
      cin>>size;
      int arr[size];
      for(int i =0; i<size; i++){
            cin>>arr[i];
      }
      //!This will traverse the largest element in the array to the last
      for(int i =0; i<= size-1; i++){
            if(arr[i-1] >= arr[i]){
                  int temp = arr[i-1];
                  arr[i-1] = arr[i];
                  arr[i] = temp;
            }
      }
      cout<<arr[size-1];
      return 0;
}