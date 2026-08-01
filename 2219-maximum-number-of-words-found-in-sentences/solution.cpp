class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int m=0;
        for(string s: sentences){
            // int c=0;
            // for(char ch:s){
            //     if(ch==' '){
            //         c++;
            //     }
            // }
            int c=count(s.begin(),s.end(),' ');
            m=max(c,m);
        }
        return m+1;
    }
};
