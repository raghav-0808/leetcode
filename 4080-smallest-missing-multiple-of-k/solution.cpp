class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>s(nums.begin(),nums.end());
        int i =1;
        while(s.find(k*i)!=s.end()){
         i++;
        }
         return k*i;
    }
};
