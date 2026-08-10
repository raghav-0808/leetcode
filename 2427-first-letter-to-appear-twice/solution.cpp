class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char>v;
        for(char ch: s){
            if(v.find(ch)!=v.end()){
                return ch;
            }
            v.insert(ch);
        }
        return ' ';
    }
};
