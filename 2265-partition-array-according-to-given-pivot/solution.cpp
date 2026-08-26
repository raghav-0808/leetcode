class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>s;
        vector<int>l;
        int c=0;
        for (int x : nums) {
            if (x < pivot) {
                s.push_back(x);
            } else if (x > pivot) {
                l.push_back(x);
            } else {
                c++;
            }
        }
        nums.clear();
        for (int x : s) {
            nums.push_back(x);
        }
        nums.insert(nums.end(),c, pivot);
        for (int x : l) {
            nums.push_back(x);
        }
        return nums;
    }
};
