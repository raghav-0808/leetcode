class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>m;
        int max=0;
        int ans =-1;
         for(int x: nums){
            if(x%2==0){
                m[x]++;
                int currfreq=m[x];
                 
                 if(currfreq>max){
                    max=currfreq;
                    ans=x;
                 }
                 else if (currfreq==max&& x<ans){
                      ans =x;
                 }
            }
        }
        return ans;
    }
};
