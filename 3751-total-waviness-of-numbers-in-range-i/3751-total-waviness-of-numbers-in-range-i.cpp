class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int c=0;
        for(int i= num1;i<=num2;i++){
           string s=to_string(i);
           if(s.size()<3) continue;
            
            for(int j=1;j<s.size()-1;j++){
                char left=s[j-1];
                char right=s[j+1];
                char mid =s[j];
                if(left<mid&&right<mid||left>mid&&right>mid){
                    c++;
                }
            }
        }
        return c;
    }
};