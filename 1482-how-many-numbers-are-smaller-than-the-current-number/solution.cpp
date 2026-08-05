class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int>r;
        for(int i=0;i<n;i++){
            int c=0;
              for(int j=0;j<n;j++){
                      if(nums[i]>nums[j]){
                        c++;
                      }
              }
              r.push_back(c);
        }
        return r;
    }
};
