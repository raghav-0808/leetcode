class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int>m;
        int c=0;
        vector<int>C(B.size());
        for(int i =0;i<B.size();i++){
            m[A[i]]++;
            if(m[A[i]]==2){
                c++;
            }
            m[B[i]]++;
            if(m[B[i]]==2){
                c++;
            }
            C[i]=c;
        }
        return C;
    }
};