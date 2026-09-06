class Solution {
public:
    int countRotations(string s, int k) {
        string a=s+s;
        int ans=0;
        int n=s.size();
        for(int i =0;i<n;i++){
            int c=0;
            for(int j =0;j<n-1;j++){
                if(a[i+j]==a[i+j+1])c++;
            }
            if(c==k)ans++;
        }
        return ans;
    }
};