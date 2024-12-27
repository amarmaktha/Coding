// https://leetcode.com/problems/subsets/description/
// LOGIC: Either include element in array or not include
// TC: O(2^N).
  
class Solution {
public:
    void func(vector<int>&nums, int i, vector<vector<int>>&AllSubsets, vector<int> subset){
        if(i==nums.size()){
            AllSubsets.push_back(subset);
            return;
        }
        func(nums,i+1,AllSubsets, subset); //Dont Include
      
        subset.push_back(nums[i]); //Include
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
