/*
Given n pairs of parentheses, write a function to generate 
all combinations of well-formed parentheses. 

For example, given n = 3, a solution set is: 

"((()))", "(()())", "(())()", "()(())", "()()()" 

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
    }
};
*/

#include "Ex021-GenerateParentheses.h"

namespace LeetCodeTestSolutions
{
    vector<string> Ex21::generateParenthesis(int n)
    {
        vector<string> r;
        generate(n, n, "", r);
        return r;
    }

    void Ex21::generate(int l, int r, string s, vector<string> &res)
    {
        if(l == 0 && r== 0) res.push_back(s);
        if(l < r)
        {
            if(l > 0) generate(l - 1, r, s + "(", res);
            if(r > 0) generate(l, r - 1, s + ")", res);
        }
        else if(l == r)
        {
            if(l > 0) generate(l - 1, r, s + "(", res);
        }
    }
}