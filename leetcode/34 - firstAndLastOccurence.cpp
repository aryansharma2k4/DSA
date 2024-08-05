class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0;
        int n = nums.size();
        int high = n-1;
        int lowBound = n;
        while(low<=high){
            int mid = (low + high)/2;
            if(nums[mid] >= target){
                lowBound = mid;
                high = mid -1;
            }
            else{
                low = mid + 1;
            }
        }
        low = 0;
        high = n-1;
        int uppBound = n;
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] > target){
                uppBound = mid;
                high = mid -1;
            }else{
                low = mid +1;
            }
        }
        if(lowBound == n || nums[lowBound] != target){
            return{-1, -1};
        }else return{lowBound, uppBound -1};
    }
};