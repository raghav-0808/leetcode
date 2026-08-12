class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;
        int max1=candies[0];
        for(int x:candies){
            max1=max(max1,x);
        }
        for(int i =0;i<candies.size();i++){
            if(candies[i]+extraCandies>=max1){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        return ans ;
    }
};
