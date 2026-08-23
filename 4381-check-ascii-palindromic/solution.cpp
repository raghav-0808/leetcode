class Solution {
public:
    bool isPalindromic(string s) {
        string bi ="";
        for(char ch :s){
            bitset<8> b(ch);
            bi +=b.to_string();
        }
        string rev= bi;
        reverse(rev.begin(),rev.end());
        return bi==rev;
        }
};
