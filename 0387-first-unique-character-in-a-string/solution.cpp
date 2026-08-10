class Solution {
public:
    int firstUniqChar(string s) {
        int fre[26]={0};
        for(char ch:s){
            fre[ch-'a']++;
        }
        for(int i =0;i <s.size();i++){
            if(fre[s[i]-'a']==1){
                return i;
            }
        }
        return -1;
    }
};
