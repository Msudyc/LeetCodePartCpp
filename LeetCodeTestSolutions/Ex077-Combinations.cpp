/*
Given two integers n and k, return all possible 
combinations of k numbers out of 1 ... n. 

For example,
 If n = 4 and k = 2, a solution is: 
[
  [2,4],
  [3,4],
  [2,3],
  [1,2],
  [1,3],
  [1,4],
]

class Solution {
public:
    vector<vector<int> > combine(int n, int k) {
        
    }
};
*/

#include "Ex077-Combinations.h"

namespace LeetCodeTestSolutions
{    
    vector<vector<int> > Ex77::combine(int n, int k)
    {        
        vector<vector<int> > ret, temp(1);
        for (int i = 1; i <= n; i++)
            for (int j = temp.size() - 1; j >= 0; j--) 
                if (temp[j].size() == k - 1) 
                {
                    ret.push_back(temp[j]);
                    ret.back().push_back(i);
                } 
                else 
                {
                    temp.push_back(temp[j]);
                    temp.back().push_back(i);
                }

        return ret;
    }

    vector<vector<int> > Ex77::combine1(int n, int k)
    {
        vector<vector<int> > ret;
        vector<int> combination;
        dfs(ret, combination, 1, n, k);
        return ret;
    }

    void Ex77::dfs(vector<vector<int> >& result, vector<int>& combination, int next, int n, int k)
    {
         if(combination.size() == k)
             result.push_back(combination);
            
         for(int i = next; i <= n; i++)
         {
             combination.push_back(i);
             dfs(result, combination, i + 1, n, k);
             combination.pop_back();
         }
    }
}