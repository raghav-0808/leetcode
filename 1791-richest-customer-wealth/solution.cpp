class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0;
        int sum;
        for (int a = 0; a < accounts.size(); a++) {
            sum = 0;
            for (int i = 0; i < accounts[a].size(); i++) {
                sum += accounts[a][i];
            }
            if (sum>max) {
                max = sum;
            }
        }
        return max;
    }
};
