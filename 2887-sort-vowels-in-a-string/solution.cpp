class Solution {
public:
    string sortVowels(string s) {
        string v="";
        for (char c : s) {
            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            v+=c;
        }
        sort(v.begin(),v.end());
        int j=0;
        for(int i =0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                s[i]=v[j++];
            }
        }
        return s;
    }
};
