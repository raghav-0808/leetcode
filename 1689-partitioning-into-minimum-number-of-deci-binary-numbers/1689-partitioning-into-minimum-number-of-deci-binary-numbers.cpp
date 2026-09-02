class Solution {
public:
    int minPartitions(string n) {
        char ch='0';
        for(char c:n){
            if(c>ch){
                ch=c;
            }
        }
        return ch-'0';
    }
};