#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        sum[i] = 0;
    }
    for(int i = 0;i<n;i++){
        while(arr[i] >0){
            sum[i] = sum[i] + (arr[i]%10);
            arr[i] = arr[i]/10;
        }
    }
    for(int i = 0;i<n;i++){
        cout<<sum[i]<<endl;
    }
    return 0;
}