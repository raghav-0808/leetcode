class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(), prices.end());
        sort(discounts.begin(), discounts.end());
        double sum = 0;
        int n = prices.size();
        int m = discounts.size();
        int j = m - 1;
        for (int i = n - 1; i >= 0; i--) {
            if (j >= 0) {
                sum += (prices[i] * (100 - discounts[j])) / 100.0;
                j--;
            }else
            sum += prices[i];
        }
        return sum;
    }
};
