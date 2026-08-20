class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
       string rh="",sh="";
        for(int i =0;i<s.size();i++){
            if(s[i]==' '){
                if (!rh.empty()) {
                reverse(rh.begin(),rh.end());
                if (!sh.empty()) sh += " ";
                  sh+=rh;
                  rh="";
            }
            }
            else{
                rh+=s[i];
            }
        }
        if(!rh.empty()){
        reverse(rh.begin(),rh.end());
        if (!sh.empty()) sh += " ";
        sh=sh+rh;
        }
        return sh;
    }
};
