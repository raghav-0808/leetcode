class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>a(nums1.begin(),nums1.end());
        vector<int>r;
        // set<int>b(nums2.begin(),nums2.end());
        // set<int>r;
        // set_intersection(a.begin(),a.end(),b.begin(),b.end(),inserter(r,r.begin()));
        // vector<int>nums(r.begin(),r.end());
        // return nums;
        for(int x:nums2){
            if(a.find(x)!=a.end()){
              r.push_back(x);
              a.erase(x);
            }
        }
        return r;
    }
};
