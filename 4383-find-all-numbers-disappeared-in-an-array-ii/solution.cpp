class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower,
                                               int upper) {
        set<int> s(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for (int i = lower; i <= upper;) {
            if (s.find(i) != s.end()) {
                i++;
            }else{
            int st = i;
            while(i<=upper &&s.find(i)==s.end()){
                i++;
            }
            ans.push_back({st,i-1});
            }
        }
    return ans;
}
}
;
