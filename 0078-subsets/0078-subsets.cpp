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
        helper(nums, ans, idx + 1, allsub);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> allsub;
        helper(nums, ans, 0, allsub);
        return allsub;
    }
};