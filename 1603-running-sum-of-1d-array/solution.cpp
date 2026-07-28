class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
        int sum=0;
        for(int i =0;i<n;i++){
            sum = sum +nums[i];
         result.push_back(sum);
        }
        return result;
    }
};
