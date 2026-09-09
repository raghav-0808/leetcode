class Solution {
public:
    long long countCommas(long long n) {
        long long commas=0;
        long long s=1000;
        while(n>=s){
            commas+=(n-s +1);
            s*=1000;
        }
        return commas;
    }
};