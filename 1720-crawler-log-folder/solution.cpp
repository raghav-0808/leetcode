class Solution {
public:
    int minOperations(vector<string>& logs) {
        int depth = 0;
        for (auto s : logs) {
            if (s == "../") {
                depth--;
                if (depth < 0)
                    depth = 0;
            } else if (s == "./")
                continue;
            else
                depth++;
        }
        return depth;
    }
};
