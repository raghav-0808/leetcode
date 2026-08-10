class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int row = mat.size();
        int rot = 0;
        while (mat != target && rot<4) {
            rot++;
            for (int i = 0; i < row; i++) {
                for (int j = i + 1; j < row; j++) {
                    swap(mat[i][j], mat[j][i]);
                }
                reverse(mat[i].begin(), mat[i].end());
            }
        }
        return mat == target;
    }
};
