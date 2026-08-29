class Solution {
public:
    int maxValidSplits(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for (int i = -1; i < n; i++) {
            vector<int> b;
            for (int j = 0; j < n; j++) {
                if (j != i) {
                    b.push_back(nums[j]);
                }
            }
                int m = b.size();
                if (m < 2)
                    continue;
                vector<int> pre(m);
                vector<int> suf(m);

                pre[0] = b[0];
                for (int i = 1; i < m; i++)
                    pre[i] = gcd(pre[i - 1], b[i]);

                suf[m - 1] = b[m - 1];
                for (int i = m - 2; i >= 0; i--)
                    suf[i] = gcd(suf[i + 1], b[i]);
                    int cur=0;
                for (int i = 0; i < m - 1; i++)
                    if (pre[i] == suf[i + 1])
                        cur++;
                 ans=max(ans,cur);
            }
        
            return ans;
        }
    };