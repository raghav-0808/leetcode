class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>row;
        long long row1=1;
        row.push_back(row1);
        for(int i=1;i<=rowIndex;i++){
            row1=(row1*(rowIndex-i+1))/i;
            row.push_back(row1);
        }
        return row;
    }
};
