class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>r;
        for(int x:nums1){
            auto it =find(nums2.begin(),nums2.end(),x);
            if(it!=nums2.end()){
              r.push_back(x);
              nums2.erase(it);
            }
        }
        return r;
    }
    
};
