class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string temp = "";
        string ans = "";
        unordered_map<string, string> m;
        for (auto pair : knowledge) {
            m[pair[0]] = pair[1];
        }
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                i++;
                while (s[i] != ')') {
                    temp += s[i];
                    i++;
                }
                auto it = m.find(temp);
                if (it != m.end()) {
                    ans += m[temp];
                } else {
                    ans.push_back('?');
                }
                temp = "";
            } else {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};