class Solution {
public:
     void helper(vector<int>&nums, vector<int>&ans, int idx,
                vector<vector<int>>&allsub) {
        if (idx == nums.size()) {
            allsub.push_back({ans});
            return;
        }
        ans.push_back(nums[idx]);
        helper(nums, ans, idx + 1, allsub);
        
        ans.pop_back();
        int i =idx+1;
        while(i<nums.size()&&nums[i]==nums[i-1])i++;

        helper(nums, ans, i, allsub);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        vector<vector<int>> allsub;
        helper(nums, ans, 0, allsub);
        return allsub;
    }
};