class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                stack.push(ch);
            } else {
                if (stack.empty()){
                    return false;}
                if (ch == ')' && stack.top() == '(' ||
                    ch == '}' && stack.top() == '{' ||
                    ch == ']' && stack.top() == '[')
                    {stack.pop();}
                else{
                    return false;
                }
            }
        }
        return (stack.empty());
    }
};
