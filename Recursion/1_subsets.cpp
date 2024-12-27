// https://leetcode.com/problems/subsets/description/
// LOGIC: Either include element in array or not include
// TC: O(2^N).
// 2nd method
// Can also be solved by bitmask, suppose there are n elements then there will be 2^n subsets.
// generate 0 to 2^n bit representation, if 1 include or else if 0 dont include.
  
class Solution {
public:
    void func(vector<int>&nums, int i, vector<vector<int>>&AllSubsets, vector<int> subset){
        if(i==nums.size()){
            AllSubsets.push_back(subset);
            return;
        }
        func(nums,i+1,AllSubsets, subset);     //Dont Include
      
        subset.push_back(nums[i]);             //Include
        func(nums,i+1,AllSubsets, subset);

        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> AllSubsets;
        vector<int> subset;
        func(nums,0, AllSubsets, subset );
        return AllSubsets;
    }
};
