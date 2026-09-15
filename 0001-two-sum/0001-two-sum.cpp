class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int n = nums.size();
        // for(int i =0;i <n;i++){
        //     for(int j =i+1;j<n;j++){
        //         if(nums[i]+nums[j]==target){
        //             return {i,j};
        //         }
        //     }
        // }
        // return {};
        unordered_map<int,int>s;
        for(int i =0;i<nums.size();i++){
            s[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int j=target-nums[i];
            if(s.find(j)!=s.end()&&s[j]!=i){
                return {i,s[j]};
            }
        }
        return {};

    }
};