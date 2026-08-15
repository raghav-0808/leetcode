class Solution {
public:
    string reverseWords(string s) {
        // string rh="",sh="";
        // for(int i =0;i<s.size();i++){
        //     if(s[i]==' '){
        //         reverse(rh.begin(),rh.end());
        //           sh+=rh+" ";
        //           rh="";
        //     }
        //     else{
        //         rh+=s[i];
        //     }
        // }
        // reverse(rh.begin(),rh.end());
        // sh+=rh;
        // return sh;
        int i=0;
        for(int j=0;j<=s.size();j++){
            if(j==s.size()||s[j]==' '){
               reverse(s.begin()+i,s.begin()+j);
               i=j+1;
            }
        }
          return s;
    }
};
