//Brute force is using two for loops and can be optimised by not checking the previous elements
//this is the optimal solution and the best solution of not a sorted array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void twoSum(vector<int>& nums, int target){
    map<int, int> mpp;
    vector<int> res;
    for(int i =0;i<nums.size();i++){
        mpp[nums[i]] = i;
    }
    for(int i =0;i<nums.size();i++){
        int rem = target - nums[i];
        if(mpp[rem]){
            res.push_back(i);
            res.push_back(mpp[rem]);
        }
    }
    cout<<res[0]<<" "<<res[1];
}
int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;
    twoSum(nums, target);
    return 0;
}

//for a sorted array this is the fastest solution
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void twoSum(vector<int>& nums, int target){
    int left = 0;
    int right = nums.size()-1;
    vector<int> res;
    while(left<right){
        int sum = nums[left] + nums[right];
        if(sum == target){
            res.push_back(left);
            res.push_back(right);
        }
        else if(sum>target){
            right--;
        }
        else{
            left++;
        }
        cout<<res[0]<<" "<<res[1];
    }
}
int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;
    twoSum(nums, target);
    return 0;
}