class Solution {
public:
    double myPow(double x, int n) {
        long long N=n;
        double ans;
        if (N < 0) {
            N = -N;
            x = 1 / x;
        }
        ans = 1;
        while(N>0){
            if(N%2==1){
                ans*=x;
            }
            x*=x;
            N/=2;
        }
        return ans;
        // return pow(x,n);
    }
};
