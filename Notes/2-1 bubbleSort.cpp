#include<iostream>
using namespace std;
int main(){
      int n;
      cin>>n;
      int arr[n];
      for(int i = 0 ; i< n; i++){
            cin>>arr[i];
      }
      for(int i =0; i<n-1 ; i++){
            //to check whether the provided array is already sorted or not 
            bool flag = true;
            for(int j = i+1; j<n;j++ ){
                  //swapping the two variables
                  if(arr[j] < arr[i]){
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                        flag = false;
                  }
            }
            if (!flag){
                  break;
            }
      }
      for(int i = 0; i<n ;i++){
            cout<<arr[i]<<" ";
      }
      return 0;
}