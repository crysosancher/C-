// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

// A subarray is a contiguous part of an array.

 

// Example 1:

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: [4,-1,2,1] has the largest sum = 6.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int max_so_far=nums[0];
        int cur_max=nums[0];
        if(nums.size()==1){
            return max_so_far;
        }
        for(int i=1;i<nums.size();i++){
            cur_max=max(nums[i],cur_max+nums[i]);
            max_so_far=max(max_so_far,cur_max);
        }
        return max_so_far;
        
    }
};