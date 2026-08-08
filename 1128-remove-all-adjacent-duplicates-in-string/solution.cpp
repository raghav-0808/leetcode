class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(char ch:s){
            if(!st.empty() && ch==st.top()){
                st.pop();
            }else{
                st.push(ch);
            }
        }
       string s1="";
        while(!st.empty()){
            s1.push_back(st.top());
            st.pop();
        }
        reverse(s1.begin(),s1.end());
        return s1;
    }
};
