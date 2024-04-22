//the time complexity by using this is method is O(log(n))
#include<bits/stdc++.h>
using namespace std;
int main(){
      int size;
      cin>>size;
      char a[size];
      //taking the input of the charactes in the array
      for(int i = 0; i<size; i++){
            cin>>a[i];
      }
      //unordered map can also be used in this case
      //the key of the map is the thing's frequency you want to store inside it and the value is always the frequency of the character in the array
      map <char, int> mpp;
      for(int i = 0; i<size; i++){
            mpp[a[i]]++;
      }
      char check;
      cin>>check;
      cout<<mpp[check];
      return 0;

}