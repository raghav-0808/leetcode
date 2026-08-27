class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int>v;
        // unordered_set<int>s(friends.begin(),friends.end());
        for(int x:order){
            // if(s.find(x)!=s.end()){
            if(find(friends.begin(),friends.end(),x)!=friends.end())
                v.push_back(x);
        }
        return v;
    }
};
