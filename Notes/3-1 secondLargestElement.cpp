#include<bits/stdc++.h>
using namespace std;
int secondBiggest(n, vector<int> &v){
      int largest = v[0];
      int secondl = INT_MIN;
      for(int i =1;i<n;i++){
            if(a[i] > = largest){
                  largest = a[i];
                  secondl = largest;
            }
            else if(a[i]< largest && a[i]>=secondl){
                  secondl = a[i];
            }
      }
      return secondl;
}
int main(){
      int n;
      cin>>n;
      vector<int> v;
      for(int i =0;i<n;i++){
            cin>>v[i];
      }
      cout<<secondBiggest(n, v);
}