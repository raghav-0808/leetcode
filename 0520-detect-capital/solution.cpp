class Solution {
public:
    bool detectCapitalUse(string word) {
        int c=0;
        for (char ch : word) {
            if (isupper(ch)) {
                c++;
            }
        }
        if(c==0||c==word.size()||(c==1&& isupper(word[0]))){
            return true;
        }
        else
        return false;
    }
};
