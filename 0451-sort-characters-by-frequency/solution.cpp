class Solution {
public:
    string frequencySort(string s) {
        string sh = "";
        unordered_map<char, int> m;
        for (char ch : s) {
            m[ch]++;
        }
        vector<pair<char, int>> v(m.begin(), m.end());
        sort(v.begin(), v.end(),
             [](const pair<char, int>& a, const pair<char, int>& b) {
                 return a.second > b.second;
             });
        for (auto st : v) {
            sh.append(st.second, st.first);
        }
        return sh;
    }
};
