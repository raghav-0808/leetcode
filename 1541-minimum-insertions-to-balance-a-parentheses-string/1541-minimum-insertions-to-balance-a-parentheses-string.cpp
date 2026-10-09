class Solution {
public:
    int minInsertions(string s) {
        stack<char> st;
        int c = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(')
                st.push(s[i]);
            else {
                if (i + 1 < s.size() && s[i + 1] == ')') {
                    if (!st.empty())
                        st.pop();
                    else
                        c++;

                    i++;
                } else {
                    if (!st.empty()) {
                        st.pop();
                        c++;
                    } else {
                        c += 2;
                    }
                }
            }
        }
        return (c + (st.size() * 2));
    }
};