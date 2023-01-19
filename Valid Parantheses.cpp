class Solution {
public:
    bool isValid(string s) {
        stack <char> stack;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            stack.push(s[i]);
            else 
            {if(stack.empty() || (stack.top()=='(' and s[i]!=')') || (stack.top()=='{' and s[i]!='}') || (stack.top()=='[' and s[i]!=']'))
             return false;
             stack.pop();
            }
        }
        return stack.empty();
    }
};
