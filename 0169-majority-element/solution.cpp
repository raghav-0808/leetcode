class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int n=nums.size();
        for(int x:nums){
            m[x]++;
            if(m[x]>(n/2)){
                return x;
            }
        }
        return -1;
    }
};
