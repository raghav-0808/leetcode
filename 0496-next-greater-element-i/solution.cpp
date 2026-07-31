class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        unordered_map<int,int> m;
        for(int num :nums2){
        while(s.empty()==false && num>s.top()){
            m[s.top()]=num;
            s.pop();
        }
        s.push(num);
        }  
        vector<int> ans;
        for(int num:nums1){
            if(m.count(num)){
                ans.push_back(m[num]);
            }
            else{
                ans.push_back(-1);
            }
        }
        return ans;
    }
};
