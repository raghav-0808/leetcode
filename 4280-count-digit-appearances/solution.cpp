class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int c = 0;
        for (int x : nums) {
            while (x != 0) {
                int y = x % 10;
                if (y == digit)
                    c++;
                x /= 10;
            }
        }
        return c;
    }
};
