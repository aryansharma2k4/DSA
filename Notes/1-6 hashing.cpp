#include<bits/stdc++.h>
using namespace std;
int hashh[1000000] = {0};
int main(){
      int size;
      cin>>size;
      int arr[size];
      for(int i = 0;i<size;i++){
            cin>>arr[i];
            hashh[arr[i]]+=1;
      }
      int check;
      cin>>check;
      cout<<hashh[check];
      return 0;
}
