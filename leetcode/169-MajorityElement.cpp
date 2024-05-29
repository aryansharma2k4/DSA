#include<bits/stdc++.h>
using namespace std;
int majorityElement1(vector<int>& nums) {
        map <int, int> mpp;
        for(int i = 0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int res = 0;
        for(int i = 0;i<mpp.size();i++){
            if(mpp[i]>(nums.size()/2)){
                res = i;
                break;
            }
        }
        return res;
    }
    //this is moore's voting algorithm
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int ele;
        for(int i =0;i<nums.size();i++){
            if(count == 0){
                ele = nums[i];
                count = 1;
            }
            else if(nums[i] == ele){
                count++;
            }
            else{
                count--;
            }
        }
        return ele;
    }
int main(){
    return 0;
}