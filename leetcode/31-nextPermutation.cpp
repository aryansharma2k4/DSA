#include<bits/stdc++.h>
using namespace std;
//this function works on finding the longest prefix in a array as in the next permutation the longest prefix will remain same now if we look fromt he back of the array we will find that the number are in increasing order and there will be a point where the next number will be smaller than the previous number that will be the break point for the array then we will swap the first breakpoint which is the number at that index ind and then the number which is just bigger than that number now after swapping wel will see that the number which are next to them are in decreasing order so the next permutation will be the reverse of those number. if initially we are not able to find that number which is just smaller than the previous number from the start or the array is in decreasing order than we can conclude that the next permutation is the reverse of the given array and just return the reversed array 
void nextPermutation(vector<int>& nums) {
        int ind = -1;
        int n = nums.size();
        for(int i = n-2;i>=0;i--){
            if(nums[i] < nums[i+1]){
                ind = i;
                break;
            }
        }
        if(ind == -1){
            reverse(nums.begin(), nums.end());
        }
        for(int i = n-1 ;i>= ind; i--){
            if(nums[i] > nums[ind]){
                swap(nums[i], nums[ind]);
                break;
            }
        }
        reverse(nums.begin() + ind + 1, nums.end());
        for(int i = 0; i< n; i++){
            cout<<nums[i]<<" ";
        }
}
int main(){
    vector<int> nums = {2,1,5,4,3,0,0};
    nextPermutation(nums);
    return 0;
}