class Solution {
public:
    int strStr(string haystack, string needle) {
        int pos=-1;
        pos =haystack.find(needle);
        if(pos!=-1){
            return pos;
        }
        else{
            return -1;
        }
    }
};
