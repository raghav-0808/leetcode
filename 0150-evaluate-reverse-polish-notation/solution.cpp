class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        int result=0;
        for(string ch : tokens){
            if(ch != "+" && ch != "-" && ch != "*" && ch != "/"){
                s.push(stoi(ch));
            }else{
                string op=ch;
                int op1=s.top();
                s.pop();
                int op2=s.top();
                s.pop();
                if(op=="+")result=op2+op1;
                else if(op=="-")result=op2-op1;
                else if(op=="*")result=op2*op1;
                else result=op2/op1;
                s.push(result);
            }
        }
        return s.top();
    }
};
