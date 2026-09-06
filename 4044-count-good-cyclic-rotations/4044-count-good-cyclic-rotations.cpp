class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        vector<int>s(nums.begin(),nums.end());
        int n =nums.size();
        for(int x:nums){
            s.push_back(x);
        }
        long sum1=0,sum2=0;
        for(int i =0;i<(n/2);i++){
            sum1+=s[i];
        }
        for(int i =(n/2);i<n;i++){
            sum2+=s[i];
        }
        int c=0;
        for(int i =0;i<n;i++){
            if(sum1>sum2)c++;
            sum1=sum1-s[i]+s[(n/2)+i];
            sum2=sum2-s[(n/2)+i]+s[i+n];
        }
        return c;
    }
};