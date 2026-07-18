class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max = nums[0];
        int min = nums[0];
        for(int x: nums){
            if(x>max)
            max=x;
            if(x<min)
            min=x;
        }
        while(min!=0){
            int c= min;
            min=max%min;
            max=c;
        }
        return max;
    }
};
