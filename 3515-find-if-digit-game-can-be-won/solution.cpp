class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum=0;
        int dsum=0;
        for(int x: nums){
            if(x<=9){
                sum+=x;
            }
            else{
                dsum+=x;
            }
        }
        if(dsum!=sum){
         return true;
        }
        else{
            return false;
        }
    }
};
