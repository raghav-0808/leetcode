class Solution {
public:
    bool isPalindrome(string s) {
        string r = "";
        for (char ch : s) {
            if (isalnum(ch)) {
                r.push_back(tolower(ch));
            }
        }
        s.clear();
        s = r;
        reverse(r.begin(), r.end());
        if (r == s)
            return true;
        else
            return false;
    }
};
