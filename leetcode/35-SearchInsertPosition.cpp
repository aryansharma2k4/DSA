#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& nums, int target){
    int low = 0;
    int ans = nums.size();
    int high = nums.size() -1;
    while(low<=high){
        int mid = (low + high)/2;
        if(nums[mid] >= target){
            ans = mid;
            high = mid -1;

        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}
int main(){
    vector<int> nums = {1,3,5,6};
    int target = 5;
    cout<<search(nums, target)<<endl;
    return 0;
}