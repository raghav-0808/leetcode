class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int sum=0;
        for(int x:nums){
            sum+=min((x%3),(3-(x%3)));
        }
        return sum;
    }
};