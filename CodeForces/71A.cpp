#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string res[n];
    for(int i =0;i<n;i++){
        cin>>res[i];
        if(res[i].length()>10){
            res[i] = res[i][0] + to_string(res[i].length()-2) + res[i][res[i].length()-1];
        }
    }
    for(int i =0;i<n;i++){
        cout<<res[i]<<endl;
    }
    return 0;
}