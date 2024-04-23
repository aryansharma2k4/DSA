#include<bits/stdc++.h>
using namespace std;
vector < int > sortedArray(vector < int > a, vector < int > b) {
    int n = a.size();
    int m = b.size();
    vector <int> res;
    int i = 0;
    int j = 0;
    while(i<n && j<m){
        if(a[i] <= b[j]){
            if(res.size() == 0 || res.back()!= a[i]){
                res.push_back(a[i]);
            }
            i++;
        }
        else if(a[i] > b[j]){
            if(res.size() == 0 ||  res.back() != b[j]){
                res.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<n){
         if(res.size() == 0 ||  res.back() != a[i]){
             res.push_back(a[i]);
         }
         i++;
    }
    while(j<m){
         if(res.size() == 0 ||  res.back() != b[j]){
             res.push_back(b[j]);
         }
         j++;
    }
    return res;

}
int main(){
      vector<int> a = {1,2,3,4,6,6,7};
      vector<int> b = {1,2,2,2,3,4};
      vector <int> res = sortedArray(a,b);
      for(int i = 0;i<res.size();i++){
            cout<<res[i]<<" ";
      }
      return 0;
}