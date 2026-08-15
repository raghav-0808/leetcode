class Solution {
public:
    int countAsterisks(string s) {
        bool fl=true;
        int c=0;
        for(char ch : s){
            if(ch=='|') fl=!fl;
            if(ch=='*'&&fl==true)c++;
        }
        return c;
    }
};
