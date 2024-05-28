//Brute-Force Generating all the sub-arrays and then calculating there sum 
//Better method can be hashing which will store the sum of the number till the element and the length correspoding to it so that whenever we move we check if we already have a sum k in the series

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    int sum = 0;
    map <int , int> mpp;
    int maxLen = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i =0;i<n;i++){
        sum = sum + arr[i];
        if(sum == k){
            maxLen = max(maxLen, i+1);
        }
        int rem = sum - k;
        if(mpp.find(rem) != mpp.end()){
            int len = i - mpp[rem];
            maxLen = max(maxLen, len);
        }
        mpp[sum] = i;
    }
    cout<<maxLen;
    return 0;    
}