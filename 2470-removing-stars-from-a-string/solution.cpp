class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for(char ch:s){
            if(ch!='*'){
                st.push(ch);
            }else{
                st.pop();
            }
        }
        s.clear();
        while(!st.empty()){
         s+=(st.top());
         st.pop();
        }
        reverse(s.begin(),s.end());
        // string r="";
        //  for(char ch:s){
        //     if(ch!='*') r.push_back(ch);
        //     else r.pop_back();
        //  }
        // return r;
        return s;
    }
};
