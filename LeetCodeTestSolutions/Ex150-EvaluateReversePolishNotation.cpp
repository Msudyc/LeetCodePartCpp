/*
Evaluate the value of an arithmetic expression in Reverse 
Polish Notation. Valid operators are +, -, *, /. Each operand
may be an integer or another expression. 

Some examples:

  ["2", "1", "+", "3", "*"] -> ((2 + 1) * 3) -> 9
  ["4", "13", "5", "/", "+"] -> (4 + (13 / 5)) -> 6

class Solution {
public:
    int evalRPN(vector<string> &tokens) {
        
    }
};
*/

#include <stack>
#include "Ex150-EvaluateReversePolishNotation.h"

namespace LeetCodeTestSolutions
{
    int Ex150::evalRPN(vector<string> &tokens)
    {
        int result, n = tokens.size();
        stack<string> s;
        for (int i = 0; i < n; i++)
        {
            if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/")
                s.push(tokens[i]);
            else 
            {
                int right = stoi(s.top());
                s.pop();
                int left = stoi(s.top());
                s.pop();
                if (tokens[i] == "+") result = left + right; 
                else if (tokens[i] == "-") result = left - right;
                else if (tokens[i] == "*") result = left * right;
                else if (tokens[i] == "/") result = left / right;
                s.push(to_string(result));
            }
        }
        
        result = stoi(s.top());
        return result;
    }
}