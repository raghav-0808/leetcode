class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>nums1(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        nums1.insert(nums1.end(),nums.begin(),nums.end());
        return nums1;
    }
};
