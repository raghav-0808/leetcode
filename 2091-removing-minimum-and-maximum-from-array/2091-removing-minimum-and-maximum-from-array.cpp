class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int max1 = 0;
        int min1 = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] < nums[min1])
                min1 = i;
            if (nums[i] > nums[max1])
                max1 = i;
        }
        int i = min(min1, max1);
        int j = max(min1, max1);
        return min({j + 1, n - i, (i + 1) + (n - j)});
    }
};