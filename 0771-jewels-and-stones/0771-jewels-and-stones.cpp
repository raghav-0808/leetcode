class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>s(jewels.begin(),jewels.end());
        int c=0;
        for(char st:stones){
            if(s.count(st)){
                c++;
            }
        }
        return c;
    }
};