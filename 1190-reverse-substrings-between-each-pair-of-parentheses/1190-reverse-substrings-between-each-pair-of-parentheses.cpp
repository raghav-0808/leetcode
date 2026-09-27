class Solution {
public:
    string reverseParentheses(string s) {
        string ans = "";
        stack<string>st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(ans);
                ans = "";
            } else if (s[i] == ')') {
                reverse(ans.begin(), ans.end());
                ans=st.top()+ans;
                st.pop();
            } else {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};