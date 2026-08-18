class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> m;
        for (int x : nums) {
            m[x]++;
        }
        if (k == 1) {
            int max1 = -1;
            for (auto& [val, count] : m) {
                if (count == 1) {
                    max1 = max(max1, val);
                }
            }
            return max1;
        }
        if (k == n) {
            int max1 = -1;
            for (int x : nums) {
                max1 = max(max1, x);
            }
            return max1;
        }
        int max1 = -1;
        if (m[nums[0]] == 1) {
            max1 = max(max1, nums[0]);
        }
        if (m[nums[n - 1]] == 1) {
            max1 = max(max1,nums[n - 1]);
        }
        return max1;
    }
};
