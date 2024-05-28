#include<bits/stdc++.h>
using namespace std;
void sortColor(vector<int>& nums){
    int cZero = 0;
    int cOne = 0;
    int cTwo = 0;
    for(int i =0;i<nums.size();i++){
        if(nums[i] == 0){
            cZero ++;
        }
        else if(nums[i] == 1){
            cOne++;
        }
        else{
            cTwo++;
        }
    }
    for(int i = 0;i<cZero;i++){
        nums[i] = 0;
    }
    for(int i = cZero;i<cOne+cZero;i++){
        nums[i] = 1;
    }
    for(int i =cOne+cZero;i<nums.size();i++){
        nums[i] = 2;
    }
}
void sortColor2(vector<int>&nums){
    //Dutch National Flag Algorithm
    int low = 0;
    int mid = 0;
    int high = nums.size()-1;
    while(low<=mid && mid<=high){
        if(nums[mid] == 0){
            int temp = nums[low];
            nums[low] = nums[mid];
            nums[mid] = temp;
            low++;
            mid++;
        }
        else if(nums[mid] == 1){
            mid++;
        }
        else{
            int temp = nums[mid];
            nums[mid] = nums[high];
            nums[high] = temp;
            high--;
        }
    }
}
int main(){
    vector<int> nums = {0,2,1,2,0,1,2,0,1,2,0,1};
    sortColor(nums);
    for(int i =0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    vector<int> nums2 = {0,2,1,2,0,1,2,0,1,2,0,1};
    sortColor2(nums2);
    for(int i =0;i<nums2.size();i++){
        cout<<nums2[i]<<" ";
    }
    return 0;
}