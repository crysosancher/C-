/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Example 1:
Input: nums = [1,2,3,1]
Output: true
*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1])
            return true;
        }
        return false;
        
    }
};