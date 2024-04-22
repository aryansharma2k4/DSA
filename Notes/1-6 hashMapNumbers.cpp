#include<bits/stdc++.h>
using namespace std;
int main(){
      int size;
      cin>>size;
      int arr[size];
      //fetching the number from the user
      for(int i = 0; i< size; i++){
            cin>>arr[i];
      }
      //adding them into the hash map
      map<int, int> mpp;
      //for every index of the hash map the frequency of the number is it's value
      for(int i =0; i<size; i++){
            mpp[arr[i]]++;
      }
      int check;
      cin>>check;
      //finding the frequency of the input number
      cout<<mpp[check];
      return 0;
}