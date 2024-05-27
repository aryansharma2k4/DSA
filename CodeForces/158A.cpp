#include<iostream>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    int ip[n];
    int res =0;
    for(int i =0;i<n;i++){
        cin>>ip[i];
    }
    int kth = ip[k-1];
    for (int i = 0; i < n; i++)
    {
        if(ip[i] >= kth && ip[i] >0){
            res++;
        }
    }
    cout<<res;
    return 0;
}