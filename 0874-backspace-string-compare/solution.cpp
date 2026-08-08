class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;
        stack<char>st2;
        for(char ch :s){
           if(ch=='#'){
           if(!st.empty()) st.pop();
           }else{
            st.push(ch); 
           }
        }
          for(char sh :t){
           if(sh=='#'){
            if(!st2.empty())  st2.pop();
           }else{
            st2.push(sh); 
           }
        }
     return st==st2;
    }
};
