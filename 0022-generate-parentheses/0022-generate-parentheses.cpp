class Solution {
public:
    void helper(int n, int o, int c, vector<string>& ans, string temp) {
        if (temp.size() == n * 2) {
            ans.push_back(temp);
            return;
        }
        if (o < n) {
            temp.push_back('(');
            helper(n, o + 1, c, ans, temp);
            temp.pop_back();
        }
        if (c < o) {
            temp.push_back(')');
            helper(n, o, c + 1, ans, temp);
            temp.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        helper(n, 0, 0, ans, "");
        return ans;
    }
};