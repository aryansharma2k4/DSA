#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int sumArr = 0;
    for(int i = 0;i<n;i++){
        sumArr = sumArr + nums[i];
    }
    int sum = (n*(n+1))/2;
    return sum - sumArr;
}
int main(){
      vector<int> nums = {0,1,2,4,5,6};
      cout<<missingNumber(nums);
      return 0;
}