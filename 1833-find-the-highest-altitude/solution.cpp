class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       int a=0;
        int max1=0;
        for(int x:gain){
            a+=x;
           max1=max(max1,a);
        }
        return max1;
    }
};
