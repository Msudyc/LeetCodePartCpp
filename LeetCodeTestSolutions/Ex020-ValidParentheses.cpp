/*
Given a string containing just the characters '(', ')', 
'{', '}', '[' and ']', determine if the input string is 
valid.

The brackets must close in the correct order, "()" and 
"()[]{}" are all valid but "(]" and "([)]" are not.

class Solution {
public:
    bool isValid(string s) {
        
    }
};
*/

#include <stack>
#include "Ex020-ValidParentheses.h"

namespace LeetCodeTestSolutions
{
    bool Ex20::isValid(string s)
    {
        stack<char> stk;
        int len = s.size();
        for(int i = 0; i < len; i++)
        {
            if(s[i]=='(') stk.push('(');
            else if(s[i]=='{') stk.push('{');
            else if(s[i]=='[') stk.push('[');
            else if((s[i]==')' && stk.empty()) || (s[i]==')'&& stk.top()!='(')) return false;
            else if((s[i]==']' && stk.empty()) || (s[i]==']'&& stk.top()!='[')) return false;
            else if((s[i]=='}' && stk.empty()) || (s[i]=='}'&& stk.top()!='{')) return false;
            
            if(s[i]==')' || s[i]=='}' || s[i]==']') stk.pop();
        }

        if(stk.empty()) return true;
        return false;
    }
}