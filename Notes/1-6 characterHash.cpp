#include<bits/stdc++.h>
//for lowercase we subtract with 'a' while for all character we define a hash array of 256 characters.
using namespace std;
int main(){
      int size;
      int hash[27] = {0};
      char arr[size];
      for(int i =0; i<size;i++){
            cin>>arr[i];
            hash[arr[i] - 'a']      ;
      }
      char check;
      cin>>check;
      cout<<hash[check - 'a'];
}