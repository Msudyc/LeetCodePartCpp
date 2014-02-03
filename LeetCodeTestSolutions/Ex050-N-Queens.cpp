/*
The n-queens puzzle is the problem of placing n queens on 
an n×n chessboard such that no two queens attack each other.

Given an integer n, return all distinct solutions to the 
n-queens puzzle.

Each solution contains a distinct board configuration of 
the n-queens' placement, where 'Q' and '.' both indicate 
a queen and an empty space respectively.

For example,
 There exist two distinct solutions to the 4-queens puzzle:
[
 [".Q..",  // Solution 1
  "...Q",
  "Q...",
  "..Q."],

 ["..Q.",  // Solution 2
  "Q...",
  "...Q",
  ".Q.."]
]

class Solution {
public:
    vector<vector<string> > solveNQueens(int n) {
        
    }
};
*/

#include "Ex050-N-Queens.h"

namespace LeetCodeTestSolutions
{
    vector<vector<string> > Ex50::solveNQueens(int n)
    {
        vector<vector<string> > ret;
        vector<int> result(n);
        dfs(ret, result, 0);
        return ret; 
    }
    
    void Ex50::dfs(vector<vector<string> > &ret, vector<int> &result, int cur)
    {
        if(result.size() == cur)
        {
            vector<string> r;
            for(int i = 0; i < (int)result.size(); i++)
            {
                string str(result.size(),'.');
                str[result[i]] = 'Q';
                r.push_back(str);
            }
            
            ret.push_back(r);
        } 
        else 
        {
            for(int i = 0; i < (int)result.size(); i++) 
            {
                if(isValid(result, cur, i)) 
                {
                    result[cur] = i;
                    dfs(ret, result, cur+1); 
                } 
            }
        } 
    }
    
    bool Ex50::isValid(vector<int> &result, int cur, int val)
    {
        for(int i = 0; i < cur; i++)
        {
            if(val == result[i]) return false;
            else if(abs(val - result[i]) == abs(i - cur))
                return false;
        } 
        
        return true;
    }
}