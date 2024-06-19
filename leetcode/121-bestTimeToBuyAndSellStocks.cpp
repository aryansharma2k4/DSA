#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
    int mini = prices[0];
    int profit = 0;
    int maxProfit = 0;
    for(int i =1;i<prices.size();i++){
        profit = prices[i] - mini;
        if(profit > maxProfit){
            maxProfit = profit;
        }
        if(mini > prices[i]){
            mini = prices[i];
        }
    }
    return maxProfit;
}
int main(){
    vector <int> nums = {7,1,5,6,3,4};
    cout<<maxProfit(nums);
    return 0;
}