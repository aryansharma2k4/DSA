#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    set <int> st;
    int in;
    for(int i= 0;i<4;i++){
        cin>>in;
        st.insert(in);
    }
    int res = 4-st.size();
    cout<<res;
    return 0;
}