#include<bits/stdc++.h>
using namespace std;
void rearrangeArray(vector<int>& nums) {
    int EvenCount = 0;
    int OddCount = 0;
    vector<int> res(nums.size(),0);
    for(int i = 0;i<nums.size();i++){
        if(nums[i]>=0){
            res[EvenCount*2] = nums[i];
            EvenCount++;
        }
        else{
            res[(OddCount*2)+1] = nums[i];
            OddCount++;
        }
    }
    for(int i = 0;i<nums.size();i++){
        cout<<res[i]<<" ";
    }
}
int main(){
    vector<int> nums = {3,1,-2,-5,2,-4};
    rearrangeArray(nums);
    return 0;
}