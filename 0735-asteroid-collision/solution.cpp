class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for (int &x : asteroids) {
            bool fl=true;
            while(!st.empty()&&st.top() > 0 && x < 0) {
                if (st.top() < abs(x)) {
                    st.pop();
                }
               else if (st.top() == abs(x)){
                    st.pop();
                    fl=false;
                    break;
               }
                else{
                    fl=false;
                    break;
                }
            }
            if(fl)
            st.push(x);
        }
        vector<int> ans(st.size());
        for (int i = st.size() - 1; i >= 0; i--) {
            ans[i] = st.top();
            st.pop();
        }
        return ans;
    }
};
