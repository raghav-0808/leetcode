class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int n = 0;
        if (k % 2 == 0 || k % 5 == 0)
            return -1;
        for (int ans = 1; ans <= k; ans++) {
            n = (n * 10 + 1) %k;
            if (n == 0)
                return ans;
        }
        return -1;
    }
};