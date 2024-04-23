#include<bits/stdc++.h>
using namespace std;
int linearSearch(int n, int num, vector<int> &arr)
{
    for(int i = 0;i<n;i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
}

int main(){
      vector <int> v = {1,2,3,4,5,6};
      int num = 3;
      int n = 6;
      cout<<linearSearch(n, num, v);
      return 0;
}