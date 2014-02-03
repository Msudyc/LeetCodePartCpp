/*
Given a string containing just the characters '(' and
')', find the length of the longest valid (well-formed) 
parentheses substring. 

For "(()", the longest valid parentheses substring is "()", 
which has length = 2. 

Another example is ")()())", where the longest valid 
parentheses substring is "()()", which has length = 4. 

class Solution {
public:
    int longestValidParentheses(string s) {
        
    }
};
*/

#include <stack>
#include "Ex031-LongestValidParentheses.h"

namespace LeetCodeTestSolutions
{
    int Ex31::longestValidParentheses(string s)
    {
        int res = 0, last = -1;
        stack<int> lefts;
        for(int i = 0; i < (int)s.size(); i++)
        {
            if(s[i] == '(') lefts.push(i);
            else if(s[i] == ')')
            {
                if(lefts.empty()) last = i; // no matching left
                else
                {
                    // find a matching pair
                    lefts.pop();
                    if(lefts.empty()) res = max(res, i - last);
                    else res = max(res, i - lefts.top());
                }
            }
        }

        return res;
    }
}