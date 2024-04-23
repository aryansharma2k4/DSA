#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums) {
    int count = 0;
    int maxCount = 0;
    int i = 0;
    while(i<nums.size()){
        if(nums[i] == 1){
            count++;
            maxCount = max(count, maxCount);
        }
        else{
            count = 0;
        }
        i++;
    }
    return maxCount;
}
int main(){
      vector <int> nums = {1,1,1,0,1,1,1,1};
      cout<<findMaxConsecutiveOnes(nums);
      return 0;
}