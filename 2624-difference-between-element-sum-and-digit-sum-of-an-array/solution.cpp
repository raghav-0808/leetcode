class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        int digsum=0;
        for (int x: nums){
            sum+=x;
            if(x>9){
                while(x>0){
                    digsum+=x%10;
                    x/=10;
                }
           } else{
                    digsum+=x;
                }
            }
        return abs(sum-digsum);
    }
};
