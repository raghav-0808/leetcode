class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum= n*(n+1)/2;
        int asum=0;
        for(int x: nums){
            asum+=x;
        }
        return sum-asum;
    }
};
