class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char>ans(s.begin(),s.end());
        return ans.size();
    }
};
