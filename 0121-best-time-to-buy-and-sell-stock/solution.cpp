class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int min1=prices[0];
        int mp=0;
        for(int p:prices){
            min1=min(min1,p);
            int profit=p-min1;
            mp=max(mp,profit);
        }
        return mp;
    }
};
