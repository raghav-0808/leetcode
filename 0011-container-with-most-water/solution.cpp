class Solution {
public:
    int maxArea(vector<int>& height) {
        int currwater=0;
        int maxwater=0;
        int n =height.size();
        // for(int i =0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         currwater=min(height[i],height[j])*(j-i);
        //         maxwater=max(maxwater,currwater);
        //     }
        // }
        // return maxwater;
        int left =0;
        int right=n-1;
        while(left<right){
             currwater=min(height[left],height[right])*(right-left);
             maxwater=max(maxwater,currwater);
             if(height[left]<height[right]) left++;
             else right--;
        }
        return maxwater;
    }
};
