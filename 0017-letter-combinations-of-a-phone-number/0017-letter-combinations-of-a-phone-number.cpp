class Solution {
public:
    vector<string> letterCombinations(string digits) {
        return helper("", digits);
    }

public:
    vector<string> helper(string p, string up) {
        if (up.empty()) {
            vector<string> v;
            v.push_back(p);
            return v;
        }
        int d = up[0] - '0';
        vector<string> v;
        int start, end;
        if (d == 7) {   
            start = (d - 2) * 3;
            end   = start + 4;
        } else if (d == 9) {   
            start = (d - 2) * 3 + 1; 
            end   = start + 4;
        } else if(d==8){               
            start = (d - 2) * 3 +1;
            end   = start+3;
        }else{
               start = (d - 2) * 3;
            end   = start+3;
        }
        for (int i = start; i < end; i++) {
            char ch = (char)(i + 'a');
            vector<string>sub=(helper(p + ch, up.substr(1)));
            v.insert(v.end(),sub.begin(),sub.end());
        }
        return v;
    }
};