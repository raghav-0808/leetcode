class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>m;
        int j=0;
        int max1=0;
       for(int i =0;i<n;i++){
        m[nums[i]]++;
        while(m[nums[i]]>k){
             m[nums[j]]--;
             j++;
        }
        max1=max(max1,i-j+1);
       }
       return max1;
    }
};
