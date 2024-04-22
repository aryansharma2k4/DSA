#include<bits/stdc++.h>
using namespace std;
int main(){
      int size;
      cin>>size;
      vector <int> nums;
      map <int, int> mpp;
      for(int i =0; i<size; i++){
            cin>>nums[i];
            mpp[nums[i]]++;
      }
      
      return 0;
}