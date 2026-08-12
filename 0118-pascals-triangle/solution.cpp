class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int I=1;I<=numRows;I++){
        vector<int>row;
        long long row1=1;
        row.push_back(row1);
        for(int i=1;i<=I-1;i++){
            row1=(row1*(I-i))/i;
            row.push_back(row1);
        }
        ans.push_back(row);
        }
        return ans;
    }
};
