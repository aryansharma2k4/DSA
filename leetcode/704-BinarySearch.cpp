#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& nums, int target){
    int low = 0;
    int n = nums.size();
    int high = n-1;
    int mid = 0;
    while(low<=high){
        mid = (low + high)/2;
        if(nums[mid] == target){
            return mid;
        }
        else if(target>nums[mid]){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    }
    return -1;
}
int recBS(vector<int>& nums, int target, int low, int high){
    int mid = (low + high)/2;
    if(low>high){
        return -1;
    }
    if(nums[mid] == target){
        return mid;
    }
    else if(target >=nums[mid]){
        return recBS(nums, target,mid+1, high);
    }
    else{
        return recBS(nums, target, low, mid-1);
    }
}
int main(){
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;
    cout<<search(nums, target)<<endl;
    int low = 0;
    int high = nums.size()-1;
    cout<<recBS(nums, target, low, high);
    return 0;
}