#include<bits/stdc++.h>
using namespace std;
//Kadane's algorithm
//this is the kadane's algorithm where we will linear traverse along the array and add the first item to the sum if the sum is less than zero we will make it zero and continue will we find a positive number after that we will continue to add it to the sum till it is greater than zero once we got a positive number we will update the maxi variable which will only update if the sum goes greater than it 
int maxSubArray(vector<int>&nums){
    int sum = 0;
    int maxi = 0;
    for(int i = 0;i<nums.size();i++){
        sum = sum + nums[i];
        if(sum>maxi){
            maxi = sum;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    return maxi;
}
int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArray(nums);
    return 0;
}