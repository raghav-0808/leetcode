class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>m;
        int j=0,ans=0;
        for(int i=0; i<s.size();i++){
            m[s[i]]++;
            while(m[s[i]]>2){
                m[s[j]]--;
                j++;
            }
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};
