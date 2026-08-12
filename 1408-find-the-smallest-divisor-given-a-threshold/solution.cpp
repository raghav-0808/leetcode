class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int high = *std::max_element(nums.begin(), nums.end());
        int low=1;
        int sum=0;
        int ans=0;
        while(low<=high){
            int mid= low + (high-low)/2;
            sum=0;
            for (int x : nums) {
                sum += (x+mid-1) / mid;
            }
            if(sum<=threshold){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
     
        }
        return ans;
    }
};
