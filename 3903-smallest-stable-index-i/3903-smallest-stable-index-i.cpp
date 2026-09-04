class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        // int max1=INT_MIN;
        // for (int i = 0; i < n; i++) {
        //     int min1 = INT_MAX;
        //     max1 = max(max1, nums[i]);
        //     for (int j = n - 1; j >= i; j--) {
        //         min1 = min(min1, nums[j]);
        //     }
        //     if ((max1 - min1) <= k)
        //         return i;
        // }
        vector<int> m(n);
        m[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            m[i] = min(m[i + 1], nums[i]);
        }
        int max1 = INT_MIN;
        for (int i = 0; i < n; i++) {
            max1 = max(max1, nums[i]);
            if (max1 - m[i] <= k)
                return i;
        }

        return -1;
    }
};