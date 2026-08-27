class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = 0;
        int c = 0;
        unordered_map<int, int> m;
        for (int x : nums)
            m[x]++;
        for (auto a : m) {
            n = a.second;
            c += n * (n - 1) / 2;
        }

        // for(int i=0;i<n;i++){
        //     for(int j =i+1;j<n;j++){
        //         if(nums[i]==nums[j])c++;
        //     }
        // }
        return c;
    }
};
