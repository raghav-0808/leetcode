class Solution {
public:
    bool isSubsequence(string s, string t) {
       int j=0;
       int c=0;
        for(int i =0;i<t.size();i++){
            char ch=t[i];
                if(ch==s[j]){
                    c++;
                    j=j+1;
                }
        }
        return c==s.size();
            }
};
