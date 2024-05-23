#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>& nums) {
        int res = 0;
        for(int i= 0;i<nums.size();i++){
            res^=nums[i];
        }
        return res;
}
int main(){
    int n;
    cin>>n;
    int x ;
    vector<int> nums;
    for(int i =0;i<n;i++){
        cin>>x;
        nums.push_back(x);
    }
    cout<<singleNumber(nums);
    return 0;
}