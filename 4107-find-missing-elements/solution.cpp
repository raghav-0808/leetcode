class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        if(nums.empty()) return {};
        vector<int> r;
        int k = 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int min = nums[0];
        int max = nums[n - 1];
        for (int i = min; i <= max; i++) {
            if (k < nums.size() && nums[k] == i) {
                k++;
            } else
                r.push_back(i);
        }
        return r;
    }
};
