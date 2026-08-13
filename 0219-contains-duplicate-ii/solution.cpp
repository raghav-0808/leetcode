class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            if(m.count(num)&&(i-m[num])<=k){
                 return true;
            }
            m[num]=i;
        }
        return false;
    }
};
