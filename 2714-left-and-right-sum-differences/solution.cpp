class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
       int sum= accumulate(nums.begin(),nums.end(),0);
       int leftsum=0;
       vector<int>ans(nums.size());
       for(int i =0;i<nums.size();i++){
        int rightsum=sum-leftsum-nums[i];
        ans[i]=abs(leftsum-rightsum);
          leftsum+=nums[i];
       }
       return ans;
    }
};
