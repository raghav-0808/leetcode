class Solution {
public:
    int pivotInteger(int n) {
       int sum=0;
        for(int i =1;i<=n;i++){
            sum+=i;
        }
        int leftsum=0;
        for(int i =1;i<=n;i++){
            int rightsum=sum-leftsum-i;
            if(rightsum==leftsum) return i;
            leftsum+=i;
        }
       
        return -1;
    }
};
