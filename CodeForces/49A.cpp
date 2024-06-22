#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    vector <char> res;
    int n = s.length();
    for(int i = 0;i<n;i++){
        if(s[i]>=65 && s[i]<=132){
            if(s[i]>=65 && s[i]<=90){
                res.push_back(s[i]);
            }
            else{
                s[i] = s[i] - 32;
                res.push_back(s[i]);
            }

        }
    }
    int a = res.size();
    if(res[a-1] =='A' || res[a-1] =='E' || res[a-1] =='I' || res[a-1] =='O' || res[a-1] =='U' || res[a-1] == 'Y'){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}