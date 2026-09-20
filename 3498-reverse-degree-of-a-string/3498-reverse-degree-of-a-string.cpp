class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=1;i<=s.size();i++){
            char c=s[i-1];
            int s=(('z'-c+1)*i);
            sum+=s;
        }
        return sum;
    }
};