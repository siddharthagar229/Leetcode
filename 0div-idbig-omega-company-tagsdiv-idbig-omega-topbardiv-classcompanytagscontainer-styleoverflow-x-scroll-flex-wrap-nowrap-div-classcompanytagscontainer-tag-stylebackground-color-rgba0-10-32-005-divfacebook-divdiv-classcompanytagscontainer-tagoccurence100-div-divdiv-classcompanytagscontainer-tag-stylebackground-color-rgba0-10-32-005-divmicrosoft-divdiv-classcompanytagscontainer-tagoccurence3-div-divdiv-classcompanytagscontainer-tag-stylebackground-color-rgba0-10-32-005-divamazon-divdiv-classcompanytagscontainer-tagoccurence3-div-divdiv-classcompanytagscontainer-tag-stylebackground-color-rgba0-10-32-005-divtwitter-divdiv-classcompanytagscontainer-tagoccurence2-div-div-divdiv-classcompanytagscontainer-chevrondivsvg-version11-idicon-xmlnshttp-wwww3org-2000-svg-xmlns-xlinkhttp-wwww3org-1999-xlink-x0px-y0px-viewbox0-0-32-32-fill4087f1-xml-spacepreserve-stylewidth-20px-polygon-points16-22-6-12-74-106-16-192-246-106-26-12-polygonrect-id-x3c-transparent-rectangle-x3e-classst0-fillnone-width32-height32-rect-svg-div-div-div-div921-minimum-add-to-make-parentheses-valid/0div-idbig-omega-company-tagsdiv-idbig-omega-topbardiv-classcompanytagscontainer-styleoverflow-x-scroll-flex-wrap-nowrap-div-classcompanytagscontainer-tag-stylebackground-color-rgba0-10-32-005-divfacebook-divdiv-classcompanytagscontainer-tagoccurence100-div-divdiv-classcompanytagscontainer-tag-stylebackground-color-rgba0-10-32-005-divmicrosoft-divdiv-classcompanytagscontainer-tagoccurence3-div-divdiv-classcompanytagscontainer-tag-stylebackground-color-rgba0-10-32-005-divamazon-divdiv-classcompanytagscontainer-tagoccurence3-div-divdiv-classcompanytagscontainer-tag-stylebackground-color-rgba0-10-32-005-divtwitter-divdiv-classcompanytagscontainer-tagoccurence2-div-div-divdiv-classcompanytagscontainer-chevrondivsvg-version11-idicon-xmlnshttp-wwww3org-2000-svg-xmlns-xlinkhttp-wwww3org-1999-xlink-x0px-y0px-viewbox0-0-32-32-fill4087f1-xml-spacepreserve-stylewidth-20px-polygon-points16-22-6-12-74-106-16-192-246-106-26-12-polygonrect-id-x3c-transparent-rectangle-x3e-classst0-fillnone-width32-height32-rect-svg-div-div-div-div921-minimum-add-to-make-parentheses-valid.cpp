class Solution {
public:
    int minAddToMakeValid(string s) {
          stack<char> stk;
        for(int i=0;i<s.length();i++)
        {
            if(stk.empty())
            {
                stk.push(s[i]);
                // continue;
            }
            else if(s[i]==')'&&stk.top()=='(')
                stk.pop();
            // else if(s[i]==')'&&stk.top()==')')
            //     stk.push(s[i]);
            // else if(s[i]=='(')
            //     stk.push(s[i]);
            else{
               stk.push(s[i]);
            }
        }
        return stk.size();
    }
};