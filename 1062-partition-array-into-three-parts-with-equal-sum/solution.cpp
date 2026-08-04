class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
    //    int  totalsum=accumulate(arr.begin(),arr.end(),0);
    //     int leftsum=0;
    //     int rightsum=0;
    //     int n =arr.size();
    //     int left=0;
    //     int right=n-1;
    //     int target=totalsum/3;
    //     if(totalsum%3 !=0)return false;
    //     while(left<n){
    //       leftsum+=arr[left];
    //       left++;
    //       if(leftsum==target) break;
    //     }
    //     while(right>=0){
    //         rightsum+=arr[right];
    //         right--;
    //         if(rightsum==target) break;
    //     }
    //     return(left <=right && target==leftsum && target==rightsum);
       int n = arr.size();
        int total = accumulate(arr.begin(), arr.end(), 0);
        if (total % 3 != 0) return false;
        int target = total / 3;
        int sum = 0;
        int c = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            if (sum == target) {
                c++;
                sum = 0;
            }
        }
        return c>= 3;
    }
};
