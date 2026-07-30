class Solution {
public:
    string defangIPaddr(string address) {
        string s = "";
        for (char ch : address) {
            if (ch == '.') {
                s += "[.]";
            } else
                s += ch;
        }
        return s;
    }
};
