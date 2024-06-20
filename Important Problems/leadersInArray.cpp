#include<bits/stdc++.h>
using namespace std;
//while moving in the array from end to the beginning the leader is the element which does not has any maximym element to the right of the array therefore we can say that while moving from right to left we will assume a maximum element and then update it whenever a new maximum is found and appending it to the resultant array and sorting it or not as required by the output and that is the result
void leaders(int n, vector<int> arr){
    vector<int> res;
    int max = arr[n-1];
    res.push_back(max);
    for(int i = n-2 ;i>=0;i--){
        if(arr[i] >= max){
            max = arr[i];
            res.push_back(max);
        }
    }
    reverse(res.begin(), res.end());
    for(int i = 0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}

int main(){
      vector <int> v = {16, 17, 5, 4, 3};
      int n = v.size();
      leaders(n, v);
      return 0;
}