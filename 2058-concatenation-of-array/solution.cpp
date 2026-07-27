class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
      vector<int> v = nums;
        v.insert(v.end(), nums.begin(), nums.end());
        return v;
    }
};
