class Solution {
public:
    string finalString(string s) {
        for(int i =0; i< s.size();i++){
            if(s[i]=='i'){
                reverse(s.begin(),s.begin()+i);
            }
        }
        s.erase(remove(s.begin(),s.end(),'i'),s.end());
        return s;
    }
};
