class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n =nums.size();
        // for (int i = 0; i < n; i++) {
        //     for (int j = i; j < n; j++) {
        //         if (nums[i] == 0) {
        //             swap(nums[i], nums[j]);
        //         }
        //     }
        // }
        int i =0;
        int j=0;
        while(j<n){
            if(nums[i]==0&&nums[j]==0)
                j++;
            else{
               swap(nums[i],nums[j]);
               i++;
               j++;
            }
        }
    }
};
