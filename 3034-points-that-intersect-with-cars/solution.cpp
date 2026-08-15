class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        unordered_set<int>s;
        for(auto& x: nums){
           for(int i =x[0];i<=x[1];i++){
            s.insert(i);
           }
        }
        return s.size();
    }
};
